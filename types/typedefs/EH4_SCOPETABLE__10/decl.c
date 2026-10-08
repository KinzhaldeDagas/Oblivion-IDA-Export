struct _EH4_SCOPETABLE
{
DWORD GSCookieOffset;
DWORD GSCookieXOROffset;
DWORD EHCookieOffset;
DWORD EHCookieXOROffset;
struct _EH4_SCOPETABLE_RECORD ScopeRecord[];
};
