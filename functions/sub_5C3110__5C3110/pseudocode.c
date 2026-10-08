// Maps a localized Race/Sex category name to its cached top-level Tile. sHair resolves RaceSexMenu+0x48.
int __thiscall RaceSexMenu_GetCategoryTileByName(_DWORD *this, unsigned __int8 *a2, int a3)
{
  const unsigned __int8 *v4; // edi
  int v5; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi

  v4 = a2; /*0x5c3134*/
  if ( !_mbscmp((const unsigned __int8 *)g_gameSetting_sMain.value, a2) ) /*0x5c313f*/
  {
    v5 = *(this + 0x10); /*0x5c314b*/
    FormHeapFree((unsigned int)v4); /*0x5c314f*/
    return v5; /*0x5c316a*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B38F78.value) ) /*0x5c3175*/
  {
    v7 = *(this + 0x11); /*0x5c3181*/
    FormHeapFree((unsigned int)v4); /*0x5c3185*/
    return v7; /*0x5c31a0*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)g_gameSetting_sHair.value) )// sHair maps to the cached Hair category Tile at RaceSexMenu+0x48. /*0x5c31ab*/
  {
    v8 = *(this + 0x12); /*0x5c31b7*/
    FormHeapFree((unsigned int)v4); /*0x5c31bb*/
    return v8; /*0x5c31d6*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B38F80.value) ) /*0x5c31e0*/
  {
    v9 = *(this + 0x13); /*0x5c31ec*/
    FormHeapFree((unsigned int)v4); /*0x5c31f0*/
    return v9; /*0x5c320b*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B38FE0.value) ) /*0x5c3216*/
  {
    v10 = *(this + 0x14); /*0x5c3222*/
LABEL_11:
    BSStringT_Clear((unsigned int *)&a2); /*0x5c3231*/
    return v10; /*0x5c3249*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B38FE8.value) ) /*0x5c3254*/
  {
    v10 = *(this + 0x15); /*0x5c3260*/
    goto LABEL_11; /*0x5c3263*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39000.value) ) /*0x5c326c*/
  {
    v10 = *(this + 0x16); /*0x5c3278*/
    goto LABEL_11; /*0x5c327b*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39008.value) ) /*0x5c3285*/
  {
    v10 = *(this + 0x17); /*0x5c3291*/
    goto LABEL_11; /*0x5c3294*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39010.value) ) /*0x5c329e*/
  {
    v10 = *(this + 0x18); /*0x5c32aa*/
    goto LABEL_11; /*0x5c32ad*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39018.value) ) /*0x5c32b9*/
  {
    v10 = *(this + 0x19); /*0x5c32c5*/
    goto LABEL_11; /*0x5c32c8*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B38F90.value) ) /*0x5c32d5*/
  {
    v10 = *(this + 0x1A); /*0x5c32e1*/
    goto LABEL_11; /*0x5c32e4*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39020.value) ) /*0x5c32f1*/
  {
    v10 = *(this + 0x1B); /*0x5c32fd*/
    goto LABEL_11; /*0x5c3300*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39028.value) ) /*0x5c330c*/
  {
    v10 = *(this + 0x1C); /*0x5c3318*/
    goto LABEL_11; /*0x5c331b*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39030.value) ) /*0x5c3328*/
  {
    v10 = *(this + 0x1D); /*0x5c3334*/
    goto LABEL_11; /*0x5c3337*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39038.value) ) /*0x5c3344*/
  {
    v10 = *(this + 0x1E); /*0x5c3350*/
    goto LABEL_11; /*0x5c3353*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39040.value) ) /*0x5c335f*/
  {
    v10 = *(this + 0x1F); /*0x5c336b*/
    goto LABEL_11; /*0x5c336e*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39050.value) ) /*0x5c337b*/
  {
    v10 = *(this + 0x20); /*0x5c3387*/
    goto LABEL_11; /*0x5c338d*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39320.value) ) /*0x5c339a*/
  {
    v10 = *(this + 0x21); /*0x5c33a6*/
    goto LABEL_11; /*0x5c33ac*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39058.value) ) /*0x5c33b8*/
  {
    v10 = *(this + 0x22); /*0x5c33c4*/
    goto LABEL_11; /*0x5c33ca*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39060.value) ) /*0x5c33d7*/
  {
    v10 = *(this + 0x23); /*0x5c33e3*/
    goto LABEL_11; /*0x5c33e9*/
  }
  if ( !_mbscmp(v4, (const unsigned __int8 *)stru_B39328.value) ) /*0x5c33f6*/
  {
    v10 = *(this + 0x24); /*0x5c340e*/
    goto LABEL_11; /*0x5c3414*/
  }
  BSStringT_Clear((unsigned int *)&a2); /*0x5c3419*/
  return 0; /*0x5c3159*/
}
