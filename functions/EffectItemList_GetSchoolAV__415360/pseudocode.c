int EffectItemList_GetSchoolAV()
{
  _DWORD *StrongestItem; // eax
  int School; // eax

  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(3, 0);
  if ( !StrongestItem )
    return EffectItemList_GetSchoolAV_::Return_Invalid();
  School = EffectItem_GetSchool(StrongestItem);
  return Magic_GetSkillAVFromSchool(School);
}
