char __cdecl sub_50CFB0(int a1, int a2, void *a3)
{
  MobileObject *v6; // eax
  MobileObject *v7; // esi
  bhkCharacterProxy *CharProxy; // eax
  float v10; // [esp+Ch] [ebp-4h]

  v6 = (MobileObject *)OblivionDynamicCast(
                         a3,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
  v7 = v6;
  if ( v6 )
  {
    if ( MobileObject_GetCharProxy(v6) )
    {
      CharProxy = MobileObject_GetCharProxy(v7);
      v10 = *((float *)CharProxy + 0xC8);
      *((float *)CharProxy + 0xC8) = 0.0;
      if ( IsConsoleMode )
        Interface_ConsolePrint(" Actor's fall timer is %.02f ", v10);
    }
  }
  return 1;
}
