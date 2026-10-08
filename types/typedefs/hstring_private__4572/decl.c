struct __declspec(align(8)) hstring_private
{
LPWSTR buffer;
UINT32 length;
BOOL reference;
LONG refcount;
};
