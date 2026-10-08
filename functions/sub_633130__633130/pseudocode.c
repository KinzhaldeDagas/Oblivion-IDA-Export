void __thiscall sub_633130(int this, Actor *a2)
{
  bool v3; // c0
  PlayerCharacter *v4; // ecx
  char isThirdPerson; // bl

  *(_DWORD *)(this + 0x2BC) = 6; /*0x633132*/
  v3 = *(float *)(this + 0x2C0) > 0.0; /*0x63313c*/
  *(_DWORD *)(this + 0x2C4) = 0; /*0x633142*/
  if ( !v3 ) /*0x633151*/
    *(float *)(this + 0x2C0) = 1.0; /*0x633155*/
  v4 = reference; /*0x63315b*/
  isThirdPerson = 1; /*0x633169*/
  if ( a2 == (Actor *)reference ) /*0x63316b*/
  {
    isThirdPerson = v4->isThirdPerson; /*0x63316d*/
    if ( !isThirdPerson ) /*0x633175*/
      TogglePOV(v4, 0); /*0x633179*/
  }
  sub_5E05F0(a2, 0x3F); /*0x633182*/
  Actor_ProcessAction(a2, 1.0, 1.0); /*0x633195*/
  if ( !isThirdPerson ) /*0x63319e*/
    TogglePOV(reference, 1u); /*0x6331ae*/
}
