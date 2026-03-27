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

  v3 = 0;
  v15 = 0;
  do
  {
    result = (_DWORD *)(a3 + 0xC * *(unsigned __int16 *)(a2 + 2 * v3));
    v6 = 0;
    v17 = result;
    v16 = result[2];
    if ( v16 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(*result + 8 * v6);
        v8 = *(float **)(a1[2] + 4 * (*(int (__thiscall **)(_DWORD *, int))(*a1 + 4))(a1, v7));
        if ( !v8 )
          goto LABEL_10;
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*a1 + 8))(a1, v7, *((_DWORD *)v8 + 1)) )
        {
          v8 = *(float **)v8;
          if ( !v8 )
            goto LABEL_10;
        }
        HIWORD(result) = HIWORD(v17);
        v9 = v8[2];
        v11 = *(float *)(*v17 + 8 * v6 + 4);
        v12 = v11 < v9;
        v13 = 0;
        v14 = v11 == v9;
        LOWORD(result) = v10;
        if ( v11 > v9 )
LABEL_10:
          result = (_DWORD *)sub_72CB90(a1, v7, *(float *)(*v17 + 8 * v6 + 4));
        if ( ++v6 >= v16 )
          break;
        result = v17;
      }
      v3 = v15;
    }
    v15 = ++v3;
  }
  while ( v3 < 3 );
  return result;
}
