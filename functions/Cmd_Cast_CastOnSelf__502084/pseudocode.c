// positive sp value has been detected, the output may be wrong!
char __usercall Cmd_Cast_::CastOnSelf@<al>(_DWORD *a1@<ebx>, int a2@<ebp>, TESObjectREFR *a3@<esi>)
{
  TESObjectCELL *DwordAtOffset40; // esi
  UInt32 v4; // eax
  TESObjectCELL *v5; // edi
  int v7; // [esp-8h] [ebp-8h]
  void *v8; // [esp-4h] [ebp-4h]

  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x50208f*/
  v4 = Shared_GetDwordAtOffset40(v8); /*0x502091*/
  v5 = (TESObjectCELL *)v4; /*0x502098*/
  if ( !DwordAtOffset40 /*0x5020c3*/
    || !v4
    || !TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1)
    || !TESObjectCELL_IsProcessLevel_LowHigh(v5, 0) )
  {
    return Cmd_Cast_::Done_(); /*0x50209a*/
  }
  MagicCaster_CastMagicItem(a1, v7, a2, 0); /*0x5020d6*/
  return 1; /*0x5020e4*/
}
