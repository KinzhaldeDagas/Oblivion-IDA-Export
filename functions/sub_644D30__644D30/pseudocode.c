char __thiscall sub_644D30(_DWORD *this, int a2, int a3)
{
  TargetData *v3; // esi
  int TargetType; // edi
  ObjectType v6; // edi
  TESForm *v7; // eax
  ObjectType v8; // eax
  ObjectType v9; // eax
  bool (__thiscall *refID)(BSExtraData *, BSExtraData *); // [esp-Ch] [ebp-14h]
  signed int v11; // [esp+4h] [ebp-4h] BYREF

  v3 = *(TargetData **)(*(this + 2) + 0x28); /*0x644d35*/
  if ( !v3 ) /*0x644d3a*/
    return 0; /*0x644d3c*/
  TargetType = TargetData::GetTargetType(v3); /*0x644d4d*/
  if ( TargetData::GetTargetType(v3) ) /*0x644d4f*/
  {
    if ( TargetType == 1 ) /*0x644d94*/
    {
      v8.form = sub_569E70(v3).form; /*0x644da6*/
      return sub_5E4A00(a2, (TESForm *)v8.form, 0, a3, 0, &v11); /*0x644db0*/
    }
    else
    {
      v9.form = sub_569E80(v3).form; /*0x644dc9*/
      return sub_5E4A00(a2, 0, (signed int)v9.form, a3, 0, &v11); /*0x644dd5*/
    }
  }
  else
  {
    v6.form = sub_569E60(v3).form; /*0x644d61*/
    refID = (bool (__thiscall *)(BSExtraData *, BSExtraData *))sub_569E60(v3).form->member.super.refID; /*0x644d72*/
    v7 = (TESForm *)((int (__thiscall *)(ObjectType))v6.form->vtbl->GetBaseForm)(v6); /*0x644d7f*/
    return sub_5E4A00(a2, v7, 0, 1, refID, &v11); /*0x644d86*/
  }
}
