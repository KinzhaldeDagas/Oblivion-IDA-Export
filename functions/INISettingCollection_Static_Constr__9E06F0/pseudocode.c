int INISettingCollection_Static_Constr()
{
  return atexit(INISettingCollection_Static_Destr);
}
