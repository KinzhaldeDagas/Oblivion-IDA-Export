char __cdecl sub_62EAA0(TESObjectREFR *item, TESObjectREFR *a2)
{
  TESForm::FormFlags flags; // eax
  TESObjectREFRVtbl *vtbl; // esi
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  int v7; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  double v9; // [esp+4h] [ebp-8h]
  float itema; // [esp+10h] [ebp+4h]
  float itemb; // [esp+10h] [ebp+4h]

  if ( !item ) /*0x62eaaa*/
    return 0; /*0x62eaaa*/
  flags = item->member.super.flags; /*0x62eab0*/
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 ) /*0x62ead4*/
    return 0; /*0x62ebe9*/
  if ( !a2 || BSSimpleList::Contains(&stru_B3B94C, item) ) /*0x62eae9*/
    return 0; /*0x62eaf3*/
  vtbl = a2[1].vtbl; /*0x62eafb*/
  if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x5D))(vtbl) ) /*0x62eb08*/
    CopyFromBase = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent /*0x62eb18*/
                                                                                   + 0x5D))(vtbl);
  else
    CopyFromBase = a2[1].vtbl->super.super.CopyFromBase; /*0x62eb1f*/
  if ( !CopyFromBase ) /*0x62eb24*/
    return 0; /*0x62eb24*/
  v7 = *((_DWORD *)CopyFromBase + 6); /*0x62eb2d*/
  if ( *(_DWORD *)(*(_DWORD *)(4 * v7 + 0xB152B0) /*0x62eb46*/
                 + 4 * (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x60))(vtbl)) != 1 )
    return 0; /*0x62eb46*/
  if ( Shared_GetDwordAtOffset40(a2) ) /*0x62eb4e*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x62eb59*/
    if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x62eb60*/
    {
      v9 = item->vtbl->GetPos(item)[2]; /*0x62eb7b*/
      itema = v9 - a2->vtbl->GetPos(a2)[2]; /*0x62eb90*/
      itemb = fabs(itema); /*0x62eb9a*/
      if ( itemb > (double)flt_A6B324 ) /*0x62ebad*/
        return 0; /*0x62ebad*/
    }
  }
  if ( item->vtbl->IsActor(item) || item->vtbl->GetBaseForm(item)->member.refID != 0x20 ) /*0x62ebcf*/
    return 0; /*0x62ebe2*/
  unk_B3B928 = (TESChildCELL *)item; /*0x62ebd3*/
  return 1; /*0x62eaf5*/
}
