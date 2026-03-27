LoadingMenu *__thiscall LoadingMenu::LoadingMenu(LoadingMenu *this)
{
  int v2; // edi
  void *sound; // ecx
  _DWORD *v4; // ebx
  float *v5; // eax
  double v6; // st7
  double v7; // st7
  float **v8; // edi
  float *v9; // edi
  DWORD (__stdcall *v10)(); // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  size_t v15; // [esp-Ch] [ebp-598h]
  size_t v16; // [esp-8h] [ebp-594h]
  size_t _FFFFFFFC; // [esp-4h] [ebp-590h]
  size_t Format; // [esp+0h] [ebp-58Ch]
  char *Format_4[2]; // [esp+4h] [ebp-588h]
  const char *v20; // [esp+8h] [ebp-584h]
  float v21; // [esp+34h] [ebp-558h]
  char v22[264]; // [esp+3Ch] [ebp-550h] BYREF
  char Dest[1028]; // [esp+144h] [ebp-448h] BYREF
  int v24; // [esp+588h] [ebp-4h]

  Menu::Menu((Menu *)this);
  v2 = 0;
  *(_DWORD *)this = &LoadingMenu::`vftable';
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((float *)this + 0x10) = 0.0;
  *((_DWORD *)this + 0xF) = 0xFFFFFFFF;
  *((_DWORD *)this + 0xA) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_BYTE *)this + 0x70) = 0;
  *((_BYTE *)this + 0x71) = 1;
  sound = OSGlobals->sound;
  v24 = 0;
  if ( sound )
    sub_6A9B40((int)sound);
  v4 = (_DWORD *)((char *)this + 0x2C);
  v21 = 0.0;
  do
  {
    v5 = *(float **)(4 * v2 + 0xB14120);
    if ( v5 )
    {
      *(float *)(4 * v2 + 0xB3B3DC) = *v5;
      v21 = *v5 + v21;
    }
    else
    {
      PrintError("Missing [LoadingBar] 'fPercentageOfBar%d' in LoadingMenu::pSectionPercentage.", v2);
    }
    *v4 = 0;
    ++v2;
    ++v4;
  }
  while ( v2 < 4 );
  v6 = v21;
  if ( v21 <= 1.0 )
    v7 = 1.0 - v6;
  else
    v7 = v6 - dbl_A2F928;
  if ( v7 >= fConstant_Inv100 )
  {
    HIDWORD(Format) = "Total value of [LoadingBar] percentages is not equal to 1.0000f in ini file.\r\n";
    LODWORD(Format) = 0x400;
    _snprintf(Dest, Format, v20);
    v8 = (float **)&off_B14120;
    do
    {
      if ( *v8 )
      {
        HIDWORD(v15) = "\t%s - %.04f\r\n";
        LODWORD(v15) = 0x104;
        _snprintf(v22, v15, *((const char **)*v8 + 1), **v8);
      }
      else
      {
        HIDWORD(_FFFFFFFC) = "\t%s - NOT FOUND\r\n";
        LODWORD(_FFFFFFFC) = 0x104;
        _snprintf(v22, _FFFFFFFC, *(const char **)4);
      }
      Format_4[0] = (char *)(0x400 - strlen(Dest));
      _mbsnbcat((unsigned __int8 *)Dest, (const unsigned __int8 *)v22, *(size_t *)Format_4);
      ++v8;
    }
    while ( (int)v8 < (int)&byte_B14130 );
    HIDWORD(v16) = "INI Total = %.04f";
    LODWORD(v16) = 0x104;
    _snprintf(v22, v16, (const char *)COERCE_UNSIGNED_INT64(v21), (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64(v21)));
    Format_4[0] = (char *)(0x400 - strlen(Dest));
    _mbsnbcat((unsigned __int8 *)Dest, (const unsigned __int8 *)v22, *(size_t *)Format_4);
    PrintError(Dest);
  }
  v9 = (float *)FormHeapAlloc(0x18u);
  v10 = GetTickCount;
  LOBYTE(v24) = 1;
  if ( v9 )
  {
    v11 = v10();
    sub_47D150(v9, v11);
  }
  else
  {
    v9 = 0;
  }
  LOBYTE(v24) = 0;
  *((_DWORD *)this + 0x15) = v9;
  v12 = v10();
  sub_47D170(v9, v12);
  v13 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 0x10);
  *((_DWORD *)this + 0x1A) = v13;
  *((_DWORD *)this + 0x1B) = v13;
  *((float *)this + 0x10) = flt_B14158;
  return this;
}
