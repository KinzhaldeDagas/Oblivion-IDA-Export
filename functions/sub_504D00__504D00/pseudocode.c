char __cdecl sub_504D00(int a1, int a2, void *a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( !a3 ) /*0x504d07*/
    return 0; /*0x504d09*/
  if ( !OblivionDynamicCast( /*0x504d29*/
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0) )
    JUMPOUT(0x504DA2); /*0x504da2*/
  return sub_504D42(a8); /*0x504d0b*/
}
