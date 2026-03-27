void __userpurge sub_5DD1B0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, int a4, int a5)
{
  int v6; // eax
  int v7; // eax
  const char *RenderTargetsNum; // eax

  if ( (unsigned int)(a4 - 1) > 2 )
    v6 = 3;
  else
    v6 = a4 - 1;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      sub_5DD0D0(a2, a3);
  }
  else
  {
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)(a1 + 0x34));
    BSStringT_Set(&stru_B3B738, RenderTargetsNum, 0);
    sub_5DD0D0(a2, a3);
  }
}
