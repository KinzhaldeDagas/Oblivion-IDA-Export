char __cdecl sub_50B070(int a1, int a2, void *a3)
{
  char *v3; // eax
  char *v4; // esi
  int v5; // ecx

  if ( !a3 )
    return 1;
  v3 = (char *)OblivionDynamicCast(
                 a3,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v4 = v3;
  if ( v3 )
  {
    sub_423970((ExtraDataList *)(v3 + 0x44), 0);
    v5 = *((_DWORD *)v4 + 0x16);
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0x4A0))(v5);
  }
  return 1;
}
