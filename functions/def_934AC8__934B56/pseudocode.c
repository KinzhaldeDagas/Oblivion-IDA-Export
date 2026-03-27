// positive sp value has been detected, the output may be wrong!
_DWORD *__usercall def_934AC8@<eax>(
        int a1@<ebp>,
        int a2@<esi>,
        int *a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edi
  _DWORD *v14; // edx
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // ecx
  _DWORD *v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // ecx
  _DWORD *result; // eax
  int v31; // ecx
  int v32; // [esp+1Ch] [ebp+1Ch]

  if ( a4 != a11 )
  {
LABEL_8:
    v15 = a2 - (_DWORD)a3 - 0x10;
    if ( v15 + *(unsigned __int8 *)(a4 + 3) > 0x1A0 )
    {
      v16 = *(_DWORD *)(a1 + 8);
      *a3 = v15;
      if ( a5 >= a6 )
      {
        v17 = *(_DWORD *)(v16 + 4);
        v18 = v17 + 1;
        v32 = v17 - a6;
        v19 = *(_DWORD *)(v16 + 8) & 0x3FFFFFFF;
        if ( v19 < v18 )
        {
          v20 = 2 * v19;
          if ( v18 >= v20 )
            v20 = v18;
          sub_8A6E40((const void **)v16, v20, 4);
        }
        if ( v32 - 1 >= 0 )
        {
          v21 = (_DWORD *)(*(_DWORD *)v16 + 4 * a6 + 4 + 4 * (v32 - 1));
          v22 = v32;
          do
          {
            *v21 = v21[0xFFFFFFFF];
            v21 += 0xFFFFFFFF;
            --v22;
          }
          while ( v22 );
        }
        *(_DWORD *)(v16 + 4) = v18;
      }
      *(_DWORD *)(*(_DWORD *)v16 + 4 * a5) = a3;
      if ( !a7 )
      {
        v23 = *(_DWORD *)(a10 + 0x19C);
        v24 = *(_DWORD **)(v23 + 0x64);
        if ( v24 )
        {
          --*(_DWORD *)(v23 + 0xA8);
          *(_DWORD *)(v23 + 0x64) = *v24;
          v25 = v24;
        }
        else
        {
          v25 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x18))(
                            dword_BA7D98,
                            0xC,
                            0x1C);
        }
        if ( v25 )
          *v25 = 0;
      }
    }
    JUMPOUT(0x934A32);
  }
  if ( a7 )
  {
    v11 = *(_DWORD **)(a10 + 0x19C);
    v12 = v11[0x2A];
    if ( v12 >= v11[0xC] )
    {
      (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x1C))(dword_BA7D98, a7, 0xC, 0x1C);
    }
    else
    {
      v11[0x2A] = v12 + 1;
      *a7 = v11[0x19];
      v11[0x19] = a7;
    }
  }
  v13 = *(_DWORD *)(a1 + 8);
  v14 = a8;
  a7 = a8;
  if ( a6 < *(_DWORD *)(v13 + 4) )
  {
    a4 = *(_DWORD *)(*(_DWORD *)v13 + 4 * a6++) + 0x10;
    goto LABEL_8;
  }
  *a3 = a2 - (_DWORD)a3 - 0x10;
  v26 = a5 + 1;
  v27 = *(_DWORD *)(v13 + 8) & 0x3FFFFFFF;
  if ( v27 < a5 + 1 )
  {
    v28 = 2 * v27;
    if ( v26 >= v28 )
      v28 = a5 + 1;
    sub_8A6E40((const void **)v13, v28, 4);
    v14 = a8;
  }
  v29 = *(_DWORD **)v13;
  result = (_DWORD *)a5;
  *(_DWORD *)(v13 + 4) = v26;
  v29[a5] = a3;
  if ( v14 )
  {
    result = *(_DWORD **)(a10 + 0x19C);
    v31 = result[0x2A];
    if ( v31 >= result[0xC] )
    {
      return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x1C))(
                         dword_BA7D98,
                         v14,
                         0xC,
                         0x1C);
    }
    else
    {
      result[0x2A] = v31 + 1;
      *v14 = result[0x19];
      result[0x19] = v14;
    }
  }
  return result;
}
