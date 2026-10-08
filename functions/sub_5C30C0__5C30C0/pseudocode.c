BOOL __thiscall sub_5C30C0(char **this)
{
  char *v2; // eax
  TESForm *v3; // edi
  const char *RenderTargetsNum; // eax

  v2 = sub_580120(*(this + 0x23B)); /*0x5c30ca*/
  Tile_SetString(*(this + 0xC), (_DWORD *)0xFDE, v2); /*0x5c30d8*/
  v3 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c30f3*/
  RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x23B)); /*0x5c30f5*/
  return BSStringT_Set((BSStringT *)&v3[6].member.modlist.next, RenderTargetsNum, 0); /*0x5c3108*/
}
