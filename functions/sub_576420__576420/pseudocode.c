char **__thiscall FontManager_Construct(char **this)
{
  char *v2; // eax
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax

  v2 = (char *)FormHeapAlloc(0x3Cu); /*0x576447*/
  if ( v2 ) /*0x57645d*/
    v3 = FontInfo_Construct(v2, 1, off_B12E1C[0], 1); /*0x57646c*/
  else
    v3 = 0; /*0x576473*/
  *this = v3; /*0x57647e*/
  v4 = (char *)FormHeapAlloc(0x3Cu); /*0x576480*/
  if ( v4 ) /*0x576496*/
    v5 = FontInfo_Construct(v4, 2, off_B12E24[0], 1); /*0x5764a5*/
  else
    v5 = 0; /*0x5764ac*/
  *(this + 1) = v5; /*0x5764b4*/
  v6 = (char *)FormHeapAlloc(0x3Cu); /*0x5764b7*/
  if ( v6 ) /*0x5764cd*/
    v7 = FontInfo_Construct(v6, 3, off_B12E2C[0], 1); /*0x5764dc*/
  else
    v7 = 0; /*0x5764e3*/
  *(this + 2) = v7; /*0x5764eb*/
  v8 = (char *)FormHeapAlloc(0x3Cu); /*0x5764ee*/
  if ( v8 ) /*0x576504*/
    v9 = FontInfo_Construct(v8, 4, off_B12E34[0], 1); /*0x576513*/
  else
    v9 = 0; /*0x57651a*/
  *(this + 3) = v9; /*0x576522*/
  v10 = (char *)FormHeapAlloc(0x3Cu); /*0x576525*/
  if ( v10 ) /*0x57653b*/
    v11 = FontInfo_Construct(v10, 5, off_B12E3C[0], 1); /*0x57654a*/
  else
    v11 = 0; /*0x576551*/
  *(this + 4) = v11; /*0x576553*/
  *((_BYTE *)this + 0x14) = 0; /*0x576556*/
  return this; /*0x57655c*/
}
