int __thiscall sub_8CA250(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx
  int v6; // esi
  int v7; // edx

  v2 = *(this + 0xD); /*0x8ca251*/
  result = 0; /*0x8ca254*/
  if ( v2 > 0 ) /*0x8ca258*/
  {
    for ( i = (_DWORD *)*(this + 0xC); *i != a2; ++i ) /*0x8ca25a*/
    {
      if ( ++result >= v2 ) /*0x8ca26c*/
        return result; /*0x8ca26c*/
    }
    if ( result >= 0 ) /*0x8ca275*/
    {
      v5 = *(this + 0xC); /*0x8ca27a*/
      v6 = *(this + 0xD) - 1; /*0x8ca27d*/
      *(this + 0xD) = v6; /*0x8ca27e*/
      *(_DWORD *)(v5 + 4 * result) = *(_DWORD *)(v5 + 4 * v6); /*0x8ca284*/
      v7 = *(this + 0x10) - 1; /*0x8ca28a*/
      *(this + 0x10) = v7; /*0x8ca28b*/
      *(_DWORD *)(*(this + 0xF) + 4 * result) = *(_DWORD *)(*(this + 0xF) + 4 * v7); /*0x8ca294*/
    }
  }
  return result; /*0x8ca26f*/
}
