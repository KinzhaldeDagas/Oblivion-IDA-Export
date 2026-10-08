char sub_513B60()
{
  char *v0; // ecx
  char v1; // al

  v0 = byte_B07BF4; /*0x513b60*/
  do /*0x513b6e*/
  {
    v1 = *v0; /*0x513b65*/
    *v0 = *v0; /*0x513b67*/
    ++v0; /*0x513b69*/
  }
  while ( v1 ); /*0x513b6e*/
  if ( ((unsigned __int8 (__thiscall *)(void ***, int))INISettingCollection[5])(&INISettingCollection, 1) ) /*0x513b7f*/
  {
    ((void (__thiscall *)(void ***))INISettingCollection[7])(&INISettingCollection); /*0x513b92*/
    ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection); /*0x513ba1*/
  }
  return 1; /*0x513ba5*/
}
