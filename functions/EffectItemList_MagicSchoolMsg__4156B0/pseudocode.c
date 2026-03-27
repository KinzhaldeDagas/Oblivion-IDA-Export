BSStringT *__stdcall EffectItemList_MagicSchoolMsg(BSStringT *a1)
{
  _DWORD *StrongestItem; // eax
  const char *v2; // edi
  int School; // eax
  int SkillAVFromSchool; // eax
  const char *Name; // eax

  a1->m_data = 0;
  a1->m_dataLen = 0;
  a1->m_bufLen = 0;
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(3, 0);
  if ( StrongestItem )
  {
    v2 = *(const char **)sMagicSchool;
    School = EffectItem_GetSchool(StrongestItem);
    SkillAVFromSchool = Magic_GetSkillAVFromSchool(School);
    Name = (const char *)ActorValue_GetName(SkillAVFromSchool);
    BSStringT_Static_Format(a1, "%s: %s", v2, Name);
  }
  return a1;
}
