LONG __thiscall sub_6FE860(float *this, int a2, _DWORD **a3)
{
  LONG result; // eax
  unsigned int v5; // esi

  result = sub_753000(this, a2, a3); /*0x6fe86f*/
  v5 = *((unsigned __int16 *)this + 0x31); /*0x6fe874*/
  if ( *((_WORD *)this + 0x31) ) /*0x6fe874*/
  {
    NiTObjectArray_Resize16((MEF_RefPointerArray16 *)(a2 + 0x58), *((unsigned __int16 *)this + 0x31)); /*0x6fe882*/
    do /*0x6fe89b*/
    {
      --v5; /*0x6fe88a*/
      result = NiTObjectArray_SetAt( /*0x6fe894*/
                 (MEF_RefPointerArray16 *)(a2 + 0x58),
                 v5,
                 (void **)(*((_DWORD *)this + 0x17) + 4 * v5));
    }
    while ( v5 ); /*0x6fe89b*/
  }
  return result; /*0x6fe89d*/
}
