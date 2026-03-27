bool __cdecl sub_9320F0(int a1, int a2, _DWORD *a3, const void **a4)
{
  _DWORD *v4; // ebx
  bool result; // al
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  char *v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  char *v13; // ecx
  char *v14; // edi
  bool v15; // cc
  int v16; // [esp+10h] [ebp-14h]
  int v17; // [esp+14h] [ebp-10h]
  _DWORD *v18; // [esp+18h] [ebp-Ch]
  bool v19; // [esp+1Ch] [ebp-8h] BYREF
  bool v20; // [esp+20h] [ebp-4h] BYREF

  v4 = a3;
  result = 0;
  v17 = 0;
  if ( (int)a3[1] <= 0 )
  {
LABEL_21:
    a4[1] = 0;
  }
  else
  {
    v16 = 0;
    while ( 1 )
    {
      a4[1] = 0;
      v6 = (_DWORD *)(v16 + *v4);
      v18 = v6;
      if ( ((unsigned int)a4[2] & 0x3FFFFFFF) == 0 )
        sub_8A6E40(a4, 1, 0x10);
      v7 = *a4;
      a4[1] = (const void *)1;
      *v7 = *v6;
      v7[1] = v6[1];
      v8 = (_DWORD *)v6[2];
      if ( v8 )
        break;
LABEL_19:
      v15 = ++v17 < v4[1];
      v16 += 0x14;
      if ( !v15 )
      {
        result = 0;
        goto LABEL_21;
      }
    }
    while ( 1 )
    {
      if ( *v8 == *v6 && v8[1] == v6[1] && v8[3] == v6[3] )
      {
        sub_9316C0(&v19, a1, *(_DWORD *)(a2 + 4), 1, (int *)a4);
        sub_9316C0(&v20, a2, *(_DWORD *)(a1 + 4), 0, (int *)a4);
        if ( v19 )
        {
          result = v20;
          if ( v20 )
            break;
        }
      }
      v9 = (char *)a4[1];
      v10 = (int)(v9 + 1);
      v11 = (unsigned int)a4[2] & 0x3FFFFFFF;
      if ( v11 < (int)(v9 + 1) )
      {
        v12 = 2 * v11;
        if ( v10 >= v12 )
          v12 = (int)(v9 + 1);
        sub_8A6E40(a4, v12, 0x10);
      }
      v13 = (char *)*a4;
      a4[1] = (const void *)v10;
      v14 = &v13[0x10 * (_DWORD)v9];
      *(_DWORD *)v14 = *v8;
      *((_DWORD *)v14 + 1) = v8[1];
      v8 = (_DWORD *)v8[2];
      if ( !v8 )
      {
        v4 = a3;
        goto LABEL_19;
      }
      v6 = v18;
    }
  }
  return result;
}
