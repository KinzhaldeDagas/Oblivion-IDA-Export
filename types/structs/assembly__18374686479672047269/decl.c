struct __declspec(align(8)) assembly
{
assembly_type type;
assembly_identity id;
file_info manifest;
WCHAR_0 *directory;
BOOL no_inherit;
dll_redirect *dlls;
unsigned int num_dlls;
unsigned int allocated_dlls;
entity_array entities;
COMPATIBILITY_CONTEXT_ELEMENT *compat_contexts;
ULONG num_compat_contexts;
ACTCTX_REQUESTED_RUN_LEVEL run_level;
ULONG ui_access;
};
