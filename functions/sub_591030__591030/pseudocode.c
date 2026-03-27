void __cdecl sub_591030(char *Source, float *a2, float a3, char *a4)
{
  char *v4; // eax
  const char *v5; // esi
  int v6; // eax
  char v7; // cl
  int v8; // eax
  char v9; // cl
  char *v10; // esi
  double v11; // st7
  size_t v12; // [esp-4h] [ebp-434h]
  const char *v13; // [esp+4h] [ebp-42Ch]
  float v14; // [esp+18h] [ebp-418h]
  float v15; // [esp+18h] [ebp-418h]
  char Str[256]; // [esp+20h] [ebp-410h] BYREF
  char Dest[260]; // [esp+120h] [ebp-310h] BYREF
  char v18[260]; // [esp+224h] [ebp-20Ch] BYREF
  char v19[260]; // [esp+328h] [ebp-108h] BYREF

  if ( Source && *Source && *Source != 0x20 )
  {
    memset(Str, 0, sizeof(Str));
    LODWORD(v12) = 0x103;
    strncpy(Dest, Source, v12);
    if ( strstr(Dest, "Data") == Dest )
    {
      _sprintf(Str, "%s", Source);
    }
    else if ( strstr(Dest, "\\Textures") == Dest )
    {
      _sprintf(Str, "Data%s", Source);
    }
    else if ( strstr(Dest, "Textures") == Dest )
    {
      _sprintf(Str, "Data\\%s", Source);
    }
    else if ( strstr(Dest, "\\Menus") == Dest )
    {
      _sprintf(Str, "Data\\Textures%s", Source);
    }
    else if ( strstr(Dest, "Menus") == Dest )
    {
      _sprintf(Str, "Data\\Textures\\%s", Source);
    }
    else
    {
      if ( strstr(Dest, SubStr) == Dest )
        v13 = "Data\\Textures\\Menus%s";
      else
        v13 = "Data\\Textures\\Menus\\%s";
      _sprintf(Str, v13, Source);
    }
    v4 = strstr(Str, "\\Menus\\");
    if ( !v4 || (v5 = v4 + 7, v4 == (char *)0xFFFFFFF9) )
    {
      v6 = 0;
      do
      {
        v7 = Str[v6];
        v19[v6++] = v7;
      }
      while ( v7 );
      v8 = 0;
      do
      {
        v9 = Str[v8];
        v18[v8++] = v9;
      }
      while ( v9 );
    }
    else
    {
      _sprintf(v19, "Data\\Textures\\Menus80\\%s", v5);
      _sprintf(v18, "Data\\Textures\\Menus50\\%s", v5);
    }
    v14 = (float)nHeight;
    v10 = Str;
    v15 = v14 / sub_57D7F0();
    *a2 = 1.0;
    v11 = flt_A3D65C;
    if ( v15 > v11 )
    {
      if ( v15 > dbl_A6B088 || a3 < 0.0 )
        goto LABEL_31;
      v11 = flt_A524B0;
      v10 = v19;
    }
    else
    {
      v10 = v18;
    }
    *a2 = v11;
LABEL_31:
    if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v10, 0, 0, 0xFFFFFFFF) )
    {
      strcpy(a4, v10);
    }
    else if ( v10 != Str )
    {
      if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, Str, 0, 0, 0xFFFFFFFF) )
      {
        *a2 = 1.0;
        strcpy(a4, Str);
      }
    }
  }
}
