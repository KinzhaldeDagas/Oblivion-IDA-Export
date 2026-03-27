char *__thiscall sub_91EE60(const void **this, int a2, char *a3)
{
  int v4; // esi
  int v5; // eax
  const void *v6; // ecx
  signed int v8; // eax
  int v9; // eax
  int v10; // ebx
  char *v11; // eax
  int v12; // ecx
  char *v13; // edx
  int v14; // esi
  int v15; // eax
  char *v16; // esi
  char *v17; // edi
  char *result; // eax
  char *v19; // ecx
  int v20; // ebx
  int v21; // edx
  char *v22; // esi
  char *v23; // edi
  const void *v24; // [esp+10h] [ebp-Ch]
  char *v25; // [esp+14h] [ebp-8h]
  int v26; // [esp+18h] [ebp-4h]
  int v27; // [esp+20h] [ebp+4h]
  int v28; // [esp+20h] [ebp+4h]

  v4 = *((_DWORD *)a3 + 1);
  v5 = (int)*(this + 1);
  v6 = (const void *)(v5 + v4);
  v27 = v5 - a2;
  v8 = (unsigned int)*(this + 2) & 0x3FFFFFFF;
  v26 = v4;
  v24 = v6;
  if ( v8 < (int)v6 )
  {
    v9 = 2 * v8;
    if ( (int)v6 >= v9 )
      v9 = (int)v6;
    sub_8A6E40(this, v9, 0x1C);
  }
  v10 = 0x1C * a2;
  v11 = (char *)*this + 0x1C * v4 + 0x1C * a2;
  v12 = v27 - 1;
  v25 = (char *)*this + 0x1C * a2;
  if ( v27 - 1 >= 0 )
  {
    v13 = &v11[0x1C * v12];
    v14 = v25 - v11;
    v28 = v25 - v11;
    v15 = v12 + 1;
    while ( 1 )
    {
      v16 = &v13[v14];
      v17 = v13;
      v13 += 0xFFFFFFE4;
      --v15;
      qmemcpy(v17, v16, 0x1Cu);
      if ( !v15 )
        break;
      v14 = v28;
    }
    v4 = v26;
  }
  result = a3;
  v19 = (char *)*this + v10;
  if ( v4 - 1 < 0 )
  {
    *(this + 1) = v24;
  }
  else
  {
    result = &v19[0x1C * v4 - 0x1C];
    v20 = *(_DWORD *)a3 - (_DWORD)v19;
    v21 = v4;
    do
    {
      v22 = &result[v20];
      v23 = result;
      result += 0xFFFFFFE4;
      --v21;
      qmemcpy(v23, v22, 0x1Cu);
    }
    while ( v21 );
    *(this + 1) = v24;
  }
  return result;
}
