struct __declspec(align(8)) EMFDRV_PDEVICE
{
gdi_physdev dev;
gdi_physdev pathdev;
ENHMETAHEADER *emh;
UINT handles_size;
UINT cur_handles;
HGDIOBJ *handles;
HANDLE hFile;
HBRUSH dc_brush;
HPEN dc_pen;
INT restoring;
INT modifying_transform;
BOOL path;
INT dev_caps[122];
};
