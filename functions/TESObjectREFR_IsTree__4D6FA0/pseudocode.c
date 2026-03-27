char __thiscall TESObjectREFR_IsTree(TESObjectREFR *this)
{
  bool v2; // zf
  char result; // al

  if ( !this->vtbl->GetBaseForm((TESChildCELL *)this) )
    return 0;
  v2 = this->vtbl->GetBaseForm(this)->member.type == kFormType_Tree;
  result = 1;
  if ( !v2 )
    return 0;
  return result;
}
