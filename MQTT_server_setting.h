#ifndef __MQTT_SERVER_SETTING_H__
#define __MQTT_SERVER_SETTING_H__

const int AZURE_IOTHUB_SAS_TOKEN_DEFAULT_EXPIRY_TIME = 3600;

const char* DEVICE_ID = "Test-Device-1";
const char* DEVICE_KEY = "YQOz+pLx0VIN5H/84HCEdFs+hyComVUpn3ggzmY6eRc=";


//const char* SAS_TOKEN = "SharedAccessSignature sr=BTL-IOT-Hub.azure-devices.net%%2Fdevices%%2FTest-Device-1&sig=fbXuNNuWrr7B1AKQPDbKAqF%%2FUhLW4miV4%%2Fks5f5DZWQ%%3D&se=1546975302";
//const char* SAS_TOKEN = "SharedAccessSignature sr=BTL-IOT-Hub.azure-devices.net%%2Fdevices%%2FTest-Device-1&sig=Wne3BHnFf0QyKmpzOfI0%%2Be%%2FqUrPp9ohjFm2lEhSRadM%%3D&se=1548194647";
//const char* SAS_TOKEN = "SharedAccessSignature sr=BTL-IOT-Hub.azure-devices.net%%2Fdevices%%2FTest-Device-1&sig=TpR3zvMdoXeOD5FgcK7MVPH5wb0%%2BSM9d7szApkjjRJc%%3D&se=1548783935";
//const char* SAS_TOKEN = "SharedAccessSignature sr=BTL-IOT-Hub.azure-devices.net%%2Fdevices%%2FTest-Device-1&sig=7nmpoO0xtkXROT%%2BMdPBVwBMO8t%%2BR2Y8TXMGjTOE6mvk%%3D&se=1548922883";

const char* MQTT_SERVER_HOST_NAME = "BTL-IOT-Hub.azure-devices.net";

const int MQTT_SERVER_PORT = 8883;

/*
 * Root CA certificate here in PEM format.
 * "-----BEGIN CERTIFICATE-----\n"
 * ...
 * "-----END CERTIFICATE-----\n";
 */
// Obtained from https://os.mbed.com/users/AzureIoTClient/code/simplesample_mqtt/file/c48c89945a83/certs.c/
const char* SSL_CA_PEM =
// /* Self-signed CA certificate - valid 30 days from 29/01/2019 */
// "-----BEGIN CERTIFICATE-----\n"
// "MIIFOjCCAyKgAwIBAgIJAOzDHy43PW3eMA0GCSqGSIb3DQEBCwUAMCoxKDAmBgNV\n"
// "BAMMH0F6dXJlIElvVCBIdWIgQ0EgQ2VydCBUZXN0IE9ubHkwHhcNMTkwMTI5MjIy\n"
// "MzQxWhcNMTkwMjI4MjIyMzQxWjAqMSgwJgYDVQQDDB9BenVyZSBJb1QgSHViIENB\n"
// "IENlcnQgVGVzdCBPbmx5MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA\n"
// "wksYzxsJCd/2qmelcu4HcKCiyNwgRnJ1jR6V26rxejLqEWuFjiON6UPrJejJPMas\n"
// "a3eqZkSzT29mJkIAdIF0Waa5UVNGi46yp0P5qarC0SgS2B3KRn8WHyvwXg9WNM5Z\n"
// "vo98PaDyMM3ngYNUXehkP+PUqqW2M367AqpLU6BZbaEOikpsBEfxelHonkcHlQz+\n"
// "AGh4mpxrbW5RGvmakytkYG6iKyOvScpH0R8d3xzY+vte9SEiE5irBIzUE1/M0Qmq\n"
// "yx2vkofqxZtL3lbHf+p4qpigzjyQy/qMoL8r8TZZTKwB4reb6g/IVWgrrUA6udII\n"
// "130dd4E+Hv5m4tOZ2884KXnI2wRHT9AM6GFO/FUocbA3VcRG01lmU86CuqZTGCua\n"
// "qvj9z19vHG4HCW4rePbHwkE62NyjS3bh+2M4R5DvWhxGGEE0EfA8JbqRpTbKzSoy\n"
// "VBogPSWd36CAAlYbT95FLe5B/mpvyx0Wo1NUYIaYmwQKE18Gry5LP5RdIPvBak1K\n"
// "2SFclFzu9h7ajsfh9DgJKDbWB30RxwR7MQHBWwqsiqvYODiXnDSQAb1OLSrxTM9Z\n"
// "ji2TFLdoUdJ9igj29ifdwu8UWobB7X/+BXsIMwEI7cumOCYTW+GYvEtDtWIFtpPN\n"
// "Vm9S12Og5ZZhjTzX3guimn8Aco97piL8UjDXGbyi1iMCAwEAAaNjMGEwHQYDVR0O\n"
// "BBYEFLqVtTfuLLT6A8/xIunBq5yBBZH3MB8GA1UdIwQYMBaAFLqVtTfuLLT6A8/x\n"
// "IunBq5yBBZH3MA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgGGMA0GCSqG\n"
// "SIb3DQEBCwUAA4ICAQAG9wAjFxOZ0DkRfDDimZ0a8SmZyRc8uGsCSuxSi4TvDJnH\n"
// "ZZdNivg0cRO3+L4YFvPNepFnQ4ZFF+q5sYZ/8JUQHhCqPm/+K0IpCUo+na/ldVNo\n"
// "Zi8vcMlG4ViGfZ1u0gmmevnzqpbaeszwZmzW68aFU9LkcYqEZv+sogtkQgQk3emG\n"
// "vAQ+WHioyiOHencBG45fCiYsWxIkaesRYtk+DJS+JxmPb8IRK0P7sd1fA5EWIA3H\n"
// "F6fELIbrGpvAu/MIrH4rzuUmx+n1JQ4hIbCc8i0Vo9xxdYjX3LADmkFh2R8OzrKS\n"
// "TCk9Z7QqJlZwMG+e89cTLaMVqDirDzhJj2NsJXOf4Obsn7FOnAvPOgky829djXZx\n"
// "3SICmcU77rmT/MzJLoFxyHNnsdVbQNTYbBgviRyFUUuF1AlWixechZDR3a+cHL9D\n"
// "8/Spym9MSTiwlJUgH1RuKMU5E2E2wAqClqA2Fj18Nw6BwYYqpxjoVTHI/d/a07YR\n"
// "BWIMqkdNeFSrgsZT16BgtAO4bLBWV+rzEw7Y487JgVusyg9UQoOREpQ+fzbd+tuX\n"
// "SM+kqN97ufGEs9FMuCe0wFuQKwXvB2RsH7lt/3HOBS+WX/r/o8ErNcK6V2Q1mShe\n"
// "38Oc/EXfecSeH3qX4XEA8YKLKjgknqPvDCi+VQlh6CVRHRvYIf/v4fTJ1MrHEg==\n"
// "-----END CERTIFICATE-----\n"
// ;

/* DigiCert Baltimore Root */
"-----BEGIN CERTIFICATE-----\n"
"MIIDdzCCAl+gAwIBAgIEAgAAuTANBgkqhkiG9w0BAQUFADBaMQswCQYDVQQGEwJJ\n"
"RTESMBAGA1UEChMJQmFsdGltb3JlMRMwEQYDVQQLEwpDeWJlclRydXN0MSIwIAYD\n"
"VQQDExlCYWx0aW1vcmUgQ3liZXJUcnVzdCBSb290MB4XDTAwMDUxMjE4NDYwMFoX\n"
"DTI1MDUxMjIzNTkwMFowWjELMAkGA1UEBhMCSUUxEjAQBgNVBAoTCUJhbHRpbW9y\n"
"ZTETMBEGA1UECxMKQ3liZXJUcnVzdDEiMCAGA1UEAxMZQmFsdGltb3JlIEN5YmVy\n"
"VHJ1c3QgUm9vdDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKMEuyKr\n"
"mD1X6CZymrV51Cni4eiVgLGw41uOKymaZN+hXe2wCQVt2yguzmKiYv60iNoS6zjr\n"
"IZ3AQSsBUnuId9Mcj8e6uYi1agnnc+gRQKfRzMpijS3ljwumUNKoUMMo6vWrJYeK\n"
"mpYcqWe4PwzV9/lSEy/CG9VwcPCPwBLKBsua4dnKM3p31vjsufFoREJIE9LAwqSu\n"
"XmD+tqYF/LTdB1kC1FkYmGP1pWPgkAx9XbIGevOF6uvUA65ehD5f/xXtabz5OTZy\n"
"dc93Uk3zyZAsuT3lySNTPx8kmCFcB5kpvcY67Oduhjprl3RjM71oGDHweI12v/ye\n"
"jl0qhqdNkNwnGjkCAwEAAaNFMEMwHQYDVR0OBBYEFOWdWTCCR1jMrPoIVDaGezq1\n"
"BE3wMBIGA1UdEwEB/wQIMAYBAf8CAQMwDgYDVR0PAQH/BAQDAgEGMA0GCSqGSIb3\n"
"DQEBBQUAA4IBAQCFDF2O5G9RaEIFoN27TyclhAO992T9Ldcw46QQF+vaKSm2eT92\n"
"9hkTI7gQCvlYpNRhcL0EYWoSihfVCr3FvDB81ukMJY2GQE/szKN+OMY3EU/t3Wgx\n"
"jkzSswF07r51XgdIGn9w/xZchMB5hbgF/X++ZRGjD8ACtPhSNzkE1akxehi/oCr0\n"
"Epn3o0WC4zxe9Z2etciefC7IpJ5OCBRLbf1wbWsaY71k5h+3zvDyny67G7fyUIhz\n"
"ksLi4xaNmjICq44Y3ekQEe5+NauQrz4wlHrQMz2nZQ/1/I6eYs9HRCwBXbsdtTLS\n"
"R9I4LtD+gdwyah617jzV/OeBHRnDJELqYzmp\n"
"-----END CERTIFICATE-----\r\n"
/*DigiCert Global Root CA*/
"-----BEGIN CERTIFICATE-----\r\n"
"MIIDrzCCApegAwIBAgIQCDvgVpBCRrGhdWrJWZHHSjANBgkqhkiG9w0BAQUFADBh\n"
"MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\n"
"d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBD\n"
"QTAeFw0wNjExMTAwMDAwMDBaFw0zMTExMTAwMDAwMDBaMGExCzAJBgNVBAYTAlVT\n"
"MRUwEwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5j\n"
"b20xIDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IENBMIIBIjANBgkqhkiG\n"
"9w0BAQEFAAOCAQ8AMIIBCgKCAQEA4jvhEXLeqKTTo1eqUKKPC3eQyaKl7hLOllsB\n"
"CSDMAZOnTjC3U/dDxGkAV53ijSLdhwZAAIEJzs4bg7/fzTtxRuLWZscFs3YnFo97\n"
"nh6Vfe63SKMI2tavegw5BmV/Sl0fvBf4q77uKNd0f3p4mVmFaG5cIzJLv07A6Fpt\n"
"43C/dxC//AH2hdmoRBBYMql1GNXRor5H4idq9Joz+EkIYIvUX7Q6hL+hqkpMfT7P\n"
"T19sdl6gSzeRntwi5m3OFBqOasv+zbMUZBfHWymeMr/y7vrTC0LUq7dBMtoM1O/4\n"
"gdW7jVg/tRvoSSiicNoxBN33shbyTApOB6jtSj1etX+jkMOvJwIDAQABo2MwYTAO\n"
"BgNVHQ8BAf8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUA95QNVbR\n"
"TLtm8KPiGxvDl7I90VUwHwYDVR0jBBgwFoAUA95QNVbRTLtm8KPiGxvDl7I90VUw\n"
"DQYJKoZIhvcNAQEFBQADggEBAMucN6pIExIK+t1EnE9SsPTfrgT1eXkIoyQY/Esr\n"
"hMAtudXH/vTBH1jLuG2cenTnmCmrEbXjcKChzUyImZOMkXDiqw8cvpOp/2PV5Adg\n"
"06O/nVsJ8dWO41P0jmP6P6fbtGbfYmbW0W5BjfIttep3Sp+dWOIrWcBAI+0tKIJF\n"
"PnlUkiaY4IBIqDfv8NZ5YBberOgOzW6sRBc4L0na4UU+Krk2U886UAb3LujEV0ls\n"
"YSEY1QSteDwsOoBrp+uvFRTp2InBuThs4pFsiv9kuXclVzDAGySj4dzp30d8tbQk\n"
"CAUw7C29C79Fv1C5qfPrmAESrciIxpg0X40KPMbp1ZWVbd4=\n"
"-----END CERTIFICATE-----\n"
/*D-TRUST Root Class 3 CA 2 2009*/
"-----BEGIN CERTIFICATE-----\n"
"MIIEMzCCAxugAwIBAgIDCYPzMA0GCSqGSIb3DQEBCwUAME0xCzAJBgNVBAYTAkRF\n"
"MRUwEwYDVQQKDAxELVRydXN0IEdtYkgxJzAlBgNVBAMMHkQtVFJVU1QgUm9vdCBD\n"
"bGFzcyAzIENBIDIgMjAwOTAeFw0wOTExMDUwODM1NThaFw0yOTExMDUwODM1NTha\n"
"ME0xCzAJBgNVBAYTAkRFMRUwEwYDVQQKDAxELVRydXN0IEdtYkgxJzAlBgNVBAMM\n"
"HkQtVFJVU1QgUm9vdCBDbGFzcyAzIENBIDIgMjAwOTCCASIwDQYJKoZIhvcNAQEB\n"
"BQADggEPADCCAQoCggEBANOySs96R+91myP6Oi/WUEWJNTrGa9v+2wBoqOADER03\n"
"UAifTUpolDWzU9GUY6cgVq/eUXjsKj3zSEhQPgrfRlWLJ23DEE0NkVJD2IfgXU42\n"
"tSHKXzlABF9bfsyjxiupQB7ZNoTWSPOSHjRGICTBpFGOShrvUD9pXRl/RcPHAY9R\n"
"ySPocq60vFYJfxLLHLGvKZAKyVXMD9O0Gu1HNVpK7ZxzBCHQqr0ME7UAyiZsxGsM\n"
"lFqVlNpQmvH/pStmMaTJOKDfHR+4CS7zp+hnUquVH+BGPtikw8paxTGA6Eian5Rp\n"
"/hnd2HN8gcqW3o7tszIFZYQ05ub9VxC1X3a/L7AQDcUCAwEAAaOCARowggEWMA8G\n"
"A1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFP3aFMSfMN4hvR5COfyrYyNJ4PGEMA4G\n"
"A1UdDwEB/wQEAwIBBjCB0wYDVR0fBIHLMIHIMIGAoH6gfIZ6bGRhcDovL2RpcmVj\n"
"dG9yeS5kLXRydXN0Lm5ldC9DTj1ELVRSVVNUJTIwUm9vdCUyMENsYXNzJTIwMyUy\n"
"MENBJTIwMiUyMDIwMDksTz1ELVRydXN0JTIwR21iSCxDPURFP2NlcnRpZmljYXRl\n"
"cmV2b2NhdGlvbmxpc3QwQ6BBoD+GPWh0dHA6Ly93d3cuZC10cnVzdC5uZXQvY3Js\n"
"L2QtdHJ1c3Rfcm9vdF9jbGFzc18zX2NhXzJfMjAwOS5jcmwwDQYJKoZIhvcNAQEL\n"
"BQADggEBAH+X2zDI36ScfSF6gHDOFBJpiBSVYEQBrLLpME+bUMJm2H6NMLVwMeni\n"
"acfzcNsgFYbQDfC+rAF1hM5+n02/t2A7nPPKHeJeaNijnZflQGDSNiH+0LS4F9p0\n"
"o3/U37CYAqxva2ssJSRyoWXuJVrl5jLn8t+rSfrzkGkj2wTZ51xY/GXUl77M/C4K\n"
"zCUqNQT4YJEVdT1B/yMfGchs64JTBKbkTCJNjYy6zltz7GRUUG3RnFX7acM2w4y8\n"
"PIWmawomDeCTmGCufsYkl4phX5GOZpIJhzbNi5stPvZR1FDUWSi9g/LMKHtThm3Y\n"
"Johw1+qRzT65ysCQblrGXnRl11z+o+I=\n"
"-----END CERTIFICATE-----\n"
/*WoSign*/
"-----BEGIN CERTIFICATE-----\n"
"MIIFdjCCA16gAwIBAgIQXmjWEXGUY1BWAGjzPsnFkTANBgkqhkiG9w0BAQUFADBV\n"
"MQswCQYDVQQGEwJDTjEaMBgGA1UEChMRV29TaWduIENBIExpbWl0ZWQxKjAoBgNV\n"
"BAMTIUNlcnRpZmljYXRpb24gQXV0aG9yaXR5IG9mIFdvU2lnbjAeFw0wOTA4MDgw\n"
"MTAwMDFaFw0zOTA4MDgwMTAwMDFaMFUxCzAJBgNVBAYTAkNOMRowGAYDVQQKExFX\n"
"b1NpZ24gQ0EgTGltaXRlZDEqMCgGA1UEAxMhQ2VydGlmaWNhdGlvbiBBdXRob3Jp\n"
"dHkgb2YgV29TaWduMIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAvcqN\n"
"rLiRFVaXe2tcesLea9mhsMMQI/qnobLMMfo+2aYpbxY94Gv4uEBf2zmoAHqLoE1U\n"
"fcIiePyOCbiohdfMlZdLdNiefvAA5A6JrkkoRBoQmTIPJYhTpA2zDxIIFgsDcScc\n"
"f+Hb0v1naMQFXQoOXXDX2JegvFNBmpGN9J42Znp+VsGQX+axaCA2pIwkLCxHC1l2\n"
"ZjC1vt7tj/id07sBMOby8w7gLJKA84X5KIq0VC6a7fd2/BVoFutKbOsuEo/Uz/4M\n"
"x1wdC34FMr5esAkqQtXJTpCzWQ27en7N1QhatH/YHGkR+ScPewavVIMYe+HdVHpR\n"
"aG53/Ma/UkpmRqGyZxq7o093oL5d//xWC0Nyd5DKnvnyOfUNqfTq1+ezEC8wQjch\n"
"zDBwyYaYD8xYTYO7feUapTeNtqwylwA6Y3EkHp43xP901DfA4v6IRmAR3Qg/UDar\n"
"uHqklWJqbrDKaiFaafPz+x1wOZXzp26mgYmhiMU7ccqjUu6Du/2gd/Tkb+dC221K\n"
"mYo0SLwX3OSACCK28jHAPwQ+658geda4BmRkAjHXqc1S+4RFaQkAKtxVi8QGRkvA\n"
"Sh0JWzko/amrzgD5LkhLJuYwTKVYyrREgk/nkR4zw7CT/xH8gdLKH3Ep3XZPkiWv\n"
"HYG3Dy+MwwbMLyejSuQOmbp8HkUff6oZRZb9/D0CAwEAAaNCMEAwDgYDVR0PAQH/\n"
"BAQDAgEGMA8GA1UdEwEB/wQFMAMBAf8wHQYDVR0OBBYEFOFmzw7R8bNLtwYgFP6H\n"
"EtX2/vs+MA0GCSqGSIb3DQEBBQUAA4ICAQCoy3JAsnbBfnv8rWTjMnvMPLZdRtP1\n"
"LOJwXcgu2AZ9mNELIaCJWSQBnfmvCX0KI4I01fx8cpm5o9dU9OpScA7F9dY74ToJ\n"
"MuYhOZO9sxXqT2r09Ys/L3yNWC7F4TmgPsc9SnOeQHrAK2GpZ8nzJLmzbVUsWh2e\n"
"JXLOC62qx1ViC777Y7NhRCOjy+EaDveaBk3e1CNOIZZbOVtXHS9dCF4Jef98l7VN\n"
"g64N1uajeeAz0JmWAjCnPv/So0M/BVoG6kQC2nz4SNAzqfkHx5Xh9T71XXG68pWp\n"
"dIhhWeO/yloTunK0jF02h+mmxTwTv97QRCbut+wucPrXnbes5cVAWubXbHssw1ab\n"
"R80LzvobtCHXt2a49CUwi1wNuepnsvRtrtWhnk/Yn+knArAdBtaP4/tIEp9/EaEQ\n"
"PkxROpaw0RPxx9gmrjrKkcRpnd8BKWRRb2jaFOwIQZeQjdCygPLPwj2/kWjFgGce\n"
"xGATVdVhmVd8upUPYUk6ynW8yQqTP2cOEvIo4jEbwFcW3wh8GcF+Dx+FHgo2fFt+\n"
"J7x6v+Db9NpSvd4MVHAxkUOVyLzwPt0JfjBkUO1/AaQzZ01oT74V77D2AhGiGxMl\n"
"OtzCWfHjXEa7ZywCRuoeSKbmW9m1vFGikpbbqsY3Iqb+zCB0oy2pLmvLwIIRIbWT\n"
"ee5Ehr7XHuQe+w==\n"
"-----END CERTIFICATE-----\n"

;


/*
 * (optional) Client certificate here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN CERTIFICATE-----\n"
 * ...
 * "-----END CERTIFICATE-----\n";
 */
const char* SSL_CLIENT_CERT_PEM = NULL;
// /* Full chain client certificate */
// "-----BEGIN CERTIFICATE-----\n"
// "MIIFLTCCAxWgAwIBAgIBBTANBgkqhkiG9w0BAQsFADA0MTIwMAYDVQQDDClBenVy\n"
// "ZSBJb1QgSHViIEludGVybWVkaWF0ZSBDZXJ0IFRlc3QgT25seTAeFw0xOTAxMjky\n"
// "MjQ2MDJaFw0xOTAyMjgyMjQ2MDJaMBsxGTAXBgNVBAMMEFRlc3QtRGV2aWNlLTMu\n"
// "Y2EwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDLEAB1f7gad104B2Ya\n"
// "5yaTDsAm3uNMRWW4avvo+fg5zH4IWMOcQK6hqWjUIXUf8ekYBGSNpOCTaQyOu9lx\n"
// "lhgchS+soDbSaO8DdCyTG2C18EH9mnjDzvOUSIyOLP8tGXurTH82dIxEz3Bc6/yQ\n"
// "eJfwFKq8XYtO/+VHRPaJChv54UMAIt9P4qdNX03KMMz9xZkx+S9Em+VEb7Bavqoi\n"
// "m382zrTLJ70wAzqSxrJCPgKUw2iI+PCubDtHXymetZewStkAAXmvyXBWGAPWhIui\n"
// "S6+XtNcJyDAax0i+32EYnZCtyTfnpH8NRE6QkUicQBMS4ShA1yoeGHHalirJ8q2e\n"
// "ExdV2gPLv4dmpDn3c6mGrOBYksP67aT6sQTY2TbejVhVt6ea8sCNY5TBCa0MENjM\n"
// "EFNaZgTf7dzJCYKhZNnrWmW82iJQ8F20kHraNi7rtMeMWO2PDkNjYmVcIwhkLMA2\n"
// "jCH/bJnbGguLyDQwLgDE95I3K/Nu+UHLqqRaF7bpxSj9hsVy6aCcBCn0cNchVjZD\n"
// "DFO4y+c536Sbeutb3XcjxfOzLK/b0MwF+XNugXYqEMtQrxuR6+FZ5x4itLfB1WyY\n"
// "XG7hnn2HJ1gBelYefuMkjrF6Vd/iQtmqoRZlO9WFVCnACYE6up8dn/bdxH1Ltc2/\n"
// "YXkmP42a6H5AchYY2SgBi++TgwIDAQABo2MwYTAdBgNVHQ4EFgQUn3ZyWl1ik0RT\n"
// "K9XPe0xA12CW21owHwYDVR0jBBgwFoAUQzIB7cbCGfwKeVejiL9gqRAnSYIwDwYD\n"
// "VR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAYYwDQYJKoZIhvcNAQELBQADggIB\n"
// "AJRsQ0/W6V498Ou9hXLkRkLFqdTNwVlW1OKcCw7OxcTDkzvIFJ1tA4IxK5e4eq74\n"
// "HgLCSX8y7/nah/KJOrO2UNz+KORjozzjiTIeC97g+7spb90//tcGrEyd/hBHravS\n"
// "t6xQliAQQygBYn4N9SP8IQjYKN3Z96Kd+c9E6flTLxlgB4EhXURbc7kjP7wLjeXZ\n"
// "RX4HmKiTKlWvryDEqHplVZnr9dLFGh4E+Ny52s/TfojhWeFyHZud5h/8zJ08YB+y\n"
// "DPgNBb89jXOQ8JoXIldiA7Ms7OU0zIkeafkcRs35q8/RGkapMAzHZnJ9/3ew2S11\n"
// "W5Tai/on7F4N/byxpvAvat6boi50iXrc3333JiU/VosSwDR3TZrjNKzfr5c01WTV\n"
// "TFYo/ETh9+iFCTXTv933/nkbBqyjXA/rBRItVKbq7qtJtfryxrgzIrXdNEJycRLt\n"
// "SAfsyS3Gw8zepiEoZDdzqlnw0Xoq2RfawlU2hCxOoPISEoQXExTvEnnHxp7PjC7D\n"
// "QUJ15vG+qvRSvZHG0idFzCFxKvd8HQQW274DwvrT1xq+otNuSz7NwgtdGO2bRZww\n"
// "iqDoptqFfbykXCBJ46dS0z0JbiYkEg8TfaPCDN0/wSDBe3ATWNywy2RDhLxwtwyg\n"
// "wSioHnCGa0nMlKH0uoEQ1OzynclFEmeNWOOhMR7+O5gv\n"
// "-----END CERTIFICATE-----\n"
// "-----BEGIN CERTIFICATE-----\n"
// "MIIFPDCCAySgAwIBAgIBATANBgkqhkiG9w0BAQsFADAqMSgwJgYDVQQDDB9BenVy\n"
// "ZSBJb1QgSHViIENBIENlcnQgVGVzdCBPbmx5MB4XDTE5MDEyOTIyMjM1NloXDTE5\n"
// "MDIyODIyMjM1NlowNDEyMDAGA1UEAwwpQXp1cmUgSW9UIEh1YiBJbnRlcm1lZGlh\n"
// "dGUgQ2VydCBUZXN0IE9ubHkwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoIC\n"
// "AQCt8cZS3NvzuLUhapYkRp8Bz9U1bLFrGtRzMxz7KdopZC3pX/WaPceMWYlYfSqB\n"
// "q4LpL9BqQdCfVmWdD7Sn21/U+qkl2z8hOLXbyiThxPj0/AhNo5IuGHg0rhsiJdbC\n"
// "WKdWOsVJHfi2Gfy25WNLu6yxfSNrNET0qkhDLc5yDcxDoiJOPE0DsQNabxWLsMFf\n"
// "sZggzZuavF4wKjNhqM3308hbtSfs7Ps/2TfMiDK6GR4LETp+qTefByyCvBAye5fx\n"
// "jUioYZ8Dr90dntH7L61LsiQKyH9xljSrAuXY8a/8BQB9z48cH/AdCw16TCrJjh6i\n"
// "D2EI/CDmqzM9aY4FMCAYUIdBt2pEm8tCKIDY8zp8JEs/seKFZsyIdbJmjFlkmEhC\n"
// "Za8MuUNS6AgvYFtynM7BuiP53GCYuYEit7QmdqZczBgoKduCylRk3ZC1/fF81u/s\n"
// "6Cxvx4UdvwJMavhlH5pFNuByCyTsa2GcVSXPqYEwHR8LJkSvnKGdiwXzLEqVS7XU\n"
// "6qKJ3WW4xP/DYNR6EzbmhUiZ6MLinmDu4NbaRl/00nAMGwTSQiRdoTQyAHdk0f19\n"
// "2glVKb/rncmjvrxUGwlQ9w3XIPG3vQ2fuwMso111G+E8CxGJez+6No0fnqteiOKb\n"
// "yaV7+zR32/7XLxu7vNaAveiEuath9FPnwEtV/IZHcBnWlwIDAQABo2MwYTAdBgNV\n"
// "HQ4EFgQUQzIB7cbCGfwKeVejiL9gqRAnSYIwHwYDVR0jBBgwFoAUupW1N+4stPoD\n"
// "z/Ei6cGrnIEFkfcwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAYYwDQYJ\n"
// "KoZIhvcNAQELBQADggIBAEETnWa8OAJ6KSsLi6oTqswRRmdYf1l0gR5XL1STt/so\n"
// "ypbTUYnS7h/S21FglG62NBFjgfknSwhVosWeaPXwRVtAKtUnEaSAkEaD277TrITF\n"
// "UXBuuC+sNnpf4igpzYLJlS9G2jjOWN7EZTw3+EBeMFYnDARx4cn2PoR6u0m4sNKr\n"
// "zkY09UtuTr6BhQGNencpuFw4LQoKlWMholvj2rWQSAzQnfMO8NB1LBtm5Ea0ugKh\n"
// "9v847CiGq2VICnowWdOQUaBjGfoXygNNyWOg8wCFzabT8NA4XRHMPF79aeQR1NhZ\n"
// "MgR9juZRFGAbln5g1645Y+wfBCycuwDHr2E33f/PZkUl5NvHEZjv1oYRU7gLYYmx\n"
// "0Aq5WrquHwNvwLtMwvW4k15M8QDL11slwODwEAFUfvBbI+t1BQ6vT2/iTrrYQR+G\n"
// "QpWq3MiTaYjpzvJfol2cF8p2jza6FqiEoe6emZfY1KnAGKypH92/ZDbJMZvFyYzW\n"
// "jDxr24dLhYMw2yhYhwAzyDde9CuV+frCq3gdWrN2xq2pWK/2dkvFZU3p8xXbgl8P\n"
// "OSF5XYO0Hqb1iwkIaQ9vL5QYldVfXQZXrfN/mM0+Aw/aUA1tZaCbkL+zr5RIEgHR\n"
// "Hz6A+u3CVzY59c2dXvPhOOAo+C6Mz2KlfqCy8SXLHL7soIlgaB6jccccAULq/dle\n"
// "-----END CERTIFICATE-----\n"
// "-----BEGIN CERTIFICATE-----\n"
// "MIIFOjCCAyKgAwIBAgIJAOzDHy43PW3eMA0GCSqGSIb3DQEBCwUAMCoxKDAmBgNV\n"
// "BAMMH0F6dXJlIElvVCBIdWIgQ0EgQ2VydCBUZXN0IE9ubHkwHhcNMTkwMTI5MjIy\n"
// "MzQxWhcNMTkwMjI4MjIyMzQxWjAqMSgwJgYDVQQDDB9BenVyZSBJb1QgSHViIENB\n"
// "IENlcnQgVGVzdCBPbmx5MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA\n"
// "wksYzxsJCd/2qmelcu4HcKCiyNwgRnJ1jR6V26rxejLqEWuFjiON6UPrJejJPMas\n"
// "a3eqZkSzT29mJkIAdIF0Waa5UVNGi46yp0P5qarC0SgS2B3KRn8WHyvwXg9WNM5Z\n"
// "vo98PaDyMM3ngYNUXehkP+PUqqW2M367AqpLU6BZbaEOikpsBEfxelHonkcHlQz+\n"
// "AGh4mpxrbW5RGvmakytkYG6iKyOvScpH0R8d3xzY+vte9SEiE5irBIzUE1/M0Qmq\n"
// "yx2vkofqxZtL3lbHf+p4qpigzjyQy/qMoL8r8TZZTKwB4reb6g/IVWgrrUA6udII\n"
// "130dd4E+Hv5m4tOZ2884KXnI2wRHT9AM6GFO/FUocbA3VcRG01lmU86CuqZTGCua\n"
// "qvj9z19vHG4HCW4rePbHwkE62NyjS3bh+2M4R5DvWhxGGEE0EfA8JbqRpTbKzSoy\n"
// "VBogPSWd36CAAlYbT95FLe5B/mpvyx0Wo1NUYIaYmwQKE18Gry5LP5RdIPvBak1K\n"
// "2SFclFzu9h7ajsfh9DgJKDbWB30RxwR7MQHBWwqsiqvYODiXnDSQAb1OLSrxTM9Z\n"
// "ji2TFLdoUdJ9igj29ifdwu8UWobB7X/+BXsIMwEI7cumOCYTW+GYvEtDtWIFtpPN\n"
// "Vm9S12Og5ZZhjTzX3guimn8Aco97piL8UjDXGbyi1iMCAwEAAaNjMGEwHQYDVR0O\n"
// "BBYEFLqVtTfuLLT6A8/xIunBq5yBBZH3MB8GA1UdIwQYMBaAFLqVtTfuLLT6A8/x\n"
// "IunBq5yBBZH3MA8GA1UdEwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgGGMA0GCSqG\n"
// "SIb3DQEBCwUAA4ICAQAG9wAjFxOZ0DkRfDDimZ0a8SmZyRc8uGsCSuxSi4TvDJnH\n"
// "ZZdNivg0cRO3+L4YFvPNepFnQ4ZFF+q5sYZ/8JUQHhCqPm/+K0IpCUo+na/ldVNo\n"
// "Zi8vcMlG4ViGfZ1u0gmmevnzqpbaeszwZmzW68aFU9LkcYqEZv+sogtkQgQk3emG\n"
// "vAQ+WHioyiOHencBG45fCiYsWxIkaesRYtk+DJS+JxmPb8IRK0P7sd1fA5EWIA3H\n"
// "F6fELIbrGpvAu/MIrH4rzuUmx+n1JQ4hIbCc8i0Vo9xxdYjX3LADmkFh2R8OzrKS\n"
// "TCk9Z7QqJlZwMG+e89cTLaMVqDirDzhJj2NsJXOf4Obsn7FOnAvPOgky829djXZx\n"
// "3SICmcU77rmT/MzJLoFxyHNnsdVbQNTYbBgviRyFUUuF1AlWixechZDR3a+cHL9D\n"
// "8/Spym9MSTiwlJUgH1RuKMU5E2E2wAqClqA2Fj18Nw6BwYYqpxjoVTHI/d/a07YR\n"
// "BWIMqkdNeFSrgsZT16BgtAO4bLBWV+rzEw7Y487JgVusyg9UQoOREpQ+fzbd+tuX\n"
// "SM+kqN97ufGEs9FMuCe0wFuQKwXvB2RsH7lt/3HOBS+WX/r/o8ErNcK6V2Q1mShe\n"
// "38Oc/EXfecSeH3qX4XEA8YKLKjgknqPvDCi+VQlh6CVRHRvYIf/v4fTJ1MrHEg==\n"
// "-----END CERTIFICATE-----\n"

// ;
// /* Client signed with self signed certificate - valid only 30 days from 29/01/19 */
// "-----BEGIN CERTIFICATE-----\n"
// "MIIFLTCCAxWgAwIBAgIBBTANBgkqhkiG9w0BAQsFADA0MTIwMAYDVQQDDClBenVy\n"
// "ZSBJb1QgSHViIEludGVybWVkaWF0ZSBDZXJ0IFRlc3QgT25seTAeFw0xOTAxMjky\n"
// "MjQ2MDJaFw0xOTAyMjgyMjQ2MDJaMBsxGTAXBgNVBAMMEFRlc3QtRGV2aWNlLTMu\n"
// "Y2EwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDLEAB1f7gad104B2Ya\n"
// "5yaTDsAm3uNMRWW4avvo+fg5zH4IWMOcQK6hqWjUIXUf8ekYBGSNpOCTaQyOu9lx\n"
// "lhgchS+soDbSaO8DdCyTG2C18EH9mnjDzvOUSIyOLP8tGXurTH82dIxEz3Bc6/yQ\n"
// "eJfwFKq8XYtO/+VHRPaJChv54UMAIt9P4qdNX03KMMz9xZkx+S9Em+VEb7Bavqoi\n"
// "m382zrTLJ70wAzqSxrJCPgKUw2iI+PCubDtHXymetZewStkAAXmvyXBWGAPWhIui\n"
// "S6+XtNcJyDAax0i+32EYnZCtyTfnpH8NRE6QkUicQBMS4ShA1yoeGHHalirJ8q2e\n"
// "ExdV2gPLv4dmpDn3c6mGrOBYksP67aT6sQTY2TbejVhVt6ea8sCNY5TBCa0MENjM\n"
// "EFNaZgTf7dzJCYKhZNnrWmW82iJQ8F20kHraNi7rtMeMWO2PDkNjYmVcIwhkLMA2\n"
// "jCH/bJnbGguLyDQwLgDE95I3K/Nu+UHLqqRaF7bpxSj9hsVy6aCcBCn0cNchVjZD\n"
// "DFO4y+c536Sbeutb3XcjxfOzLK/b0MwF+XNugXYqEMtQrxuR6+FZ5x4itLfB1WyY\n"
// "XG7hnn2HJ1gBelYefuMkjrF6Vd/iQtmqoRZlO9WFVCnACYE6up8dn/bdxH1Ltc2/\n"
// "YXkmP42a6H5AchYY2SgBi++TgwIDAQABo2MwYTAdBgNVHQ4EFgQUn3ZyWl1ik0RT\n"
// "K9XPe0xA12CW21owHwYDVR0jBBgwFoAUQzIB7cbCGfwKeVejiL9gqRAnSYIwDwYD\n"
// "VR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMCAYYwDQYJKoZIhvcNAQELBQADggIB\n"
// "AJRsQ0/W6V498Ou9hXLkRkLFqdTNwVlW1OKcCw7OxcTDkzvIFJ1tA4IxK5e4eq74\n"
// "HgLCSX8y7/nah/KJOrO2UNz+KORjozzjiTIeC97g+7spb90//tcGrEyd/hBHravS\n"
// "t6xQliAQQygBYn4N9SP8IQjYKN3Z96Kd+c9E6flTLxlgB4EhXURbc7kjP7wLjeXZ\n"
// "RX4HmKiTKlWvryDEqHplVZnr9dLFGh4E+Ny52s/TfojhWeFyHZud5h/8zJ08YB+y\n"
// "DPgNBb89jXOQ8JoXIldiA7Ms7OU0zIkeafkcRs35q8/RGkapMAzHZnJ9/3ew2S11\n"
// "W5Tai/on7F4N/byxpvAvat6boi50iXrc3333JiU/VosSwDR3TZrjNKzfr5c01WTV\n"
// "TFYo/ETh9+iFCTXTv933/nkbBqyjXA/rBRItVKbq7qtJtfryxrgzIrXdNEJycRLt\n"
// "SAfsyS3Gw8zepiEoZDdzqlnw0Xoq2RfawlU2hCxOoPISEoQXExTvEnnHxp7PjC7D\n"
// "QUJ15vG+qvRSvZHG0idFzCFxKvd8HQQW274DwvrT1xq+otNuSz7NwgtdGO2bRZww\n"
// "iqDoptqFfbykXCBJ46dS0z0JbiYkEg8TfaPCDN0/wSDBe3ATWNywy2RDhLxwtwyg\n"
// "wSioHnCGa0nMlKH0uoEQ1OzynclFEmeNWOOhMR7+O5gv\n"
// "-----END CERTIFICATE-----\n"

// ;

/*
 * (optional) Client private key here in PEM format.
 * Set NULL if you don't use.
 * "-----BEGIN RSA PRIVATE KEY-----\n"
 * ...
 * "-----END RSA PRIVATE KEY-----\n";
 */
const char* SSL_CLIENT_PRIVATE_KEY_PEM = NULL;
// "-----BEGIN RSA PRIVATE KEY-----\n"
// "MIIJKAIBAAKCAgEAyxAAdX+4GnddOAdmGucmkw7AJt7jTEVluGr76Pn4Ocx+CFjD\n"
// "nECuoalo1CF1H/HpGARkjaTgk2kMjrvZcZYYHIUvrKA20mjvA3QskxtgtfBB/Zp4\n"
// "w87zlEiMjiz/LRl7q0x/NnSMRM9wXOv8kHiX8BSqvF2LTv/lR0T2iQob+eFDACLf\n"
// "T+KnTV9NyjDM/cWZMfkvRJvlRG+wWr6qIpt/Ns60yye9MAM6ksayQj4ClMNoiPjw\n"
// "rmw7R18pnrWXsErZAAF5r8lwVhgD1oSLokuvl7TXCcgwGsdIvt9hGJ2Qrck356R/\n"
// "DUROkJFInEATEuEoQNcqHhhx2pYqyfKtnhMXVdoDy7+HZqQ593OphqzgWJLD+u2k\n"
// "+rEE2Nk23o1YVbenmvLAjWOUwQmtDBDYzBBTWmYE3+3cyQmCoWTZ61plvNoiUPBd\n"
// "tJB62jYu67THjFjtjw5DY2JlXCMIZCzANowh/2yZ2xoLi8g0MC4AxPeSNyvzbvlB\n"
// "y6qkWhe26cUo/YbFcumgnAQp9HDXIVY2QwxTuMvnOd+km3rrW913I8Xzsyyv29DM\n"
// "BflzboF2KhDLUK8bkevhWeceIrS3wdVsmFxu4Z59hydYAXpWHn7jJI6xelXf4kLZ\n"
// "qqEWZTvVhVQpwAmBOrqfHZ/23cR9S7XNv2F5Jj+Nmuh+QHIWGNkoAYvvk4MCAwEA\n"
// "AQKCAgEAt1s+ntpxuew4T0RXDUnVigpStYajRZaQUCLCTs+QNViSISVNlATP6wfW\n"
// "sV14rhy49kfZKBFN+61qemPi5265XN9iegS9G+dGkx7OtRKOlBpa7A0UqPJw/V85\n"
// "E5RL4kRVaAsN/3Tjx6pr8mvgRe+uekmfFbF9/hqQxHbgCkQHmO2vmyrh6/dkTDgX\n"
// "PNAt+aP4Paic5t3B+rbDTl1FsTQpfarOk3bRnM39kNU71xa5K+z6slvesBDowfyK\n"
// "z1V3n+cl5Jxwbat99S+AH67Vivm+l0Tiu2F5FmUGKdv4h8qW/mVoRpFBbBBWxLF7\n"
// "GCO/VVfcChh/XmeCPvdDsdCgttDUSsMyCmfbCw310DhXlA32ydV0TAkgRfG9klPW\n"
// "5cXUQ81bBvVEt8oOKzYHCIF3gYcFD8zdd9j1SGZCoN3QBs/6kXW4aWF08H9G1AZ6\n"
// "YgekzcaAB5hryEx4wnXau/3E/b73azBIG43wQqnKPodzHZxW1OmEdxKbebHcQo1Z\n"
// "1Uy46fjXoxVqawEfIZG3mvVmVRwGZQbkV/FDp8dGnw2sriDLEFKLKwT6SKv+ntoG\n"
// "zXZGIqqnh33f2HXusBhjRo3c3pypYXLE/3ZKe8PrTIUFqbTdRMRNQKekt8Pb6Q7O\n"
// "2vwJfDfPbcI/oANo4uh1gNQRAHem/T88wAczneDXeUH1So2topkCggEBAPZWFmew\n"
// "Hp7CGPEK0qhCg74msKyXtXoBvXZa8EzUF7BBTBRXauELywGYClpgoTLXqbS85Mku\n"
// "kaIe4ywUlXc1+R3LwShsNspPN0eCP8aB4q3bUNekape4psiuP/1eeBGiJuOQ0WHm\n"
// "dUJIhYonihHzqUVyE0lLXzRUvQhTToFuDZ8gHY7nj8Ub5vpfGVSIrXyNQuppy+uq\n"
// "zJe/OW6PLZExGH9RScvwTGSx7Xu5Pqrcfz3v2AjbRR8x2Ie9vWYCmfUhc3oxApth\n"
// "qIb/03taw3glddy3tSLbpJguVGEv1q5hFDXyN2xyDkPaqjnDPn1z53zSvwzPLWis\n"
// "jJI+HJFWRpLHfyUCggEBANMHUsM4FszQwTxIx0MX50jCKJHrvCDIa4uWZE44oBVy\n"
// "aS/afAq43tN2u7CcqEYWdmQpCu1R8PGhngsD4NAQYcE36nESSXVzOwQakBsTyDi0\n"
// "nE1RYb+FnnGvjOKc048vhjQ9cIfsd3SpA7EyIRPPfklOKEbcJFMWvxPBtit/1Q3t\n"
// "p+hFmi0GBUHKVKIQPasrbeBgZxkXIS+EGRrmiy2+GJQiOpTFK6/ZL2nycW0W/5I4\n"
// "e53WJKz3jxJB80yfWl0KjLr2i8qiJDtqrN3ccGQlnScfcTd8NhyMSAZcolqCZOZ4\n"
// "GZTUvB1FY0p1Ne8brAiGCmv2xLqkMVXP9LrT+2RWO4cCggEATeRs0z6igArZ/iYw\n"
// "9FmL9O2hAgI6tSilsy4QPAr4rpgHKYt21VB4Ubm01F0nu77r/6WXJnJeRIhFxyN/\n"
// "G6HqctyB6HlHXfNshGUQK4HYnqbxyi5IMk+GFYDb5Q8hIlpGt8CMJMvNmjb6WvQj\n"
// "uYd1p+rpZEy7/v0ohOBqu4yELCPolM5t7KLlB5hYlx1c1jyIwzzO6WcpqHYj/+yw\n"
// "OO/wUhnvHtiOH20PrgamZTqx1XDou+wx0Cpf0JRTtlTuP8/jBulGbMGVm5J7Wc8a\n"
// "bfxSZ4eDdFFFm4VS0yRgWuWBkYlUsyrhjd0v5HHzaZHjydmN5cwBDM865+dR+zbv\n"
// "u+vvLQKCAQBpPtTC8f1FBrPoye8/AfPicJrlM6luvCYOxuGdtVX5fEcDi7ajblIL\n"
// "KsMusOKnmdpP17xQYbaF+/GjUrrTaegnAikVXWZvghmj0U+fgX0w8rqlQPo8F3rO\n"
// "/huIhWhpl+0Zrq6py4BEGWry+6pNhAVar/UcafxfyA9h3hFpnmZ2fNlp2RSscb07\n"
// "c5pD/U+UR6OT7OBePg/Z78rJhMNS++SsNGn8+lzwZaPk9folyvuJREw6iqtd7FVZ\n"
// "aLTbuPnLP1CyifVsCPODAo/WUnNnLu8yrNa9MmCWWkwtiBOcij2iR7GSbYqoGowL\n"
// "fWt5pdZlpdwavkadQvgr8PwAFWriPrOPAoIBAGwQsCHupTs5WR8iIa5ecn763e6f\n"
// "ZeVBH5ZLl7bw2I/Wq2i4ZBcQBGA3UXLpfc5uZptHo+MLRpSRJ+1YBg44+LaEvHHK\n"
// "LeGE4YPZ9mmAcht1B8xabBtwhpqMQLFsrAFXrL4KOvm60NBkmnepvRTxH1/TY4i2\n"
// "zfeHJ6UAhGzX7W2DANy6wLpujXjuoxRPyS9Ciap9qqhD2zzxsDFnFjj0E7TCbWsg\n"
// "uhXvzhPxNlDLY/Zm0iHqVSk3q0qQEuZJT7gToMKBzNnYiCXQJ5QQpZVMWiCG7Pre\n"
// "v596PUi+BHEziDHmALFx6zpWyIcIDEHkmpoeg7HZLFabtOUlNbd5WcyAHKY=\n"
// "-----END RSA PRIVATE KEY-----\n"

// ;
#endif /* __MQTT_SERVER_SETTING_H__ */
