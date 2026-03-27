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

  CurrentWorldspace = TES::GetCurrentWorldspace(TES);
  sub_4EF7E0((int)CurrentWorldspace);
  if ( a4 )
  {
    sub_4EB0E0(1);
    gridDistantArray = (unsigned int *)TES->gridDistantArray;
    if ( gridDistantArray )
    {
      v6 = TES::GetCurrentWorldspace(TES);
      sub_483D60(gridDistantArray, v6);
    }
    v7 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    sub_4EA6E0(*(_DWORD *)v7, v7[1], *((_DWORD *)v7 + 2), 1);
    sub_434020(ioManager, a3, st6_0, a2, 5);
    v8 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    sub_4EA6E0(*(_DWORD *)v8, v8[1], *((_DWORD *)v8 + 2), 0);
  }
  else
  {
    if ( byte_B3608F )
    {
      v9 = TES;
      byte_B3608F = 0;
      v10 = TES::GetCurrentWorldspace(v9);
      v11 = (NiTMap_TESCELL *)sub_4EF7E0((int)v10);
      sub_4EA080(v11, 0);
      if ( dword_B34424 )
        *(_WORD *)(dword_B34424 + 0x18) |= 1u;
      if ( TES->waterManager )
        sub_499E20();
    }
    if ( dword_B35B8C )
      sub_4BD980((_DWORD *)dword_B35B8C);
    v12 = TES->gridDistantArray;
    if ( v12 )
      (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)v12 + 8))(v12);
  }
}
