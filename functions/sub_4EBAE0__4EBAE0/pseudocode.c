void __usercall sub_4EBAE0(double st6_0@<st1>, double a2@<st0>, double a3@<st2>, char a4)
{
  TESWorldSpace *CurrentWorldspace; // eax
  unsigned int *gridDistantArray; // esi
  TESWorldSpace *v6; // eax
  float *v7; // eax
  float *v8; // eax
  TES *v9; // ecx
  TESWorldSpace *v10; // eax
  NiTMap_TESCELL *v11; // eax
  GridDistantArray *v12; // ecx

  CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4ebae7*/
  sub_4EF7E0((int)CurrentWorldspace); /*0x4ebaee*/
  if ( a4 ) /*0x4ebaf8*/
  {
    sub_4EB0E0(1); /*0x4ebb00*/
    gridDistantArray = (unsigned int *)MEMORY[0xB333A0]->gridDistantArray; /*0x4ebb0b*/
    if ( gridDistantArray ) /*0x4ebb13*/
    {
      v6 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4ebb15*/
      sub_483D60(gridDistantArray, v6); /*0x4ebb1d*/
    }
    v7 = reference->vtbl->super.super.super.GetPos(reference); /*0x4ebb30*/
    sub_4EA6E0(*(_DWORD *)v7, v7[1], *((_DWORD *)v7 + 2), 1); /*0x4ebb49*/
    sub_434020(MEMORY[0xB33A10], a3, st6_0, a2, 5); /*0x4ebb59*/
    v8 = reference->vtbl->super.super.super.GetPos(reference); /*0x4ebb6c*/
    sub_4EA6E0(*(_DWORD *)v8, v8[1], *((_DWORD *)v8 + 2), 0); /*0x4ebb85*/
  }
  else
  {
    if ( unk_B3608F ) /*0x4ebb8f*/
    {
      v9 = MEMORY[0xB333A0]; /*0x4ebb98*/
      unk_B3608F = 0; /*0x4ebba0*/
      v10 = TES::GetCurrentWorldspace(v9); /*0x4ebba7*/
      v11 = (NiTMap_TESCELL *)sub_4EF7E0((int)v10); /*0x4ebbae*/
      sub_4EA080(v11, 0); /*0x4ebbb5*/
      if ( *(_DWORD *)&MEMORY[0xB33E90][0x594] ) /*0x4ebbba*/
        *(_WORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x594] + 0x18) |= 1u; /*0x4ebbc3*/
      if ( MEMORY[0xB333A0]->waterManager ) /*0x4ebbce*/
        sub_499E20(); /*0x4ebbd5*/
    }
    if ( unk_B35B8C ) /*0x4ebbda*/
      sub_4BD980((_DWORD *)unk_B35B8C); /*0x4ebbe4*/
    v12 = MEMORY[0xB333A0]->gridDistantArray; /*0x4ebbef*/
    if ( v12 ) /*0x4ebbf4*/
      (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)v12 + 8))(v12); /*0x4ebbfc*/
  }
}
