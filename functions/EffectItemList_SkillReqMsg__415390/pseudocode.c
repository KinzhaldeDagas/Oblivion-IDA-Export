int __thiscall EffectItemList_SkillReqMsg(void *this, BSStringT *arg0)
{
  _DWORD *StrongestItem; // ebx
  int v4; // eax
  int School; // eax
  int SkillAVFromSchool; // eax
  const char *Name; // eax
  int MasterySkill; // [esp-4h] [ebp-9Ch]
  const char *v10; // [esp+14h] [ebp-84h]
  const char *v11; // [esp+1Ch] [ebp-7Ch]
  char a2[100]; // [esp+24h] [ebp-74h] BYREF
  int v13; // [esp+94h] [ebp-4h]

  arg0->m_data = 0;
  arg0->m_dataLen = 0;
  arg0->m_bufLen = 0;
  v13 = 0;
  FormHeapFree(0);
  arg0->m_data = 0;
  arg0->m_bufLen = 0;
  arg0->m_dataLen = 0;
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(3, 0);
  if ( StrongestItem )
  {
    v11 = (const char *)sMagicCostliestEffectSkillOf;
    v10 = (const char *)sMagicCostliestEffectRequires;
    v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
    MasterySkill = ActorValue_GetMasterySkill(v4);
    School = EffectItem_GetSchool(StrongestItem);
    SkillAVFromSchool = Magic_GetSkillAVFromSchool(School);
    Name = (const char *)ActorValue_GetName(SkillAVFromSchool);
    _sprintf(a2, "%s%s%s%d", v10, Name, v11, MasterySkill);
    BSStringT_Set(arg0, a2, 0);
  }
  return EffectItemList_SkillReqMsg_::Done(arg0);
}
