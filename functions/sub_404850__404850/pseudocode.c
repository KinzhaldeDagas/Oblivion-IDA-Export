float *__thiscall sub_404850(float *this, int a2, float a3)
{
  *this = a3; /*0x404880*/
  *((_DWORD *)this + 1) = a2; /*0x404882*/
  SettingCollectionList_AddSetting(&INISettingCollection, (int)this); /*0x404893*/
  return this; /*0x40489a*/
}
