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

  Menu::Menu((Menu *)this); /*0x5ad116*/
  v2 = 0; /*0x5ad11d*/
  *(_DWORD *)this = &LoadingMenu::`vftable'; /*0x5ad11f*/
  *((_DWORD *)this + 0x13) = 0; /*0x5ad125*/
  *((_DWORD *)this + 0x14) = 0; /*0x5ad128*/
  *((float *)this + 0x10) = 0.0; /*0x5ad12b*/
  *((_DWORD *)this + 0xF) = 0xFFFFFFFF; /*0x5ad131*/
  *((_DWORD *)this + 0xA) = 0xFFFFFFFF; /*0x5ad134*/
  *((_DWORD *)this + 0x18) = 0; /*0x5ad137*/
  *((_DWORD *)this + 0x19) = 0; /*0x5ad13a*/
  *((_BYTE *)this + 0x70) = 0; /*0x5ad13d*/
  *((_BYTE *)this + 0x71) = 1; /*0x5ad141*/
  sound = MEMORY[0xB33398]->sound; /*0x5ad14a*/
  v24 = 0; /*0x5ad14f*/
  if ( sound ) /*0x5ad156*/
    sub_6A9B40((int)sound); /*0x5ad158*/
  v4 = (_DWORD *)((char *)this + 0x2C); /*0x5ad15f*/
  v21 = 0.0; /*0x5ad162*/
  do /*0x5ad1ad*/
  {
    v5 = *(float **)(4 * v2 + 0xB14120); /*0x5ad170*/
    if ( v5 ) /*0x5ad179*/
    {
      *(float *)(4 * v2 + 0xB3B3DC) = *v5; /*0x5ad18d*/
      v21 = *v5 + v21; /*0x5ad19a*/
    }
    else
    {
      PrintError("Missing [LoadingBar] 'fPercentageOfBar%d' in LoadingMenu::pSectionPercentage.", v2); /*0x5ad181*/
    }
    *v4 = 0; /*0x5ad19e*/
    ++v2; /*0x5ad1a4*/
    ++v4; /*0x5ad1a7*/
  }
  while ( v2 < 4 ); /*0x5ad1ad*/
  v6 = v21; /*0x5ad1b9*/
  if ( v21 <= 1.0 ) /*0x5ad1be*/
    v7 = 1.0 - v6; /*0x5ad1ca*/
  else
    v7 = v6 - dbl_A2F928; /*0x5ad1c0*/
  if ( v7 >= fConstant_Inv100 ) /*0x5ad1d7*/
  {
    HIDWORD(Format) = "Total value of [LoadingBar] percentages is not equal to 1.0000f in ini file.\r\n"; /*0x5ad1dd*/
    LODWORD(Format) = 0x400; /*0x5ad1e9*/
    _snprintf(Dest, Format, v20); /*0x5ad1ef*/
    v8 = (float **)&off_B14120; /*0x5ad1f7*/
    do /*0x5ad281*/
    {
      if ( *v8 ) /*0x5ad200*/
      {
        HIDWORD(v15) = "\t%s - %.04f\r\n"; /*0x5ad212*/
        LODWORD(v15) = 0x104; /*0x5ad21b*/
        _snprintf(v22, v15, *((const char **)*v8 + 1), **v8); /*0x5ad221*/
      }
      else
      {
        HIDWORD(_FFFFFFFC) = "\t%s - NOT FOUND\r\n"; /*0x5ad22f*/
        LODWORD(_FFFFFFFC) = 0x104; /*0x5ad238*/
        _snprintf(v22, _FFFFFFFC, *(const char **)4); /*0x5ad23e*/
      }
      Format_4[0] = (char *)(0x400 - strlen(Dest)); /*0x5ad262*/
      _mbsnbcat((unsigned __int8 *)Dest, (const unsigned __int8 *)v22, *(size_t *)Format_4); /*0x5ad270*/
      ++v8; /*0x5ad275*/
    }
    while ( (int)v8 < (int)&byte_B14130 ); /*0x5ad281*/
    HIDWORD(v16) = "INI Total = %.04f"; /*0x5ad291*/
    LODWORD(v16) = 0x104; /*0x5ad29a*/
    _snprintf(v22, v16, (const char *)COERCE_UNSIGNED_INT64(v21), (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64(v21))); /*0x5ad2a0*/
    Format_4[0] = (char *)(0x400 - strlen(Dest)); /*0x5ad2c4*/
    _mbsnbcat((unsigned __int8 *)Dest, (const unsigned __int8 *)v22, *(size_t *)Format_4); /*0x5ad2d2*/
    PrintError(Dest); /*0x5ad2df*/
  }
  v9 = (float *)FormHeapAlloc(0x18u); /*0x5ad2ee*/
  v10 = GetTickCount; /*0x5ad2f9*/
  LOBYTE(v24) = 1; /*0x5ad2ff*/
  if ( v9 ) /*0x5ad307*/
  {
    v11 = v10(); /*0x5ad309*/
    sub_47D150(v9, v11); /*0x5ad30e*/
  }
  else
  {
    v9 = 0; /*0x5ad315*/
  }
  LOBYTE(v24) = 0; /*0x5ad317*/
  *((_DWORD *)this + 0x15) = v9; /*0x5ad31f*/
  v12 = v10(); /*0x5ad322*/
  sub_47D170(v9, v12); /*0x5ad327*/
  v13 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 0x10); /*0x5ad32f*/
  *((_DWORD *)this + 0x1A) = v13; /*0x5ad332*/
  *((_DWORD *)this + 0x1B) = v13; /*0x5ad335*/
  *((float *)this + 0x10) = flt_B14158; /*0x5ad33e*/
  return this; /*0x5ad343*/
}
