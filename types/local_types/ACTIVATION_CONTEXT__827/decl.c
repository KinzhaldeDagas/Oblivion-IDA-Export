struct _ACTIVATION_CONTEXT
{
ULONG magic;
int ref_count;
file_info config;
file_info appdir;
assembly *assemblies;
unsigned int num_assemblies;
unsigned int allocated_assemblies;
DWORD sections;
strsection_header *wndclass_section;
strsection_header *dllredirect_section;
strsection_header *progid_section;
guidsection_header *tlib_section;
guidsection_header *comserver_section;
guidsection_header *ifaceps_section;
guidsection_header *clrsurrogate_section;
};
