char __cdecl sub_504D00(int a1, int a2, void *a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( !a3 )
    return 0;
  if ( !OblivionDynamicCast(
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0) )
    JUMPOUT(0x504DA2);
  return sub_504D42(a8);
}
