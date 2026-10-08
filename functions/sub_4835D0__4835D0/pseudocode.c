void __cdecl sub_4835D0(int a1, TESWorldSpace *a2)
{
  if ( a2 ) /*0x4835d7*/
  {
    if ( Shared_GetPointerAtOffset7C(a2) ) /*0x4835db*/
      MEMORY[0xB33E90][0x590] = 1; /*0x4835e4*/
    if ( !Shared_GetPointerAtOffset7C(a2) ) /*0x4835ed*/
      MEMORY[0xB33E90][0x590] = 0; /*0x4835f6*/
  }
}
