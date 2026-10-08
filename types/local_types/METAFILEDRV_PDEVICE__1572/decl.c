struct METAFILEDRV_PDEVICE
{
gdi_physdev dev;
METAHEADER *mh;
UINT handles_size;
UINT cur_handles;
HGDIOBJ *handles;
HANDLE hFile;
};
