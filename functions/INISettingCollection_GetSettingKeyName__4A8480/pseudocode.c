void __usercall INISettingCollection_GetSettingKeyName(int a1@<edi>, int a2, char *Dest)
{
  const char *v3; // esi
  char *v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // edi
  size_t v7; // [esp-Ch] [ebp-10h]

  if ( Dest )
  {
    *Dest = 0;
    v3 = *(const char **)(a2 + 4);
    if ( v3 )
    {
      HIDWORD(v7) = a1;
      v4 = strchr(v3, 0x3A);
      if ( v4 )
        v5 = v4 - v3;
      else
        v5 = strlen(v3);
      v6 = v5;
      LODWORD(v7) = v5;
      strncpy(Dest, v3, v7);
      Dest[v6] = 0;
    }
  }
}
