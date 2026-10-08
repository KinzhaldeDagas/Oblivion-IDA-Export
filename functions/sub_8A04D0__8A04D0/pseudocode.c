void __thiscall sub_8A04D0(_DWORD *this, _WORD *a2)
{
  int v2; // esi
  int (__thiscall ***v3)(int (__stdcall ***)(signed int), int); // ecx

  if ( this ) /*0x8a04d2*/
  {
    v2 = *(this + 2); /*0x8a04d5*/
    if ( v2 ) /*0x8a04da*/
    {
      if ( a2 ) /*0x8a04e3*/
        sub_8BC720(a2); /*0x8a04e7*/
      v3 = *(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(v2 + 0x10); /*0x8a04ec*/
      if ( v3 ) /*0x8a04f1*/
        sub_8BC730(v3); /*0x8a04f3*/
      *(_DWORD *)(v2 + 0x10) = a2; /*0x8a04f8*/
    }
  }
}
