struct _SP_FILE_COPY_PARAMS_A
{
DWORD cbSize;
HSPFILEQ QueueHandle;
PCSTR SourceRootPath;
PCSTR SourcePath;
PCSTR SourceFilename;
PCSTR SourceDescription;
PCSTR SourceTagfile;
PCSTR TargetDirectory;
PCSTR TargetFilename;
DWORD CopyStyle;
HINF LayoutInf;
PCSTR SecurityDescriptor;
};
