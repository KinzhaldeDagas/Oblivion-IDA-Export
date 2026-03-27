float *__thiscall sub_404850(float *this, int a2, float a3)
{
  *this = a3;
  *((_DWORD *)this + 1) = a2;
  SettingCollectionList_AddSetting(&INISettingCollection, (int)this);
  return this;
}
