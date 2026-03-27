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
  int v13; // [esp-8h] [ebp-10h]

  v2 = *(this + 0x16);
  v3 = 0;
  if ( !v2 )
    return (unsigned int *)v3;
  v4 = *(_DWORD *)(v2 + 8);
  if ( !v4 )
    return (unsigned int *)v3;
  v5 = *(TargetData **)(v4 + 0x28);
  if ( !v5 )
    return (unsigned int *)v3;
  TargetType = TargetData::GetTargetType(*(TargetData **)(v4 + 0x28));
  if ( TargetType )
  {
    v7 = TargetType - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        sub_569E80(v5);
        return 0;
      }
    }
    else if ( sub_569E70(v5).form )
    {
      v9.form = sub_569E70(v5).form;
      if ( v9.form->vtbl->super.Unk_29((TESForm *)v9.objectCode) )
      {
        v10.form = sub_569E70(v5).form;
        if ( v10.objectCode )
          return sub_4D8D70(this, (TESForm *)v10.form, 0);
      }
    }
    return (unsigned int *)v3;
  }
  v11.form = sub_569E60(v5).form;
  if ( !v11.objectCode )
    return (unsigned int *)v3;
  v13 = *(_DWORD *)(v11.objectCode + 0xC);
  v12 = v11.form->vtbl->GetBaseForm(v11.objectCode);
  return sub_4D8D70(this, v12, v13);
}
