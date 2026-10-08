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

  if ( Source && *Source && *Source != 0x20 ) /*0x591070*/
  {
    memset(Str, 0, sizeof(Str)); /*0x591082*/
    LODWORD(v12) = 0x103; /*0x59108c*/
    strncpy(Dest, Source, v12); /*0x59109a*/
    if ( strstr(Dest, "Data") == Dest ) /*0x5910bd*/
    {
      _sprintf(Str, "%s", Source); /*0x5910ca*/
    }
    else if ( strstr(Dest, "\\Textures") == Dest ) /*0x5910ed*/
    {
      _sprintf(Str, "Data%s", Source); /*0x5910fa*/
    }
    else if ( strstr(Dest, "Textures") == Dest ) /*0x59111d*/
    {
      _sprintf(Str, "Data\\%s", Source); /*0x59112a*/
    }
    else if ( strstr(Dest, "\\Menus") == Dest ) /*0x59114d*/
    {
      _sprintf(Str, "Data\\Textures%s", Source); /*0x59115a*/
    }
    else if ( strstr(Dest, "Menus") == Dest ) /*0x59117a*/
    {
      _sprintf(Str, "Data\\Textures\\%s", Source); /*0x591187*/
    }
    else
    {
      if ( strstr(Dest, SubStr) == Dest ) /*0x5911a8*/
        v13 = "Data\\Textures\\Menus%s"; /*0x5911aa*/
      else
        v13 = "Data\\Textures\\Menus\\%s"; /*0x5911b6*/
      _sprintf(Str, v13, Source); /*0x5911c0*/
    }
    v4 = strstr(Str, "\\Menus\\"); /*0x5911d2*/
    if ( !v4 || (v5 = v4 + 7, v4 == (char *)0xFFFFFFF9) ) /*0x5911e3*/
    {
      v6 = 0; /*0x591210*/
      do /*0x591222*/
      {
        v7 = Str[v6]; /*0x591212*/
        v19[v6++] = v7; /*0x591216*/
      }
      while ( v7 ); /*0x591222*/
      v8 = 0; /*0x591224*/
      do /*0x591240*/
      {
        v9 = Str[v8]; /*0x591230*/
        v18[v8++] = v9; /*0x591234*/
      }
      while ( v9 ); /*0x591240*/
    }
    else
    {
      _sprintf(v19, "Data\\Textures\\Menus80\\%s", v5); /*0x5911f3*/
      _sprintf(v18, "Data\\Textures\\Menus50\\%s", v5); /*0x591206*/
    }
    v14 = (float)nHeight; /*0x591248*/
    v10 = Str; /*0x59125d*/
    v15 = v14 / UI_GetVirtualScreenHeight(); /*0x591261*/
    *a2 = 1.0; /*0x591267*/
    v11 = kHeadBodyNormalMatchRadius; /*0x591269*/
    if ( v15 > v11 ) /*0x59127a*/
    {
      if ( v15 > dbl_A6B088 || a3 < 0.0 ) /*0x5912a4*/
        goto LABEL_31; /*0x5912a4*/
      v11 = flt_A524B0; /*0x5912a6*/
      v10 = v19; /*0x5912ac*/
    }
    else
    {
      v10 = v18; /*0x59127e*/
    }
    *a2 = v11; /*0x5912b3*/
LABEL_31:
    if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v10, 0, 0, 0xFFFFFFFF) ) /*0x5912c7*/
    {
      strcpy(a4, v10); /*0x5912cf*/
    }
    else if ( v10 != Str ) /*0x5912fd*/
    {
      if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], Str, 0, 0, 0xFFFFFFFF) ) /*0x591315*/
      {
        *a2 = 1.0; /*0x591323*/
        strcpy(a4, Str); /*0x591330*/
      }
    }
  }
}
