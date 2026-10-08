void __thiscall sub_6331C0(int this, Actor *a2)
{
  bool v3; // c0
  PlayerCharacter *v4; // ecx
  char isThirdPerson; // bl

  *(_DWORD *)(this + 0x2BC) = 5; /*0x6331c2*/
  v3 = *(float *)(this + 0x2C0) > 0.0; /*0x6331cc*/
  *(_DWORD *)(this + 0x2C4) = 0; /*0x6331d2*/
  if ( !v3 ) /*0x6331e1*/
    *(float *)(this + 0x2C0) = 1.0; /*0x6331e5*/
  v4 = reference; /*0x6331eb*/
  isThirdPerson = 1; /*0x6331f9*/
  if ( a2 == (Actor *)reference ) /*0x6331fb*/
  {
    isThirdPerson = v4->isThirdPerson; /*0x6331fd*/
    if ( !isThirdPerson ) /*0x633205*/
      TogglePOV(v4, 0); /*0x633209*/
  }
  sub_5E05F0(a2, 0x3F); /*0x633212*/
  Actor_ProcessAction(a2, 1.0, 1.0); /*0x633225*/
  if ( !isThirdPerson ) /*0x63322e*/
    TogglePOV(reference, 1u); /*0x63323e*/
}
