char __cdecl sub_507D30(int a1, int a2, TESObjectREFR *a3)
{
  char v3; // bl
  void **v4; // eax
  char *Name; // eax
  const char *v7; // eax
  const char *v8; // [esp-8h] [ebp-Ch]

  if ( a3 ) /*0x507d37*/
  {
    v3 = (a3->member.super.flags & 0x10) == 0; /*0x507d42*/
    sub_46A9C0(a3, v3); /*0x507d50*/
    if ( MEMORY[0xB361AC] ) /*0x507d55*/
    {
      v4 = &aOff; /*0x507d60*/
      if ( !v3 ) /*0x507d65*/
        v4 = (void **)"On"; /*0x507d67*/
      v8 = (const char *)v4; /*0x507d6c*/
      Name = TESObjectREFR_GetName(a3); /*0x507d6f*/
      Interface_ConsolePrint("Ref '%s' Collision -> %s", Name, v8); /*0x507d7a*/
    }
    return 1; /*0x507d7a*/
  }
  ToggleGlobalCollision(); /*0x507d8d*/
  if ( !MEMORY[0xB361AC] ) /*0x507d99*/
    return 1; /*0x507d86*/
  v7 = (const char *)&aOff; /*0x507da2*/
  if ( !MEMORY[0xB33A34] ) /*0x507d9b*/
    v7 = "On"; /*0x507da9*/
  Interface_ConsolePrint("Collision -> %s", v7); /*0x507db4*/
  return 1; /*0x507d85*/
}
