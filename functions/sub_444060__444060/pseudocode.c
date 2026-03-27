_DWORD *__thiscall sub_444060(_DWORD *this, int a2, int a3)
{
  *(this + 1) = a2;
  *this = a3;
  SettingCollectionList_AddSetting(&INISettingCollection, (int)this);
  return this;
}
