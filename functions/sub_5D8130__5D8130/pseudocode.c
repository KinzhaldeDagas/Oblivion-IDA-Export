char __thiscall sub_5D8130(void **this)
{
  char result; // al
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  result = sub_57D2F0(*(this + 0x1C)); /*0x5d8136*/
  if ( result ) /*0x5d813d*/
  {
    sub_57DDE0((int)*(this + 0x1C)); /*0x5d8142*/
    v3 = sub_580120((char *)*(this + 0x1C)); /*0x5d814a*/
    Tile_SetString(*(this + 0x15), (_DWORD *)0xFDE, v3); /*0x5d8158*/
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x1C)); /*0x5d8160*/
    return BSStringT_Set((BSStringT *)((char *)*(this + 0x1D) + 0x1C), RenderTargetsNum, 0); /*0x5d816e*/
  }
  return result; /*0x5d8173*/
}
