BSStringT *__thiscall EffectItemList_MagicSchoolMsg(_DWORD *this, BSStringT *a2)
{
  _DWORD *StrongestItem; // eax
  const char *value; // edi
  int School; // eax
  unsigned int v5; // eax
  const char *Name; // eax
  int v8; // [esp+0h] [ebp-1Ch]
  int v9; // [esp+4h] [ebp-18h]
  int v10; // [esp+8h] [ebp-14h]
  char v11; // [esp+10h] [ebp-Ch]

  a2->m_data = 0; /*0x4156dd*/
  a2->m_dataLen = 0; /*0x4156df*/
  a2->m_bufLen = 0; /*0x4156e3*/
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(this, 3, 0, v8, v9, v10, 1, v11); /*0x4156f6*/
  if ( StrongestItem )
  {
    value = MEMORY[0xB33500].value; /*0x4156ff*/
    School = EffectItem_GetSchool(StrongestItem); /*0x415707*/
    Magic_GetSkillAVFromSchool(School); /*0x41570d*/
    Name = (const char *)ActorValue_GetName(v5); /*0x415713*/
    BSStringT_Static_Format(a2, "%s: %s", value, Name);
  }
  return a2; /*0x41572a*/
}
