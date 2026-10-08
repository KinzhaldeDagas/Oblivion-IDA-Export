struct __declspec(align(8)) URL_COMPONENTSW
{
DWORD dwStructSize;
LPWSTR lpszScheme;
DWORD dwSchemeLength;
INTERNET_SCHEME nScheme;
LPWSTR lpszHostName;
DWORD dwHostNameLength;
INTERNET_PORT nPort;
LPWSTR lpszUserName;
DWORD dwUserNameLength;
LPWSTR lpszPassword;
DWORD dwPasswordLength;
LPWSTR lpszUrlPath;
DWORD dwUrlPathLength;
LPWSTR lpszExtraInfo;
DWORD dwExtraInfoLength;
};
