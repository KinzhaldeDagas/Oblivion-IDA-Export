signed int __thiscall sub_898B20(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x3E); /*0x898b21*/
  result = 0; /*0x898b27*/
  if ( v2 <= 0 ) /*0x898b2c*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x3D) - 4) = 0; /*0x898b44*/
    return 0xFFFFFFFF; /*0x898b4b*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x3D); /*0x898b2e*/
    while ( *v4 != a2 ) /*0x898b3a*/
    {
      ++result; /*0x898b3c*/
      ++v4; /*0x898b3d*/
      if ( result >= v2 ) /*0x898b42*/
        goto LABEL_5; /*0x898b42*/
    }
    *(_DWORD *)(*(this + 0x3D) + 4 * result) = 0; /*0x898b61*/
  }
  return result; /*0x898b4a*/
}
