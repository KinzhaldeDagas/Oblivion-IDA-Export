LONG __thiscall sub_6D1BC0(MEF_RefPointerArray16 *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  MEF_RefPointerArray16 *v6; // esi
  LONG result; // eax

  v4 = a3; /*0x6d1be9*/
  if ( *((unsigned __int16 *)this + 0x25) <= a3 ) /*0x6d1bef*/
    NiTObjectArray_Resize16(this + 4, a3 + 1); /*0x6d1bf8*/
  a3 = a2; /*0x6d1c03*/
  if ( a2 ) /*0x6d1c07*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6d1c0d*/
  v5 = *((unsigned __int16 *)this + 0x24); /*0x6d1c13*/
  v6 = this + 4; /*0x6d1c17*/
  if ( v4 >= v5 ) /*0x6d1c24*/
    NiTObjectArray_Resize16(v6, v4 + v6->growBy); /*0x6d1c2f*/
  result = sub_5254D0(v6, v4, (LONG *)&a3); /*0x6d1c3c*/
  if ( a2 ) /*0x6d1c4b*/
  {
    result = InterlockedDecrement((volatile LONG *)(a2 + 4)); /*0x6d1c51*/
    if ( !result ) /*0x6d1c59*/
      return (**(LONG (__thiscall ***)(unsigned int, int))a2)(a2, 1); /*0x6d1c63*/
  }
  return result; /*0x6d1c65*/
}
