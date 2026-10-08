char __cdecl sub_501120(int a1, int a2, void *a3)
{
  TESObjectREFR *v3; // eax
  bool v4; // cl
  bool v5; // zf
  void **v6; // ecx
  char *Name; // eax
  const char *v9; // [esp-4h] [ebp-4h]

  v3 = (TESObjectREFR *)OblivionDynamicCast( /*0x501133*/
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  if ( v3 ) /*0x50113d*/
  {
    v4 = LOBYTE(v3[1].member.rot.x) == 0; /*0x501143*/
    LOBYTE(v3[1].member.rot.x) = v4; /*0x501146*/
    if ( MEMORY[0xB361AC] ) /*0x501149*/
    {
      v5 = !v4; /*0x501152*/
      v6 = (void **)"On"; /*0x501154*/
      if ( v5 ) /*0x501159*/
        v6 = &aOff; /*0x50115b*/
      v9 = (const char *)v6; /*0x501160*/
      Name = TESObjectREFR_GetName(v3); /*0x501163*/
      Interface_ConsolePrint("%s processing is  %s", Name, v9); /*0x50116e*/
    }
  }
  return 1; /*0x501178*/
}
