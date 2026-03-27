char __cdecl sub_507C00(int a1, int a2, void *a3)
{
  MobileObject *v3; // eax
  bhkCharacterProxy *CharProxy; // eax
  signed int v5; // edx

  if ( a3 )
  {
    v3 = (MobileObject *)OblivionDynamicCast(
                           a3,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
    if ( v3 )
    {
      CharProxy = MobileObject_GetCharProxy(v3);
      if ( CharProxy )
      {
        v5 = *((_DWORD *)CharProxy + 0xDB);
        if ( !v5 )
        {
          sub_894940(CharProxy, 1);
          return 1;
        }
        if ( v5 == 1 )
          v5 = 0;
        sub_894940(CharProxy, v5);
      }
    }
  }
  return 1;
}
