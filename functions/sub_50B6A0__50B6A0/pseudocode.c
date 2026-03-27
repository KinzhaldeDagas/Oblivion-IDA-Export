char __cdecl sub_50B6A0(int a1, int a2, void *a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax

  v3 = OblivionDynamicCast(
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    v5 = sub_5E03A0(v3);
    if ( v5 )
      Script_AddEventToExtraScript(v5, v4 + 0x11, 0x400);
    *(_DWORD *)(v4[0x16] + 8) = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD *, int))(*(_DWORD *)v4[0x16] + 0x18))(v4[0x16], v4, 1);
  }
  return 1;
}
