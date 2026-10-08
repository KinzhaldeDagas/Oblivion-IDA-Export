void __thiscall sub_8A0500(_DWORD *this, _WORD *a2)
{
  int v2; // esi
  int (__thiscall ***v3)(int (__stdcall ***)(signed int), int); // ecx

  if ( this ) /*0x8a0502*/
  {
    v2 = *(this + 2); /*0x8a0505*/
    if ( v2 ) /*0x8a050a*/
    {
      if ( a2 ) /*0x8a0513*/
        sub_8BC720(a2); /*0x8a0517*/
      v3 = *(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(v2 + 0x14); /*0x8a051c*/
      if ( v3 ) /*0x8a0521*/
        sub_8BC730(v3); /*0x8a0523*/
      *(_DWORD *)(v2 + 0x14) = a2; /*0x8a0528*/
    }
  }
}
