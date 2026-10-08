LONG __thiscall sub_7404D0(NiTriBasedGeomData *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  sub_732E00(this, a2); /*0x7404da*/
  result = sub_7124A0(a2); /*0x7404e1*/
  v4 = *((_DWORD *)this + 0x17); /*0x7404e6*/
  v5 = result; /*0x7404e9*/
  if ( v4 != result ) /*0x7404ed*/
  {
    if ( v4 ) /*0x7404f1*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x7404f7*/
      if ( !result ) /*0x7404ff*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x74050d*/
    }
    *((_DWORD *)this + 0x17) = v5; /*0x740511*/
    if ( v5 ) /*0x740514*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x74051a*/
  }
  return result; /*0x740520*/
}
