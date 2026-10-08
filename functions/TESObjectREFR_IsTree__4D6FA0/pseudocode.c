char __thiscall TESObjectREFR_IsTree(TESObjectREFR *this)
{
  bool v2; // zf
  char result; // al

  if ( !this->vtbl->GetBaseForm((TESChildCELL *)this) ) /*0x4d6fae*/
    return 0; /*0x4d6fae*/
  v2 = this->vtbl->GetBaseForm(this)->member.type == kFormType_Tree; /*0x4d6fc0*/
  result = 1; /*0x4d6fc4*/
  if ( !v2 ) /*0x4d6fc6*/
    return 0; /*0x4d6fc8*/
  return result; /*0x4d6fca*/
}
