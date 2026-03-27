int __cdecl INISettingCollection_PackRGBAValue(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  return a4 | ((a3 | (((a1 << 8) | a2) << 8)) << 8);
}
