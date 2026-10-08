struct assembly_identity
{
WCHAR_0 *name __offset(OFF64|AUTO);
WCHAR_0 *arch __offset(OFF64|AUTO);
WCHAR_0 *public_key __offset(OFF64|AUTO);
WCHAR_0 *language __offset(OFF64|AUTO);
WCHAR_0 *type __offset(OFF64|AUTO);
assembly_version version;
BOOL optional;
BOOL delayed;
};
