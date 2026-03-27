char __cdecl sub_501D30(int a1, int a2, void *a3)
{
  void *v3; // esi

  if ( !a3 )
    return 1;
  v3 = OblivionDynamicCast(
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)v3 + 0x334))(v3, 1) )
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v3 + 0x340))(v3, 0);
  }
  return 1;
}
