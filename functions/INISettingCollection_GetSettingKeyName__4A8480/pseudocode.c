void __usercall INISettingCollection_GetSettingKeyName(int a1@<edi>, int a2, char *Dest)
{
  const char *v3; // esi
  char *v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // edi
  size_t v7; // [esp-Ch] [ebp-10h]

  if ( Dest ) /*0x4a8487*/
  {
    *Dest = 0; /*0x4a848e*/
    v3 = *(const char **)(a2 + 4); /*0x4a8491*/
    if ( v3 ) /*0x4a8496*/
    {
      HIDWORD(v7) = a1; /*0x4a8498*/
      v4 = strchr(v3, 0x3A); /*0x4a849c*/
      if ( v4 ) /*0x4a84a6*/
        v5 = v4 - v3; /*0x4a84a8*/
      else
        v5 = strlen(v3); /*0x4a84ae*/
      v6 = v5; /*0x4a84bc*/
      LODWORD(v7) = v5; /*0x4a84be*/
      strncpy(Dest, v3, v7); /*0x4a84c1*/
      Dest[v6] = 0; /*0x4a84c9*/
    }
  }
}
