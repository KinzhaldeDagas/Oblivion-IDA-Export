char sub_513B60()
{
  char *v0; // ecx
  char v1; // al

  v0 = byte_B07BF4;
  do
  {
    v1 = *v0;
    *v0 = *v0;
    ++v0;
  }
  while ( v1 );
  if ( ((unsigned __int8 (__thiscall *)(void ***, int))INISettingCollection[5])(&INISettingCollection, 1) )
  {
    ((void (__thiscall *)(void ***))INISettingCollection[7])(&INISettingCollection);
    ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection);
  }
  return 1;
}
