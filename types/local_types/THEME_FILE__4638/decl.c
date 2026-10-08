struct _THEME_FILE
{
DWORD dwRefCount;
HMODULE hTheme;
WCHAR_0 szThemeFile[260];
LPWSTR pszAvailColors;
LPWSTR pszAvailSizes;
LPWSTR pszSelectedColor;
LPWSTR pszSelectedSize;
PTHEME_CLASS classes;
PTHEME_PROPERTY metrics;
PTHEME_IMAGE images;
};
