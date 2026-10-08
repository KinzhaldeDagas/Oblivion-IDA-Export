char __thiscall sub_5D8660(void **this, int a2)
{
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  if ( !sub_57D2F0(*(this + 0x1C)) ) /*0x5d8666*/
    return 0; /*0x5d86ae*/
  sub_57FF50((char *)*(this + 0x1C), a2); /*0x5d8677*/
  v3 = sub_580120((char *)*(this + 0x1C)); /*0x5d867f*/
  Tile_SetString(*(this + 0x15), (_DWORD *)0xFDE, v3); /*0x5d868d*/
  RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x1C)); /*0x5d8695*/
  BSStringT_Set((BSStringT *)((char *)*(this + 0x1D) + 0x1C), RenderTargetsNum, 0); /*0x5d86a3*/
  return 1; /*0x5d86aa*/
}
