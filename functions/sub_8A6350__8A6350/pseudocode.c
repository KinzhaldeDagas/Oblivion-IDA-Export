signed int __thiscall sub_8A6350(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx

  v2 = *(this + 0x29); /*0x8a6351*/
  result = 0; /*0x8a6357*/
  if ( v2 <= 0 ) /*0x8a635c*/
  {
LABEL_5:
    *(_DWORD *)(*(this + 0x28) - 4) = 0; /*0x8a6374*/
    return 0xFFFFFFFF; /*0x8a637b*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x28); /*0x8a635e*/
    while ( *v4 != a2 ) /*0x8a636a*/
    {
      ++result; /*0x8a636c*/
      ++v4; /*0x8a636d*/
      if ( result >= v2 ) /*0x8a6372*/
        goto LABEL_5; /*0x8a6372*/
    }
    *(_DWORD *)(*(this + 0x28) + 4 * result) = 0; /*0x8a6391*/
  }
  return result; /*0x8a637a*/
}
