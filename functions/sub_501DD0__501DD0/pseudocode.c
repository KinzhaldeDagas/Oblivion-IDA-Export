char __usercall sub_501DD0@<al>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        void *a7)
{
  void *v7; // esi
  int v8; // eax

  if ( !a7 )
    return 1;
  v7 = OblivionDynamicCast(
         a7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v7 )
  {
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x330))(v7) )
    {
      v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x330))(v7);
      sub_61DA10(v8, a1, a2, a3, a4);
    }
  }
  return 1;
}
