int BlendSettingCollection_Static_Constr()
{
  return atexit(BlendSettingCollection_Static_Destr);
}
