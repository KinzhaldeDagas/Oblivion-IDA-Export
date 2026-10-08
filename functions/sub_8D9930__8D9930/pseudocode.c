int (__stdcall ****__thiscall sub_8D9930(int (__stdcall ****this)(signed int), char a2))(signed int)
{
  int (__stdcall ***v3)(signed int); // ecx
  int (__stdcall ***v4)(signed int); // ecx
  int v5; // ecx

  v3 = *(this + 4); /*0x8d9933*/
  *this = (int (__stdcall ***)(signed int))&off_A9A274; /*0x8d9938*/
  if ( v3 ) /*0x8d993e*/
    sub_8BC730(v3); /*0x8d9940*/
  v4 = *(this + 5); /*0x8d9945*/
  if ( v4 ) /*0x8d994a*/
    sub_8BC730(v4); /*0x8d994c*/
  v5 = (int)*(this + 3); /*0x8d9951*/
  if ( v5 ) /*0x8d9956*/
  {
    if ( *(_WORD *)(v5 + 4) ) /*0x8d9958*/
    {
      if ( !--*(_WORD *)(v5 + 6) ) /*0x8d9963*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8d996e*/
    }
  }
  *this = (int (__stdcall ***)(signed int))&hkBaseObject::`vftable'; /*0x8d9975*/
  if ( (a2 & 1) != 0 ) /*0x8d997b*/
    (*(void (__stdcall **)(int (__stdcall ****)(signed int), _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8d998d*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x8d9992*/
}
