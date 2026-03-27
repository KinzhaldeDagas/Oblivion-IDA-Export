char __cdecl sub_62EAA0(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESForm::FormFlags flags; // eax
  TESObjectREFRVtbl *vtbl; // esi
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  int v7; // edi
  TESObjectCELL *ParentCell; // eax
  double v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+10h] [ebp+4h]
  float v11; // [esp+10h] [ebp+4h]

  if ( !a1 )
    return 0;
  flags = a1->member.super.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 )
    return 0;
  if ( !a2 || sub_446C30((BSSimpleList_VoidPtr *)&unk_B3B94C, a1) )
    return 0;
  vtbl = a2[1].vtbl;
  if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x5D))(vtbl) )
    CopyFromBase = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent
                                                                                   + 0x5D))(vtbl);
  else
    CopyFromBase = a2[1].vtbl->super.super.CopyFromBase;
  if ( !CopyFromBase )
    return 0;
  v7 = *((_DWORD *)CopyFromBase + 6);
  if ( *(_DWORD *)(*(_DWORD *)(4 * v7 + 0xB152B0)
                 + 4 * (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x60))(vtbl)) != 1 )
    return 0;
  if ( TESObjectREFR_GetParentCell(a2) )
  {
    ParentCell = TESObjectREFR_GetParentCell(a2);
    if ( TESObjectCELL_IsInterior(ParentCell) )
    {
      v9 = a1->vtbl->GetPos(a1)[2];
      v10 = v9 - a2->vtbl->GetPos(a2)[2];
      v11 = fabs(v10);
      if ( v11 > (double)flt_A6B324 )
        return 0;
    }
  }
  if ( a1->vtbl->IsActor(a1) || a1->vtbl->GetBaseForm(a1)->member.refID != 0x20 )
    return 0;
  dword_B3B928 = (TESChildCELL *)a1;
  return 1;
}
