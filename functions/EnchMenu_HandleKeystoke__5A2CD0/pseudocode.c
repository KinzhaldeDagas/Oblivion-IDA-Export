char __thiscall EnchMenu_HandleKeystoke(void **this, int a2)
{
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  if ( !sub_57D2F0(*(this + 0x26)) ) /*0x5a2cd9*/
    return 0; /*0x5a2d2a*/
  sub_57FF50((char *)*(this + 0x26), a2); /*0x5a2ced*/
  v3 = sub_580120((char *)*(this + 0x26)); /*0x5a2cf8*/
  Tile_SetString(*(this + 0xF), (_DWORD *)0xFDE, v3); /*0x5a2d06*/
  RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x26)); /*0x5a2d11*/
  BSStringT_Set((BSStringT *)((char *)*(this + 0xA) + 0x1C), RenderTargetsNum, 0); /*0x5a2d1f*/
  return 1; /*0x5a2d26*/
}
