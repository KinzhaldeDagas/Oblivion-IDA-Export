void __userpurge sub_5DD1B0(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st0>,
        int a8,
        int a9)
{
  int v10; // eax
  int v11; // eax
  const char *RenderTargetsNum; // eax

  if ( (unsigned int)(a8 - 1) > 2 ) /*0x5dd1ba*/
    v10 = 3; /*0x5dd1c1*/
  else
    v10 = a8 - 1; /*0x5dd1bc*/
  v11 = v10 - 1; /*0x5dd1c6*/
  if ( v11 ) /*0x5dd1c9*/
  {
    if ( v11 == 1 ) /*0x5dd1ce*/
      sub_5DD0D0(a2, a3, a4, a5, a6, a7); /*0x5dd1d0*/
  }
  else
  {
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)(a1 + 0x34)); /*0x5dd1dd*/
    BSStringT_Set(&unk_B3B738, RenderTargetsNum, 0); /*0x5dd1e8*/
    sub_5DD0D0(a2, a3, a4, a5, a6, a7); /*0x5dd1ed*/
  }
}
