unsigned int __thiscall sub_74CA00(_DWORD *this, int *a2)
{
  int *v2; // ebp
  unsigned int result; // eax
  unsigned int v5; // edi
  _DWORD *v6; // ebx
  int *i; // [esp+Ch] [ebp-4h]

  v2 = a2; /*0x74ca02*/
  sub_752D80(this, (_DWORD **)a2); /*0x74ca0b*/
  NiTMap_GetAt((_DWORD *)*v2, (int)this, &a2); /*0x74ca19*/
  result = *((unsigned __int16 *)this + 0x2E); /*0x74ca1e*/
  v5 = 0; /*0x74ca26*/
  for ( i = a2; v5 < result; ++v5 ) /*0x74ca1e*/
  {
    v6 = *(_DWORD **)(*(this + 0x15) + 4 * v5); /*0x74ca38*/
    if ( v6 ) /*0x74ca3d*/
    {
      if ( NiTMap_GetAt((_DWORD *)*v2, (int)v6, &a2) ) /*0x74ca48*/
        sub_74C910(i, a2); /*0x74ca56*/
      else
        sub_74C910(i, v6); /*0x74ca5d*/
    }
    result = *((unsigned __int16 *)this + 0x2E); /*0x74ca62*/
  }
  return result; /*0x74ca6e*/
}
