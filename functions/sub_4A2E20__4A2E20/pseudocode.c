int __thiscall sub_4A2E20(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax
  unsigned int *i; // esi
  _DWORD *v5; // ecx

  v2 = (_DWORD *)*(this + 6); /*0x4a2e23*/
  if ( v2 ) /*0x4a2e28*/
    sub_4A4400(v2); /*0x4a2e2a*/
  result = *(this + 7); /*0x4a2e2f*/
  if ( result ) /*0x4a2e34*/
  {
    for ( i = *(unsigned int **)result; *(_DWORD *)result; i = *(unsigned int **)result ) /*0x4a2e37*/
    {
      v5 = *(_DWORD **)(result + 4); /*0x4a2e40*/
      if ( v5 ) /*0x4a2e45*/
      {
        *(_DWORD *)(result + 4) = v5[1]; /*0x4a2e4a*/
        *(_DWORD *)result = *v5; /*0x4a2e50*/
        FormHeapFree((unsigned int)v5); /*0x4a2e52*/
      }
      else
      {
        *(_DWORD *)result = 0; /*0x4a2e5c*/
      }
      if ( i ) /*0x4a2e64*/
      {
        sub_4A76F0(i); /*0x4a2e68*/
        FormHeapFree((unsigned int)i); /*0x4a2e6e*/
      }
      result = *(this + 7); /*0x4a2e76*/
    }
  }
  return result; /*0x4a2e80*/
}
