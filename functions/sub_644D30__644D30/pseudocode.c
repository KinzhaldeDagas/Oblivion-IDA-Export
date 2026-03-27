char __thiscall sub_644D30(_DWORD *this, int a2, int a3)
{
  TargetData *v3; // esi
  int TargetType; // edi
  ObjectType v6; // edi
  unsigned __int8 *v7; // eax
  ObjectType v8; // eax
  ObjectType v9; // eax
  bool (__thiscall *refID)(BSExtraData *, BSExtraData *); // [esp-Ch] [ebp-14h]
  signed int v11; // [esp+4h] [ebp-4h] BYREF

  v3 = *(TargetData **)(*(this + 2) + 0x28);
  if ( !v3 )
    return 0;
  TargetType = TargetData::GetTargetType(v3);
  if ( TargetData::GetTargetType(v3) )
  {
    if ( TargetType == 1 )
    {
      v8.form = sub_569E70(v3).form;
      return sub_5E4A00(a2, (unsigned __int8 *)v8.form, 0, a3, 0, &v11);
    }
    else
    {
      v9.form = sub_569E80(v3).form;
      return sub_5E4A00(a2, 0, (signed int)v9.form, a3, 0, &v11);
    }
  }
  else
  {
    v6.form = sub_569E60(v3).form;
    refID = (bool (__thiscall *)(BSExtraData *, BSExtraData *))sub_569E60(v3).form->member.super.refID;
    v7 = (unsigned __int8 *)((int (__thiscall *)(ObjectType))v6.form->vtbl->GetBaseForm)(v6);
    return sub_5E4A00(a2, v7, 0, 1, refID, &v11);
  }
}
