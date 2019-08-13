/**
 * @file LocationManager.h
 * @author Alain CELESTE (alain.celeste@polaris-innovation.com)
 * @brief 
 * @version 0.1
 * @date 2019-08-13
 * 
 * @copyright Copyright (c) 2019 Polaris Innovation
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __LOCATION_MANAGER_H__
#define __LOCATION_MANAGER_H__
#include "mbed.h"
#include <string>
#include "GNSSLoc.h"
#include "BG96Interface.h"

class LocationManager
{
public:
    LocationManager(BG96Interface *bg96, Mutex * bg96mutex);
    ~LocationManager();
    bool tryGetGNSSLocation(GNSSLoc &current_location, int tries);
    void getCurrentLatitude(double &latitude);
    void getCurrentLongitude(double &longitude);
    void getCurrentUTCTime(std::string &utc_time);
private:
    bool getGNSSLocation(GNSSLoc &current_location);
    Timer _timeout;
    BG96Interface *_bg96;
    GNSSLoc _current_loc;
    Mutex * _loc_m_mutex;
};

#endif //__LOCATION_MANAGER_H__