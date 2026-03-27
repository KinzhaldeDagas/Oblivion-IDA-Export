bool __usercall sub_5E8900@<al>(Actor *this@<ecx>, double a2@<st1>)
{
  LowProcess *process; // eax
  BSExtraDataVtbl *editorPackage; // edi
  char v5; // al
  TESObjectCELL *ParentCell; // eax
  int v7; // ebx
  int v8; // edi

  process = this->members.super.process;
  editorPackage = (BSExtraDataVtbl *)process->editorPackage;
  if ( !editorPackage )
    return 0;
  if ( sub_567770((char *)process->editorPackage) )
    editorPackage = ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList);
  if ( !editorPackage )
    return 0;
  if ( ((int)editorPackage[3].CompareTo & 1) == 0 )
    return 0;
  sub_566DC0((TESPackage *)editorPackage, flt_A30634, a2, this, 0, flt_A30634);
  if ( !v5 )
  {
    if ( !TESObjectREFR_GetParentCell((TESObjectREFR *)this) )
      return 0;
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    if ( !sub_4CAAC0((ExtraDataList *)ParentCell, this) )
      return 0;
  }
  v7 = 0;
  v8 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
  if ( v8 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v7 = v8;
  }
  return TESAIForm_OffersService((_DWORD *)(v7 + 0x68), 0x259F);
}
