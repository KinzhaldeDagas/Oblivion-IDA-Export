int __thiscall sub_8D98E0(int (__stdcall ****this)(signed int))
{
  int (__stdcall ***v2)(signed int); // ecx
  int result; // eax
  int (__stdcall ***v4)(signed int); // ecx
  int v5; // ecx

  v2 = *(this + 4); /*0x8d98e3*/
  *this = (int (__stdcall ***)(signed int))&off_A9A274; /*0x8d98e8*/
  if ( v2 ) /*0x8d98ee*/
    result = sub_8BC730(v2); /*0x8d98f0*/
  v4 = *(this + 5); /*0x8d98f5*/
  if ( v4 ) /*0x8d98fa*/
    result = sub_8BC730(v4); /*0x8d98fc*/
  v5 = (int)*(this + 3); /*0x8d9901*/
  if ( v5 ) /*0x8d9906*/
  {
    if ( *(_WORD *)(v5 + 4) ) /*0x8d9908*/
    {
      if ( !--*(_WORD *)(v5 + 6) ) /*0x8d9913*/
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x8d991e*/
    }
  }
  *this = (int (__stdcall ***)(signed int))&hkBaseObject::`vftable'; /*0x8d9920*/
  return result; /*0x8d9926*/
}
