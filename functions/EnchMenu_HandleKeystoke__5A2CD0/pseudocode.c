char __thiscall EnchMenu_HandleKeystoke(void **this, int a2)
{
  char *v3; // eax
  const char *RenderTargetsNum; // eax

  if ( !sub_57D2F0(*(this + 0x26)) )
    return 0;
  sub_57FF50((char *)*(this + 0x26), a2);
  v3 = sub_580120((char *)*(this + 0x26));
  Tile_SetString(*(this + 0xF), (_DWORD *)0xFDE, v3);
  RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x26));
  BSStringT_Set((BSStringT *)((char *)*(this + 0xA) + 0x1C), RenderTargetsNum, 0);
  return 1;
}
