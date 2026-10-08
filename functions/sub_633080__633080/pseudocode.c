void __thiscall sub_633080(int this, Actor *a2, int a3, char a4)
{
  int v5; // eax
  PlayerCharacter *v6; // ecx
  char isThirdPerson; // bl

  v5 = *(_DWORD *)(this + 0x2BC); /*0x633080*/
  if ( v5 != 6 && v5 != 5 ) /*0x633092*/
  {
    *(_DWORD *)(this + 0x2BC) = 2 * (a4 != 0) + 2; /*0x6330a7*/
    if ( a3 ) /*0x6330b3*/
      *(_DWORD *)(this + 0x2C4) = a3; /*0x6330b5*/
    if ( *(float *)(this + 0x2C0) <= 0.0 ) /*0x6330c8*/
      *(float *)(this + 0x2C0) = 1.0; /*0x6330cc*/
    if ( a4 ) /*0x6330d4*/
    {
      v6 = reference; /*0x6330d6*/
      isThirdPerson = 1; /*0x6330e4*/
      if ( a2 == (Actor *)reference ) /*0x6330e6*/
      {
        isThirdPerson = v6->isThirdPerson; /*0x6330e8*/
        if ( !isThirdPerson ) /*0x6330f0*/
          TogglePOV(v6, 0); /*0x6330f4*/
      }
      sub_5E05F0(a2, 0x3F); /*0x6330fd*/
      Actor_ProcessAction(a2, 1.0, 1.0); /*0x633110*/
      if ( !isThirdPerson ) /*0x633119*/
        TogglePOV(reference, 1u); /*0x633123*/
    }
  }
}
