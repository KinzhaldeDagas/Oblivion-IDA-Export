char __thiscall EnchMenu_HandleUpdate(int *this)
{
  char result; // al
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  if ( *(this + 0xB) )
    Tile_SetFloat((Tile *)*(this + 0x22), (_DWORD *)0xFA1, fConstant_2);
  if ( *(this + 0xC) )
    Tile_SetFloat((Tile *)*(this + 0x23), (_DWORD *)0xFA1, fConstant_2);
  result = sub_57D2F0((void *)*(this + 0x26));
  if ( result )
  {
    sub_57DDE0(*(this + 0x26));
    v3 = sub_580120((char *)*(this + 0x26));
    Tile_SetString((_DWORD *)*(this + 0xF), (_DWORD *)0xFDE, v3);
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x26));
    return BSStringT_Set((BSStringT *)(*(this + 0xA) + 0x1C), RenderTargetsNum, 0);
  }
  return result;
}
