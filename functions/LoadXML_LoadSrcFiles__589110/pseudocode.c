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

  v2 = a1;
  v3 = *a1;
  v4 = 0;
  v5 = *a1 <= 0;
  v6 = a1[1];
  v20 = 0;
  v18 = v6;
  v17 = 0;
  memset(&Str1[1], 0, 9);
  if ( v5 )
    return v2;
  do
  {
    Str1[0] = Str1[1];
    Str1[1] = Str1[2];
    Str1[2] = Str1[3];
    Str1[3] = Str1[4];
    Str1[4] = Str1[5];
    Str1[5] = Str1[6];
    Str1[6] = Str1[7];
    Str1[7] = *(_BYTE *)(v4 + v6);
    if ( Str1[7] > 0x60 )
      Str1[7] -= 0x20;
    if ( !_strcmp(Str1, "<INCLUDE") )
    {
      v7 = 0;
      v17 = 1;
      v19 = v4 - 7;
      if ( v4 >= v3 )
        goto LABEL_8;
      while ( *(_BYTE *)(v4 + v6) != 0x22 )
      {
        if ( ++v4 >= v3 )
          goto LABEL_8;
      }
      if ( v4 >= v3 )
        goto LABEL_8;
      v9 = v4 + 1;
      if ( v9 >= v3 )
        goto LABEL_8;
      while ( v7 < 0x103 )
      {
        v10 = *(_BYTE *)(v9 + v6);
        if ( v10 <= 0x20 || v10 == 0x22 )
          break;
        v24[v7] = v10;
        ++v9;
        ++v7;
        if ( v9 >= v3 )
          goto LABEL_8;
      }
      if ( v9 >= v3 || v7 >= 0x104 )
        goto LABEL_8;
      v24[v7] = 0;
      do
      {
        if ( *(_BYTE *)(v9 + v6) == 0x3E )
          break;
        ++v9;
      }
      while ( v9 < v3 );
      v4 = v9 + 1;
      _sprintf(Str, "Data\\Menus\\Prefabs\\%s", v24);
      v11 = sub_585220(Str, 0);
      vtbl = v11->vtbl;
      v22 = (unsigned int)v11;
      v21 = *(_DWORD *)&v11->member.type;
      v6 = FormHeapAlloc((unsigned int)&v11->vtbl->super.InitializeComponent + v3 + 1);
      v13 = 0;
      if ( v19 > 0 )
      {
        v14 = (_BYTE *)v6;
        v13 = v19;
        do
        {
          *v14 = v14[v18 - v6];
          ++v14;
          --v19;
        }
        while ( v19 );
      }
      v15 = 0;
      if ( vtbl )
      {
        do
        {
          *(_BYTE *)(v13 + v6) = *(_BYTE *)(v15 + v21);
          ++v15;
          ++v13;
        }
        while ( v15 < (unsigned int)vtbl );
      }
      for ( i = v4; i < v3; ++v13 )
      {
        *(_BYTE *)(v13 + v6) = *(_BYTE *)(i + v18);
        ++i;
      }
      *(_BYTE *)(v13 + v6) = 0;
      v3 = v13;
      if ( v20 )
        FormHeapFree(v20);
      v20 = v6;
      v18 = v6;
      if ( a2 )
      {
        if ( *(_DWORD *)(v22 + 4) )
          FormHeapFree(*(_DWORD *)(v22 + 4));
        *(_DWORD *)(v22 + 4) = 0;
        FormHeapFree(v22);
      }
    }
    ++v4;
  }
  while ( v4 < v3 );
  if ( !v17 )
    return a1;
LABEL_8:
  result = (int *)FormHeapAlloc(8u);
  if ( !result )
    return 0;
  *result = v3;
  result[1] = v6;
  return result;
}
