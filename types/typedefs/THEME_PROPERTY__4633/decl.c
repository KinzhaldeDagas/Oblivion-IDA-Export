struct _THEME_PROPERTY
{
int iPrimitiveType;
int iPropertyId;
PROPERTYORIGIN origin;
LPCWSTR lpValue;
DWORD dwValueLen;
_THEME_PROPERTY *next;
};
