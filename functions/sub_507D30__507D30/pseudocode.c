char __cdecl sub_507D30(int a1, int a2, TESObjectREFR *a3)
{
  char v3; // bl
  void **v4; // eax
  char *Name; // eax
  const char *v7; // eax
  const char *v8; // [esp-8h] [ebp-Ch]

  if ( a3 )
  {
    v3 = (a3->member.super.flags & 0x10) == 0;
    sub_46A9C0(a3, v3);
    if ( IsConsoleMode )
    {
      v4 = &aOff;
      if ( !v3 )
        v4 = (void **)&aOn_0;
      v8 = (const char *)v4;
      Name = TESObjectREFR_GetName(a3);
      Interface_ConsolePrint("Ref '%s' Collision -> %s", Name, v8);
    }
    return 1;
  }
  ToggleGlobalCollision();
  if ( !IsConsoleMode )
    return 1;
  v7 = (const char *)&aOff;
  if ( !IsCollisionOn )
    v7 = (const char *)&aOn_0;
  Interface_ConsolePrint("Collision -> %s", v7);
  return 1;
}
