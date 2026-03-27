BOOL __thiscall sub_5C30C0(char **this)
{
  char *v2; // eax
  TESForm *v3; // edi
  const char *RenderTargetsNum; // eax

  v2 = sub_580120(*(this + 0x23B));
  Tile_SetString(*(this + 0xC), (_DWORD *)0xFDE, v2);
  v3 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x23B));
  return BSStringT_Set((BSStringT *)&v3[6].member.modlist.next, RenderTargetsNum, 0);
}
