int *__cdecl LoadXML_LoadSrcFiles(int *a1, char a2)
{
  int *v2; // ecx
  int v3; // ebp
  int v4; // esi
  bool v5; // cc
  int v6; // edi
  int v7; // ecx
  int *result; // eax
  int v9; // esi
  char v10; // al
  TESForm *v11; // eax
  TESFormVtbl *vtbl; // ebx
  int v13; // eax
  _BYTE *v14; // ecx
  unsigned int v15; // ecx
  int i; // ecx
  char v17; // [esp+13h] [ebp-235h]
  int v18; // [esp+14h] [ebp-234h]
  int v19; // [esp+18h] [ebp-230h]
  unsigned int v20; // [esp+1Ch] [ebp-22Ch]
  int v21; // [esp+20h] [ebp-228h]
  unsigned int v22; // [esp+28h] [ebp-220h]
  char Str1[12]; // [esp+30h] [ebp-218h] BYREF
  char v24[260]; // [esp+3Ch] [ebp-20Ch] BYREF
  char Str[260]; // [esp+140h] [ebp-108h] BYREF

  v2 = a1; /*0x589124*/
  v3 = *a1; /*0x58912d*/
  v4 = 0; /*0x589132*/
  v5 = *a1 <= 0; /*0x589134*/
  v6 = a1[1]; /*0x589137*/
  v20 = 0; /*0x58913e*/
  v18 = v6; /*0x589142*/
  v17 = 0; /*0x589146*/
  memset(&Str1[1], 0, 9); /*0x58914b*/
  if ( v5 ) /*0x589157*/
    return v2; /*0x58936f*/
  do /*0x58935a*/
  {
    Str1[0] = Str1[1]; /*0x58916f*/
    Str1[1] = Str1[2]; /*0x589178*/
    Str1[2] = Str1[3]; /*0x589181*/
    Str1[3] = Str1[4]; /*0x58918a*/
    Str1[4] = Str1[5]; /*0x589193*/
    Str1[5] = Str1[6]; /*0x589197*/
    Str1[6] = Str1[7]; /*0x58919b*/
    Str1[7] = *(_BYTE *)(v4 + v6); /*0x5891a4*/
    if ( Str1[7] > 0x60 ) /*0x5891a8*/
      Str1[7] -= 0x20; /*0x5891ac*/
    if ( !CRT_StricmpLocaleDispatch(Str1, "<INCLUDE") ) /*0x5891ba*/
    {
      v7 = 0; /*0x5891cd*/
      v17 = 1; /*0x5891d1*/
      v19 = v4 - 7; /*0x5891d6*/
      if ( v4 >= v3 ) /*0x5891da*/
        goto LABEL_8; /*0x5891da*/
      while ( *(_BYTE *)(v4 + v6) != 0x22 ) /*0x5891e4*/
      {
        if ( ++v4 >= v3 ) /*0x5891eb*/
          goto LABEL_8; /*0x5891eb*/
      }
      if ( v4 >= v3 ) /*0x58920b*/
        goto LABEL_8; /*0x58920b*/
      v9 = v4 + 1; /*0x58920d*/
      if ( v9 >= v3 ) /*0x589212*/
        goto LABEL_8; /*0x589212*/
      while ( v7 < 0x103 ) /*0x58921a*/
      {
        v10 = *(_BYTE *)(v9 + v6); /*0x58921c*/
        if ( v10 <= 0x20 || v10 == 0x22 ) /*0x589225*/
          break; /*0x589225*/
        v24[v7] = v10; /*0x589227*/
        ++v9; /*0x58922b*/
        ++v7; /*0x58922e*/
        if ( v9 >= v3 ) /*0x589233*/
          goto LABEL_8; /*0x589233*/
      }
      if ( v9 >= v3 || v7 >= 0x104 ) /*0x589241*/
        goto LABEL_8; /*0x589241*/
      v24[v7] = 0; /*0x589243*/
      do /*0x589253*/
      {
        if ( *(_BYTE *)(v9 + v6) == 0x3E ) /*0x58924c*/
          break; /*0x58924c*/
        ++v9; /*0x58924e*/
      }
      while ( v9 < v3 ); /*0x589253*/
      v4 = v9 + 1; /*0x589267*/
      _sprintf(Str, "Data\\Menus\\Prefabs\\%s", v24); /*0x58926a*/
      v11 = sub_585220(Str, 0); /*0x589279*/
      vtbl = v11->vtbl; /*0x58927e*/
      v22 = (unsigned int)v11; /*0x589288*/
      v21 = *(_DWORD *)&v11->member.type; /*0x58928c*/
      v6 = FormHeapAlloc((unsigned int)&v11->vtbl->super.InitializeComponent + v3 + 1); /*0x589299*/
      v13 = 0; /*0x58929e*/
      if ( v19 > 0 ) /*0x5892a2*/
      {
        v14 = (_BYTE *)v6; /*0x5892ae*/
        v13 = v19; /*0x5892b4*/
        do /*0x5892c7*/
        {
          *v14 = v14[v18 - v6]; /*0x5892bd*/
          ++v14; /*0x5892bf*/
          --v19; /*0x5892c2*/
        }
        while ( v19 ); /*0x5892c7*/
      }
      v15 = 0; /*0x5892c9*/
      if ( vtbl ) /*0x5892cd*/
      {
        do /*0x5892e2*/
        {
          *(_BYTE *)(v13 + v6) = *(_BYTE *)(v15 + v21); /*0x5892d7*/
          ++v15; /*0x5892da*/
          ++v13; /*0x5892dd*/
        }
        while ( v15 < (unsigned int)vtbl ); /*0x5892e2*/
      }
      for ( i = v4; i < v3; ++v13 ) /*0x5892e8*/
      {
        *(_BYTE *)(v13 + v6) = *(_BYTE *)(i + v18); /*0x5892f7*/
        ++i; /*0x5892fa*/
      }
      *(_BYTE *)(v13 + v6) = 0; /*0x589304*/
      v3 = v13; /*0x589308*/
      if ( v20 ) /*0x589310*/
        FormHeapFree(v20); /*0x589313*/
      v20 = v6; /*0x589323*/
      v18 = v6; /*0x589327*/
      if ( a2 ) /*0x58932b*/
      {
        if ( *(_DWORD *)(v22 + 4) ) /*0x589331*/
          FormHeapFree(*(_DWORD *)(v22 + 4)); /*0x589339*/
        *(_DWORD *)(v22 + 4) = 0; /*0x589342*/
        FormHeapFree(v22); /*0x589349*/
      }
    }
    ++v4; /*0x589355*/
  }
  while ( v4 < v3 ); /*0x58935a*/
  if ( !v17 ) /*0x589365*/
    return a1; /*0x58936b*/
LABEL_8:
  result = (int *)FormHeapAlloc(8u); /*0x5891ed*/
  if ( !result ) /*0x5891f9*/
    return 0; /*0x589373*/
  *result = v3; /*0x5891ff*/
  result[1] = v6; /*0x589201*/
  return result; /*0x589375*/
}
