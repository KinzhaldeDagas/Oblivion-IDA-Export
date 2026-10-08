char __thiscall EnchMenu_HandleUpdate(int *this)
{
  char result; // al
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  if ( *(this + 0xB) ) /*0x5a20c3*/
    Tile_SetFloat((Tile *)*(this + 0x22), 0xFA1u, fConstant_2); /*0x5a20de*/
  if ( *(this + 0xC) ) /*0x5a20e3*/
    Tile_SetFloat((Tile *)*(this + 0x23), 0xFA1u, fConstant_2); /*0x5a20fe*/
  result = sub_57D2F0((void *)*(this + 0x26)); /*0x5a2109*/
  if ( result ) /*0x5a2110*/
  {
    sub_57DDE0(*(this + 0x26)); /*0x5a2118*/
    v3 = sub_580120((char *)*(this + 0x26)); /*0x5a2123*/
    Tile_SetString((_DWORD *)*(this + 0xF), (_DWORD *)0xFDE, v3); /*0x5a2131*/
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x26)); /*0x5a213c*/
    return BSStringT_Set((BSStringT *)(*(this + 0xA) + 0x1C), RenderTargetsNum, 0); /*0x5a214a*/
  }
  return result; /*0x5a214f*/
}
