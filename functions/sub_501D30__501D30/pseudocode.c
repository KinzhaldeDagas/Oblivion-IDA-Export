char __cdecl sub_501D30(int a1, int a2, void *a3)
{
  void *v3; // esi

  if ( !a3 ) /*0x501d36*/
    return 1; /*0x501d7a*/
  v3 = OblivionDynamicCast( /*0x501d4d*/
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x501d54*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)v3 + 0x334))(v3, 1) ) /*0x501d62*/
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v3 + 0x340))(v3, 0); /*0x501d74*/
  }
  return 1; /*0x501d79*/
}
