char __thiscall sub_64F840(signed int *this, _BYTE *a2, int a3)
{
  TargetData *v4; // esi
  int TargetType; // ebx
  ObjectType v7; // ebx
  unsigned __int8 *v8; // eax
  ObjectType v9; // eax
  ObjectType v10; // eax
  bool (__thiscall *refID)(BSExtraData *, BSExtraData *); // [esp-Ch] [ebp-14h]
  signed int *v12; // [esp-8h] [ebp-10h]

  v4 = *(TargetData **)((*(int (__thiscall **)(signed int *))(*this + 0x184))(this) + 0x28);
  if ( !v4 )
    return 0;
  TargetType = TargetData::GetTargetType(v4);
  if ( TargetData::GetTargetType(v4) )
  {
    v12 = this + 0x38;
    if ( TargetType == 1 )
    {
      v9.form = sub_569E70(v4).form;
      return sub_5E4A00((int)a2, (unsigned __int8 *)v9.form, 0, a3, 0, v12);
    }
    else
    {
      v10.form = sub_569E80(v4).form;
      return sub_5E4A00((int)a2, 0, (signed int)v10.form, a3, 0, v12);
    }
  }
  else
  {
    v7.form = sub_569E60(v4).form;
    refID = (bool (__thiscall *)(BSExtraData *, BSExtraData *))sub_569E60(v4).form->member.super.refID;
    v8 = (unsigned __int8 *)((int (__thiscall *)(ObjectType))v7.form->vtbl->GetBaseForm)(v7);
    return sub_5E4A00((int)a2, v8, 0, 1, refID, this + 0x38);
  }
}
