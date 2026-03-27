char __thiscall sub_5D8660(void **this, int a2)
{
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  if ( !sub_57D2F0(*(this + 0x1C)) )
    return 0;
  sub_57FF50((char *)*(this + 0x1C), a2);
  v3 = sub_580120((char *)*(this + 0x1C));
  Tile_SetString(*(this + 0x15), (_DWORD *)0xFDE, v3);
  RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x1C));
  BSStringT_Set((BSStringT *)((char *)*(this + 0x1D) + 0x1C), RenderTargetsNum, 0);
  return 1;
}
