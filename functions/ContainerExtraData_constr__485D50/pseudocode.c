ExtraContainerChanges_Data *__thiscall ContainerExtraData_constr(ExtraContainerChanges_Data *this, TESObjectREFR *a2)
{
  tListEntryData *v3; // eax
  TESObjectREFR *v4; // eax
  TESForm *v5; // eax

  this->owner = a2; /*0x485d79*/
  v3 = (tListEntryData *)FormHeapAlloc(8u); /*0x485d7c*/
  if ( v3 ) /*0x485d86*/
  {
    v3->node.data = 0; /*0x485d88*/
    v3->node.next = 0; /*0x485d8e*/
  }
  else
  {
    v3 = 0; /*0x485d97*/
  }
  this->objList = v3; /*0x485d99*/
  if ( !*(_DWORD *)&MEMORY[0xB33E90][0x598] ) /*0x485d9b*/
  {
    v4 = (TESObjectREFR *)FormHeapAlloc(0x58u); /*0x485da6*/
    a2 = v4; /*0x485dae*/
    if ( v4 ) /*0x485dbc*/
      v5 = (TESForm *)TESObjectREFR_constr((TESChildCELL *)v4); /*0x485dc0*/
    else
      v5 = 0; /*0x485dc7*/
    *(_DWORD *)&MEMORY[0xB33E90][0x598] = v5; /*0x485dd3*/
    TESForm_MakeTemporary(v5); /*0x485dd8*/
  }
  return ContainerExtraData_constr_::InitCachedWeights_Return(this, (int)a2); /*0x485d81*/
}
