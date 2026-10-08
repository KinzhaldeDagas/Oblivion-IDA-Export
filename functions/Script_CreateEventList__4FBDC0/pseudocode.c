char **__thiscall Script_CreateEventList(char *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  double **v4; // eax

  v2 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4fbdc6*/
  v3 = 0; /*0x4fbdcb*/
  if ( v2 ) /*0x4fbdd2*/
  {
    v2[1] = 0; /*0x4fbdd6*/
    v2[2] = 0; /*0x4fbdd9*/
    v2[3] = 0; /*0x4fbddc*/
    *v2 = 0; /*0x4fbddf*/
    v2[4] = 0; /*0x4fbde1*/
    v3 = v2; /*0x4fbde4*/
  }
  v4 = sub_4FA910(this); /*0x4fbde8*/
  *v3 = this; /*0x4fbded*/
  v3[3] = v4; /*0x4fbdef*/
  return (char **)v3; /*0x4fbdf2*/
}
