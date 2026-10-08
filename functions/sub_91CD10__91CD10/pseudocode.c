int __thiscall sub_91CD10(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx
  int v6; // ebx

  v2 = *(this + 3); /*0x91cd11*/
  result = 0; /*0x91cd14*/
  if ( v2 > 0 ) /*0x91cd18*/
  {
    for ( i = (_DWORD *)*(this + 2); *i != a2; ++i ) /*0x91cd1a*/
    {
      if ( ++result >= v2 ) /*0x91cd2d*/
        return result; /*0x91cd2d*/
    }
    if ( result >= 0 ) /*0x91cd37*/
    {
      v5 = *(this + 2); /*0x91cd3c*/
      v6 = *(this + 3) - 1; /*0x91cd3f*/
      *(this + 3) = v6; /*0x91cd40*/
      *(_DWORD *)(v5 + 4 * result) = *(_DWORD *)(v5 + 4 * v6); /*0x91cd48*/
      return (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x10))( /*0x91cd5b*/
               *(this + 0xFFFFFFFC),
               a2 + 0x14,
               unk_BA8448);
    }
  }
  return result; /*0x91cd31*/
}
