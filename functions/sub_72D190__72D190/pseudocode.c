_DWORD *__stdcall sub_72D190(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // edx
  _DWORD *result; // eax
  int v6; // ebp
  int v7; // ebx
  float *v8; // esi
  double v9; // st7
  __int16 v10; // fps
  double v11; // st6
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  unsigned int v15; // [esp+20h] [ebp-Ch]
  unsigned int v16; // [esp+28h] [ebp-4h]
  _DWORD *v17; // [esp+30h] [ebp+4h]

  v3 = 0; /*0x72d196*/
  v15 = 0; /*0x72d19d*/
  do /*0x72d248*/
  {
    result = (_DWORD *)(a3 + 0xC * *(unsigned __int16 *)(a2 + 2 * v3)); /*0x72d1b0*/
    v6 = 0; /*0x72d1b6*/
    v17 = result; /*0x72d1ba*/
    v16 = result[2]; /*0x72d1be*/
    if ( v16 ) /*0x72d1c2*/
    {
      while ( 1 ) /*0x72d1cc*/
      {
        v7 = *(_DWORD *)(*result + 8 * v6); /*0x72d1cc*/
        v8 = *(float **)(a1[2] + 4 * (*(int (__thiscall **)(_DWORD *, int))(*a1 + 4))(a1, v7)); /*0x72d1dc*/
        if ( !v8 ) /*0x72d1e1*/
          goto LABEL_10; /*0x72d1e1*/
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*a1 + 8))(a1, v7, *((_DWORD *)v8 + 1)) ) /*0x72d1f3*/
        {
          v8 = *(float **)v8; /*0x72d1f5*/
          if ( !v8 ) /*0x72d1f9*/
            goto LABEL_10; /*0x72d1f9*/
        }
        HIWORD(result) = HIWORD(v17); /*0x72d200*/
        v9 = v8[2]; /*0x72d20a*/
        v11 = *(float *)(*v17 + 8 * v6 + 4); /*0x72d20e*/
        v12 = v11 < v9; /*0x72d212*/
        v13 = 0; /*0x72d212*/
        v14 = v11 == v9; /*0x72d212*/
        LOWORD(result) = v10; /*0x72d214*/
        if ( v11 > v9 ) /*0x72d219*/
LABEL_10:
          result = (_DWORD *)sub_72CB90(a1, v7, *(float *)(*v17 + 8 * v6 + 4)); /*0x72d21b*/
        if ( ++v6 >= v16 ) /*0x72d238*/
          break; /*0x72d238*/
        result = v17; /*0x72d1c6*/
      }
      v3 = v15; /*0x72d23a*/
    }
    v15 = ++v3; /*0x72d244*/
  }
  while ( v3 < 3 ); /*0x72d248*/
  return result; /*0x72d24e*/
}
