struct _SP_FILE_COPY_PARAMS_W
{
DWORD cbSize;
HSPFILEQ QueueHandle;
PCWSTR SourceRootPath;
PCWSTR SourcePath;
PCWSTR SourceFilename;
PCWSTR SourceDescription;
PCWSTR SourceTagfile;
PCWSTR TargetDirectory;
PCWSTR TargetFilename;
DWORD CopyStyle;
HINF LayoutInf;
PCWSTR SecurityDescriptor;
};
