void __cdecl sub_4EB0E0(char a1)
{
  TESWorldSpace *v1; // eax
  NiTMap_TESCELL *v2; // eax
  unsigned int *gridDistantArray; // esi
  TESWorldSpace *CurrentWorldspace; // eax
  float *v5; // eax

  if ( byte_B3608F != a1 )
  {
    byte_B3608F = a1;
    if ( a1 )
    {
      byte_B3608F = a1;
      if ( dword_B34424 )
        *(_WORD *)(dword_B34424 + 0x18) &= ~1u;
      gridDistantArray = (unsigned int *)TES->gridDistantArray;
      CurrentWorldspace = TES::GetCurrentWorldspace(TES);
      sub_483D60(gridDistantArray, CurrentWorldspace);
      sub_49E280();
      v5 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      sub_4EA6E0(*(_DWORD *)v5, v5[1], *((_DWORD *)v5 + 2), 0);
    }
    else
    {
      v1 = TES::GetCurrentWorldspace(TES);
      v2 = (NiTMap_TESCELL *)sub_4EF7E0((int)v1);
      sub_4EA080(v2, 0);
      if ( dword_B34424 )
        *(_WORD *)(dword_B34424 + 0x18) |= 1u;
      if ( TES->waterManager )
        sub_499E20();
    }
  }
}
