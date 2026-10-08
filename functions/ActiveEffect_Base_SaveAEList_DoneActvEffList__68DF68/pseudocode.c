// Verified list-save finalization: backpatches the UInt16 active-effect count; when save-game blocks are enabled, a later branch backpatches the BLOK payload size.
int __usercall ActiveEffect_Base_SaveAEList_::DoneActvEffList@<eax>(
        _WORD *a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  *a1 = a4; /*0x68df6d*/
  if ( Global_DebugSaveBuffer ) /*0x68df71*/
    return ActiveEffect_Base_SaveAEList_::PrintDebugInfo(a2, a3, a4, a5, a6); /*0x68df79*/
  else
    return ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(a2, a3, a4, a5, (_WORD *)a6); /*0x68df78*/
}
