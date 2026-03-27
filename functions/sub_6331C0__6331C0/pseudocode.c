double __userpurge sub_6331C0@<st0>(int this@<ecx>, double a2@<st1>, Actor *a3)
{
  double v5; // st5
  bool v6; // c0
  PlayerCharacter *v7; // ecx
  char isThirdPerson; // bl
  double result; // st7

  v5 = 0.0;
  *(_DWORD *)(this + 0x2BC) = 5;
  v6 = *(float *)(this + 0x2C0) > 0.0;
  *(_DWORD *)(this + 0x2C4) = 0;
  if ( !v6 )
  {
    v5 = 1.0;
    *(float *)(this + 0x2C0) = 1.0;
  }
  v7 = TESDataHandler_g_PlayerRef;
  isThirdPerson = 1;
  if ( a3 == (Actor *)TESDataHandler_g_PlayerRef )
  {
    isThirdPerson = v7->isThirdPerson;
    if ( !isThirdPerson )
      TogglePOV(v7, 0);
  }
  sub_5E05F0(a3, 0x3F);
  result = 1.0;
  Actor_ProcessAction(a3, v5, a2, 1.0, 1.0, 1.0);
  if ( !isThirdPerson )
    TogglePOV(TESDataHandler_g_PlayerRef, 1u);
  return result;
}
