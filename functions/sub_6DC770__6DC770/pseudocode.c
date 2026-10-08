_DWORD *__thiscall sub_6DC770(_DWORD *this, _DWORD *a2, _DWORD *a3, _DWORD *a4, _BYTE *a5)
{
  int v5; // eax
  _DWORD *result; // eax

  v5 = *(this + 0x12); /*0x6dc770*/
  if ( v5 ) /*0x6dc779*/
  {
    *a3 = *(_DWORD *)(v5 + 8); /*0x6dc77e*/
    *a4 = *(_DWORD *)(v5 + 0x10); /*0x6dc787*/
    *a5 = *(_BYTE *)(v5 + 0x14); /*0x6dc790*/
    result = *(_DWORD **)(v5 + 0xC); /*0x6dc792*/
    *a2 = result; /*0x6dc799*/
  }
  else
  {
    *a3 = 0; /*0x6dc7a6*/
    *a4 = 0; /*0x6dc7b0*/
    *a2 = 0; /*0x6dc7b6*/
    *a5 = 0; /*0x6dc7bc*/
    return a4; /*0x6dc79e*/
  }
  return result; /*0x6dc79b*/
}
