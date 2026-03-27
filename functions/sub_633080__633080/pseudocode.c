double __userpurge sub_633080@<st0>(int a1@<ecx>, double a2@<st1>, Actor *a3, int a4, char a5)
{
  int v7; // eax
  double v8; // st5
  PlayerCharacter *v9; // ecx
  char isThirdPerson; // bl
  double v11; // st7

  v7 = *(_DWORD *)(a1 + 0x2BC);
  if ( v7 != 6 && v7 != 5 )
  {
    *(_DWORD *)(a1 + 0x2BC) = 2 * (a5 != 0) + 2;
    if ( a4 )
      *(_DWORD *)(a1 + 0x2C4) = a4;
    v8 = 0.0;
    if ( *(float *)(a1 + 0x2C0) <= 0.0 )
    {
      v8 = 1.0;
      *(float *)(a1 + 0x2C0) = 1.0;
    }
    if ( a5 )
    {
      v9 = TESDataHandler_g_PlayerRef;
      isThirdPerson = 1;
      if ( a3 == (Actor *)TESDataHandler_g_PlayerRef )
      {
        isThirdPerson = v9->isThirdPerson;
        if ( !isThirdPerson )
          TogglePOV(v9, 0);
      }
      sub_5E05F0(a3, 0x3F);
      v11 = 1.0;
      Actor_ProcessAction(a3, v8, a2, 1.0, 1.0, 1.0);
      if ( !isThirdPerson )
        TogglePOV(TESDataHandler_g_PlayerRef, 1u);
    }
  }
  return v11;
}
