int __cdecl INISettingCollection_UnpackRGBAValue(unsigned int a1, unsigned int *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  *a2 = HIBYTE(a1); /*0x4a83fd*/
  *a3 = BYTE2(a1); /*0x4a840e*/
  *a4 = BYTE1(a1); /*0x4a8417*/
  *a5 = (unsigned __int8)a1; /*0x4a8420*/
  return (unsigned __int8)a1; /*0x4a8422*/
}
