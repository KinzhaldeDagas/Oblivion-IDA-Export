int __thiscall TESActorBaseData_InitializeComponent(int this)
{
  *(_DWORD *)(this + 4) = 0;                    // 3DTheft decode 2026-05-13: TESActorBaseData::InitializeComponent clears flags at component +0x04. Plugin spawn-base filter reads this dword through TESNPC::actorBaseData. /*0x467247*/
  *(_WORD *)(this + 8) = 0x32; /*0x46724a*/
  *(_WORD *)(this + 0xA) = 0x32; /*0x46724e*/
  *(_WORD *)(this + 0xC) = 0; /*0x467252*/
  *(_WORD *)(this + 0xE) = 1; /*0x467256*/
  *(_WORD *)(this + 0x10) = 0; /*0x46725c*/
  *(_WORD *)(this + 0x12) = 0; /*0x467260*/
  *(_DWORD *)(this + 0x14) = 0; /*0x467264*/
  return 0; /*0x467267*/
}
