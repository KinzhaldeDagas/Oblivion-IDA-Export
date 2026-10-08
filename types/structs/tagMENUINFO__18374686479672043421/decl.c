struct tagMENUINFO
{
DWORD cbSize;
DWORD fMask;
DWORD dwStyle;
UINT cyMax;
HBRUSH hbrBack;
DWORD dwContextHelpID;
__declspec(align(8)) ULONG_PTR dwMenuData;
};
