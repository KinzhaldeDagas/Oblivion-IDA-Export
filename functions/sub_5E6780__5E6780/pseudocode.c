unsigned int *__thiscall sub_5E6780(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  TargetData *v5; // esi
  int TargetType; // eax
  int v7; // eax
  ObjectType v9; // eax
  ObjectType v10; // eax
  ObjectType v11; // eax
  TESForm *v12; // eax
  unsigned int v13; // [esp-8h] [ebp-10h]

  v2 = *(this + 0x16); /*0x5e6784*/
  v3 = 0; /*0x5e6787*/
  if ( !v2 ) /*0x5e678b*/
    return (unsigned int *)v3; /*0x5e678b*/
  v4 = *(_DWORD *)(v2 + 8); /*0x5e678d*/
  if ( !v4 ) /*0x5e6792*/
    return (unsigned int *)v3; /*0x5e6792*/
  v5 = *(TargetData **)(v4 + 0x28); /*0x5e6795*/
  if ( !v5 ) /*0x5e679a*/
    return (unsigned int *)v3; /*0x5e679a*/
  TargetType = TargetData::GetTargetType(*(TargetData **)(v4 + 0x28)); /*0x5e679e*/
  if ( TargetType ) /*0x5e67a5*/
  {
    v7 = TargetType - 1; /*0x5e67a7*/
    if ( v7 ) /*0x5e67aa*/
    {
      if ( v7 == 1 ) /*0x5e67af*/
      {
        sub_569E80(v5); /*0x5e67b3*/
        return 0; /*0x5e67bd*/
      }
    }
    else if ( sub_569E70(v5).form ) /*0x5e67c0*/
    {
      v9.form = sub_569E70(v5).form; /*0x5e67cb*/
      if ( v9.form->vtbl->super.Unk_29((TESForm *)v9.objectCode) ) /*0x5e67da*/
      {
        v10.form = sub_569E70(v5).form; /*0x5e67e2*/
        if ( v10.objectCode ) /*0x5e67e9*/
          return sub_4D8D70(this, (TESForm *)v10.form, 0); /*0x5e67f5*/
      }
    }
    return (unsigned int *)v3; /*0x5e67af*/
  }
  v11.form = sub_569E60(v5).form; /*0x5e67ff*/
  if ( !v11.objectCode ) /*0x5e6806*/
    return (unsigned int *)v3; /*0x5e67fc*/
  v13 = *(_DWORD *)(v11.objectCode + 0xC); /*0x5e680d*/
  v12 = v11.form->vtbl->GetBaseForm(v11.objectCode); /*0x5e6816*/
  return sub_4D8D70(this, v12, v13); /*0x5e67b9*/
}
