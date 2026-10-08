int __usercall EffectItem_SetEffectSetting_::AllocateSCITBlock@<eax>(
        unsigned int a1@<ebx>,
        int ebp0@<ebp>,
        int esi0@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        BSStringT a8,
        int a9,
        int a10,
        unsigned int a11)
{
  int v11; // eax

  v11 = FormHeapAlloc(0x18u); /*0x413752*/
  if ( v11 == a1 ) /*0x41375c*/
    JUMPOUT(0x41376B); /*0x41376b*/
  return EffectItem_SetEffectSetting_::InitSCITName(v11, a1, ebp0, esi0, a4, a5, a6, a7, a8, a9, a10, a11);
}
