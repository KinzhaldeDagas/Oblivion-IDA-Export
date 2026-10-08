struct __declspec(align(8)) sysparam_entry
{
BOOL (*get)(sysparam_all_entry *, UINT, void *, UINT) __offset(OFF64|AUTO);
BOOL (*set)(sysparam_all_entry *, UINT, void *, UINT) __offset(OFF64|AUTO);
BOOL (*init)(sysparam_all_entry *) __offset(OFF64|AUTO);
parameter_key base_key;
const WCHAR_0 *regval __offset(OFF64|AUTO);
parameter_key mirror_key;
const WCHAR_0 *mirror __offset(OFF64|AUTO);
BOOL loaded;
};
