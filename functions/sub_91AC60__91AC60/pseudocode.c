int __thiscall sub_91AC60(_DWORD *this, const void **a2)
{
  const void **v2; // ebp
  const void ***v3; // edi
  _DWORD *v4; // eax
  int v6; // eax
  const void ***v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi
  int v12; // edi
  _DWORD *v13; // ebp
  int v14; // eax
  int v15; // esi
  int v16; // ecx
  _DWORD *v17; // esi
  int v18; // edi
  _DWORD *v19; // ebp
  _DWORD *v20; // ebx
  int result; // eax
  _DWORD *v22; // ebx
  int k; // esi
  int i; // [esp+18h] [ebp+4h]
  int j; // [esp+18h] [ebp+4h]

  v2 = (const void **)this; /*0x91ac65*/
  v3 = 0; /*0x91ac67*/
  if ( this ) /*0x91ac6f*/
    v4 = this + 0xA; /*0x91ac71*/
  else
    v4 = 0; /*0x91ac76*/
  sub_899CA0(a2, (int)v4); /*0x91ac7f*/
  if ( v2 ) /*0x91ac86*/
    v6 = (int)(v2 + 0xB); /*0x91ac88*/
  else
    v6 = 0; /*0x91ac8d*/
  sub_899D20(a2, v6); /*0x91ac92*/
  v7 = (const void ***)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x32); /*0x91aca3*/
  if ( v7 ) /*0x91aca8*/
  {
    v7[1] = 0; /*0x91acaa*/
    v7[2] = 0; /*0x91acad*/
    v7[3] = (const void **)0x80000000; /*0x91acb0*/
    v3 = v7; /*0x91acb7*/
  }
  *v3 = a2; /*0x91acbc*/
  if ( v2[0xD] == (const void *)((unsigned int)v2[0xE] & 0x3FFFFFFF) ) /*0x91accc*/
    sub_8A6EE0(v2 + 0xC, 4); /*0x91acd1*/
  *((_DWORD *)v2[0xC] + (_DWORD)v2[0xD]) = v3; /*0x91acde*/
  v2[0xD] = (char *)v2[0xD] + 1; /*0x91ace1*/
  v8 = 0; /*0x91ace7*/
  for ( i = 0; v8 < (int)a2[0xF]; i = v8 ) /*0x91acef*/
  {
    v9 = *((_DWORD *)a2[0xE] + v8); /*0x91acf4*/
    v10 = *(_DWORD *)(v9 + 0x38); /*0x91acf7*/
    v11 = (_DWORD *)(v9 + 0x34); /*0x91acfa*/
    v12 = 0; /*0x91acfd*/
    if ( v10 > 0 ) /*0x91ad01*/
    {
      v13 = v2 + 0xA; /*0x91ad03*/
      do /*0x91ad1a*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 4))(v13, *(_DWORD *)(*v11 + 4 * v12++)); /*0x91ad11*/
      while ( v12 < v11[1] ); /*0x91ad1a*/
      v2 = (const void **)this; /*0x91ad1c*/
      v8 = i; /*0x91ad20*/
    }
    ++v8; /*0x91ad27*/
  }
  v14 = 0; /*0x91ad33*/
  for ( j = 0; v14 < (int)a2[0x12]; j = v14 ) /*0x91ad3b*/
  {
    v15 = *((_DWORD *)a2[0x11] + v14); /*0x91ad43*/
    v16 = *(_DWORD *)(v15 + 0x38); /*0x91ad46*/
    v17 = (_DWORD *)(v15 + 0x34); /*0x91ad49*/
    v18 = 0; /*0x91ad4c*/
    if ( v16 > 0 ) /*0x91ad50*/
    {
      v19 = v2 + 0xA; /*0x91ad52*/
      do /*0x91ad69*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v19 + 4))(v19, *(_DWORD *)(*v17 + 4 * v18++)); /*0x91ad60*/
      while ( v18 < v17[1] ); /*0x91ad69*/
      v14 = j; /*0x91ad6b*/
      v2 = (const void **)this; /*0x91ad6f*/
    }
    ++v14; /*0x91ad76*/
  }
  v20 = a2[0xC]; /*0x91ad7f*/
  result = v20[0xE]; /*0x91ad82*/
  v22 = v20 + 0xD; /*0x91ad85*/
  for ( k = 0; k < result; ++k ) /*0x91ad8c*/
  {
    (*((void (__thiscall **)(const void **, _DWORD))v2[0xA] + 1))(v2 + 0xA, *(_DWORD *)(*v22 + 4 * k)); /*0x91ad9b*/
    result = v22[1]; /*0x91ad9e*/
  }
  return result; /*0x91ada6*/
}
