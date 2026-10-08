struct __declspec(align(8)) _SAFER_CODE_PROPERTIES_V2
{
DWORD cbSize;
DWORD dwCheckFlags;
LPCWSTR ImagePath;
HANDLE hImageFileHandle;
DWORD UrlZoneId;
BYTE ImageHash[64];
DWORD dwImageHashSize;
LARGE_INTEGER_0 ImageSize;
ALG_ID HashAlgorithm;
LPBYTE_0 pByteBlock;
HWND hWndParent;
DWORD dwWVTUIChoice;
LPCWSTR PackageMoniker;
LPCWSTR PackagePublisher;
LPCWSTR PackageName;
ULONG64 PackageVersion;
BOOL PackageIsFramework;
};
