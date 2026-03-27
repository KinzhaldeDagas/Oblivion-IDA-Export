int RegSettingCollection_Static_Constr()
{
  return atexit(RegSettingCollection_Static_Destr);
}
