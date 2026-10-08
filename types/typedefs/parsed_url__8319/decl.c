struct __declspec(align(8)) parsed_url
{
const WCHAR_0 *scheme __offset(OFF64|AUTO);
DWORD scheme_len;
const WCHAR_0 *username __offset(OFF64|AUTO);
DWORD username_len;
const WCHAR_0 *password __offset(OFF64|AUTO);
DWORD password_len;
const WCHAR_0 *hostname __offset(OFF64|AUTO);
DWORD hostname_len;
const WCHAR_0 *port __offset(OFF64|AUTO);
DWORD port_len;
const WCHAR_0 *query __offset(OFF64|AUTO);
DWORD query_len;
};
