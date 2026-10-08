_DWORD *__thiscall sub_444060(_DWORD *this, int a2, int a3)
{
  *(this + 1) = a2; /*0x444090*/
  *this = a3; /*0x444093*/
  SettingCollectionList_AddSetting(&INISettingCollection, (int)this); /*0x4440a3*/
  return this; /*0x4440aa*/
}
