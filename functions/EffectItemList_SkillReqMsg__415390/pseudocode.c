int __thiscall EffectItemList_SkillReqMsg(_DWORD *this, BSStringT *arg0)
{
  _DWORD *StrongestItem; // ebx
  int v4; // eax
  int School; // eax
  unsigned int v6; // eax
  const char *Name; // eax
  int MasterySkill; // [esp-4h] [ebp-9Ch]
  int v10; // [esp+0h] [ebp-98h]
  int v11; // [esp+4h] [ebp-94h]
  int v12; // [esp+8h] [ebp-90h]
  int v13; // [esp+Ch] [ebp-8Ch]
  char v14; // [esp+10h] [ebp-88h]
  const char *v15; // [esp+14h] [ebp-84h]
  const char *v16; // [esp+1Ch] [ebp-7Ch]
  char a2[100]; // [esp+24h] [ebp-74h] BYREF
  int v18; // [esp+94h] [ebp-4h]

  arg0->m_data = 0; /*0x4153d8*/
  arg0->m_dataLen = 0; /*0x4153da*/
  arg0->m_bufLen = 0; /*0x4153de*/
  v18 = 0; /*0x4153e3*/
  FormHeapFree(0); /*0x4153f2*/
  arg0->m_data = 0; /*0x4153ff*/
  arg0->m_bufLen = 0; /*0x415401*/
  arg0->m_dataLen = 0; /*0x415405*/
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(this, 3, 0, v10, v11, v12, v13, v14); /*0x41540e*/
  if ( StrongestItem ) /*0x415412*/
  {
    v16 = (const char *)MEMORY[0xB334F8]; /*0x415421*/
    v15 = (const char *)MEMORY[0xB334F0]; /*0x415428*/
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 8))(this); /*0x41542e*/
    MasterySkill = ActorValue_GetMinimumSkillForMastery(v4); /*0x41543d*/
    School = EffectItem_GetSchool(StrongestItem); /*0x415441*/
    Magic_GetSkillAVFromSchool(School); /*0x415447*/
    Name = (const char *)ActorValue_GetName(v6); /*0x41544d*/
    _sprintf(a2, "%s%s%s%d", v15, Name, v16, MasterySkill); /*0x415465*/
    BSStringT_Set(arg0, a2, 0); /*0x415475*/
  }
  return EffectItemList_SkillReqMsg_::Done((int)arg0, (int)arg0);
}
