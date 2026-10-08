int __usercall Cmd_Cast_::CastNonActor@<eax>(
        _DWORD *a1@<ebx>,
        int a2@<ebp>,
        TESObjectREFR *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        TESChildCELL *a8)
{
  TESObjectCELL *DwordAtOffset40; // esi
  UInt32 v9; // eax
  TESObjectCELL *v10; // edi

  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x5020f0*/
  v9 = Shared_GetDwordAtOffset40(a8); /*0x5020f2*/
  v10 = (TESObjectCELL *)v9; /*0x5020f9*/
  if ( DwordAtOffset40 ) /*0x5020fb*/
  {
    if ( v9 ) /*0x5020ff*/
    {
      if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1) && TESObjectCELL_IsProcessLevel_LowHigh(v10, 0) ) /*0x50211c*/
        MagicCaster_CastMagicItem(a1, a7, a2, 0); /*0x50212f*/
    }
  }
  return Cmd_Cast_::Done_();
}
