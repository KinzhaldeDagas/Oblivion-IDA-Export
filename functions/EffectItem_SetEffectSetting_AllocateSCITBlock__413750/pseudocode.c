int __usercall EffectItem_SetEffectSetting_::AllocateSCITBlock@<eax>(
        unsigned int a1@<ebx>,
        int ebp0@<ebp>,
        int esi0@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        unsigned int a12)
{
  int v12; // eax

  v12 = FormHeapAlloc(0x18u);
  if ( v12 == a1 )
    JUMPOUT(0x41376B);
  return EffectItem_SetEffectSetting_::InitSCITName(v12, a1, ebp0, esi0, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
