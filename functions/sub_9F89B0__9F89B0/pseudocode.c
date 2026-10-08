// Register bFixFaceNormals:General with INISettingCollection and install its shutdown cleanup.
int Initialize_bFixFaceNormalsSetting()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&bFixFaceNormals); /*0x9f89e2*/
  return atexit(Destroy_bFixFaceNormalsSetting); /*0x9f89f4*/
}
