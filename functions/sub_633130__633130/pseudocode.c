double __userpurge sub_633130@<st0>(int a1@<ecx>, double a2@<st2>, Actor *a3)
{
  double v3; // st6
  bool v4; // c0
  PlayerCharacter *v5; // ecx
  char isThirdPerson; // bl
  double result; // st7

  v3 = 0.0;
  *(_DWORD *)(a1 + 0x2BC) = 6;
  v4 = *(float *)(a1 + 0x2C0) > 0.0;
  *(_DWORD *)(a1 + 0x2C4) = 0;
  if ( !v4 )
  {
    v3 = 1.0;
    *(float *)(a1 + 0x2C0) = 1.0;
  }
  v5 = TESDataHandler_g_PlayerRef;
  isThirdPerson = 1;
  if ( a3 == (Actor *)TESDataHandler_g_PlayerRef )
  {
    isThirdPerson = v5->isThirdPerson;
    if ( !isThirdPerson )
      TogglePOV(v5, 0);
  }
  sub_5E05F0(a3, 0x3F);
  result = 1.0;
  Actor_ProcessAction(a3, a2, v3, 1.0, 1.0, 1.0);
  if ( !isThirdPerson )
    TogglePOV(TESDataHandler_g_PlayerRef, 1u);
  return result;
}
