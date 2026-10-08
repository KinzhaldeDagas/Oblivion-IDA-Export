char __cdecl sub_50CFB0(int a1, int a2, void *a3)
{
  MobileObject *v3; // eax
  MobileObject *v4; // esi
  bhkCharacterProxy *CharProxy; // eax
  float v7; // [esp+Ch] [ebp-4h]

  v3 = (MobileObject *)OblivionDynamicCast( /*0x50cfc5*/
                         a3,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
  v4 = v3; /*0x50cfca*/
  if ( v3 ) /*0x50cfd1*/
  {
    if ( MobileObject_GetCharProxy(v3) ) /*0x50cfd5*/
    {
      CharProxy = MobileObject_GetCharProxy(v4); /*0x50cfe0*/
      v7 = *((float *)CharProxy + 0xC8); /*0x50cfeb*/
      *((float *)CharProxy + 0xC8) = 0.0; /*0x50cff1*/
      if ( MEMORY[0xB361AC] ) /*0x50cff7*/
        Interface_ConsolePrint(" Actor's fall timer is %.02f ", v7); /*0x50d00f*/
    }
  }
  return 1; /*0x50d019*/
}
