char __thiscall sub_5D8130(void **this)
{
  char result; // al
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  result = sub_57D2F0(*(this + 0x1C));
  if ( result )
  {
    sub_57DDE0((int)*(this + 0x1C));
    v3 = sub_580120((char *)*(this + 0x1C));
    Tile_SetString(*(this + 0x15), (_DWORD *)0xFDE, v3);
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x1C));
    return BSStringT_Set((BSStringT *)((char *)*(this + 0x1D) + 0x1C), RenderTargetsNum, 0);
  }
  return result;
}
