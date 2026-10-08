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

  v4 = *((_DWORD *)a3 + 1); /*0x91ee6c*/
  v5 = (int)*(this + 1); /*0x91ee6f*/
  v6 = (const void *)(v5 + v4); /*0x91ee72*/
  v27 = v5 - a2; /*0x91ee7c*/
  v8 = (unsigned int)*(this + 2) & 0x3FFFFFFF; /*0x91ee83*/
  v26 = v4; /*0x91ee8a*/
  v24 = v6; /*0x91ee8e*/
  if ( v8 < (int)v6 ) /*0x91ee92*/
  {
    v9 = 2 * v8; /*0x91ee94*/
    if ( (int)v6 >= v9 ) /*0x91ee98*/
      v9 = (int)v6; /*0x91ee9a*/
    sub_8A6E40(this, v9, 0x1C); /*0x91eea0*/
  }
  v10 = 0x1C * a2; /*0x91eeb0*/
  v11 = (char *)*this + 0x1C * v4 + 0x1C * a2; /*0x91eeb9*/
  v12 = v27 - 1; /*0x91eebf*/
  v25 = (char *)*this + 0x1C * a2; /*0x91eec0*/
  if ( v27 - 1 >= 0 ) /*0x91eec4*/
  {
    v13 = &v11[0x1C * v12]; /*0x91eecf*/
    v14 = v25 - v11; /*0x91eed1*/
    v28 = v25 - v11; /*0x91eed3*/
    v15 = v12 + 1; /*0x91eed7*/
    while ( 1 ) /*0x91eee0*/
    {
      v16 = &v13[v14]; /*0x91eee0*/
      v17 = v13; /*0x91eee2*/
      v13 += 0xFFFFFFE4; /*0x91eee9*/
      --v15; /*0x91eeec*/
      qmemcpy(v17, v16, 0x1Cu); /*0x91eeed*/
      if ( !v15 ) /*0x91eeef*/
        break; /*0x91eeef*/
      v14 = v28; /*0x91eedc*/
    }
    v4 = v26; /*0x91eef1*/
  }
  result = a3; /*0x91eef8*/
  v19 = (char *)*this + v10; /*0x91ef01*/
  if ( v4 - 1 < 0 ) /*0x91ef05*/
  {
    *(this + 1) = v24; /*0x91ef3c*/
  }
  else
  {
    result = &v19[0x1C * v4 - 0x1C]; /*0x91ef0e*/
    v20 = *(_DWORD *)a3 - (_DWORD)v19; /*0x91ef10*/
    v21 = v4; /*0x91ef12*/
    do /*0x91ef23*/
    {
      v22 = &result[v20]; /*0x91ef13*/
      v23 = result; /*0x91ef16*/
      result += 0xFFFFFFE4; /*0x91ef1d*/
      --v21; /*0x91ef20*/
      qmemcpy(v23, v22, 0x1Cu); /*0x91ef21*/
    }
    while ( v21 ); /*0x91ef23*/
    *(this + 1) = v24; /*0x91ef2b*/
  }
  return result; /*0x91ef29*/
}
