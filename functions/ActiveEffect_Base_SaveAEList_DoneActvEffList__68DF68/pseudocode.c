int __usercall ActiveEffect_Base_SaveAEList_::DoneActvEffList@<eax>(
        _WORD *a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  *a1 = a4;
  if ( Global_DebugSaveBuffer )
    return ActiveEffect_Base_SaveAEList_::PrintDebugInfo(a2, a3, a4, a5, a6);
  else
    return ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(a2, a3, a4, a5, a6);
}
