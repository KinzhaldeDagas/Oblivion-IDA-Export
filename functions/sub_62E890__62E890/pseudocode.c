char __cdecl sub_62E890(TESObjectREFR *a1)
{
  TESForm::FormFlags flags; // eax

  if ( a1 ) /*0x62e897*/
  {
    flags = a1->member.super.flags; /*0x62e899*/
    if ( (flags & 0x20) == 0 && (flags & 0x4000) == 0 && a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Door ) /*0x62e8bd*/
    {
      if ( TESObjectREFR_GetTeleportData(a1) ) /*0x62e8c1*/
        BSSimpleList_PushFront(&unk_B3B944, (int)a1); /*0x62e8d0*/
    }
  }
  return 0; /*0x62e8d7*/
}
