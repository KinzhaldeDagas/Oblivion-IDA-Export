char __cdecl sub_501D80(int a1, int a2, void *a3)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // esi

  if ( !a3 )
    return 1;
  v3 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v4 = v3;
  if ( v3 )
  {
    sub_675D50(v3, 0);
    v4->vtbl[1].IsDead(v4, 0);
  }
  return 1;
}
