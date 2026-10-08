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

  if ( a4 != a11 ) /*0x934b5e*/
  {
LABEL_8:
    v15 = a2 - (_DWORD)a3 - 0x10; /*0x934bd5*/
    if ( v15 + *(unsigned __int8 *)(a4 + 3) > 0x1A0 ) /*0x934bf0*/
    {
      v16 = *(_DWORD *)(a1 + 8); /*0x934bfe*/
      *a3 = v15; /*0x934c01*/
      if ( a5 >= a6 ) /*0x934c07*/
      {
        v17 = *(_DWORD *)(v16 + 4); /*0x934c09*/
        v18 = v17 + 1; /*0x934c0c*/
        v32 = v17 - a6; /*0x934c11*/
        v19 = *(_DWORD *)(v16 + 8) & 0x3FFFFFFF; /*0x934c18*/
        if ( v19 < v18 ) /*0x934c1f*/
        {
          v20 = 2 * v19; /*0x934c21*/
          if ( v18 >= v20 ) /*0x934c25*/
            v20 = v18; /*0x934c27*/
          sub_8A6E40((const void **)v16, v20, 4); /*0x934c2d*/
        }
        if ( v32 - 1 >= 0 ) /*0x934c42*/
        {
          v21 = (_DWORD *)(*(_DWORD *)v16 + 4 * a6 + 4 + 4 * (v32 - 1)); /*0x934c44*/
          v22 = v32; /*0x934c49*/
          do /*0x934c59*/
          {
            *v21 = v21[0xFFFFFFFF]; /*0x934c53*/
            v21 += 0xFFFFFFFF; /*0x934c55*/
            --v22; /*0x934c58*/
          }
          while ( v22 ); /*0x934c59*/
        }
        *(_DWORD *)(v16 + 4) = v18; /*0x934c60*/
      }
      *(_DWORD *)(*(_DWORD *)v16 + 4 * a5) = a3; /*0x934c71*/
      if ( !a7 ) /*0x934c7f*/
      {
        v23 = *(_DWORD *)(a10 + 0x19C); /*0x934c9b*/
        v24 = *(_DWORD **)(v23 + 0x64); /*0x934ca1*/
        if ( v24 ) /*0x934ca6*/
        {
          --*(_DWORD *)(v23 + 0xA8); /*0x934ca8*/
          *(_DWORD *)(v23 + 0x64) = *v24; /*0x934cb0*/
          v25 = v24; /*0x934cb3*/
        }
        else
        {
          v25 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x18))(unk_BA7D98, 0xC, 0x1C); /*0x934cc3*/
        }
        if ( v25 ) /*0x934cc8*/
          *v25 = 0; /*0x934ccc*/
      }
    }
    JUMPOUT(0x934A32); /*0x934a32*/
  }
  if ( a7 ) /*0x934b66*/
  {
    v11 = *(_DWORD **)(a10 + 0x19C); /*0x934b6c*/
    v12 = v11[0x2A]; /*0x934b72*/
    if ( v12 >= v11[0xC] ) /*0x934b7b*/
    {
      (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x1C))(unk_BA7D98, a7, 0xC, 0x1C); /*0x934b9b*/
    }
    else
    {
      v11[0x2A] = v12 + 1; /*0x934b7e*/
      *a7 = v11[0x19]; /*0x934b87*/
      v11[0x19] = a7; /*0x934b89*/
    }
  }
  v13 = *(_DWORD *)(a1 + 8); /*0x934b9e*/
  v14 = a8; /*0x934ba8*/
  a7 = a8; /*0x934bac*/
  if ( a6 < *(_DWORD *)(v13 + 4) ) /*0x934bb0*/
  {
    a4 = *(_DWORD *)(*(_DWORD *)v13 + 4 * a6++) + 0x10; /*0x934bbe*/
    goto LABEL_8; /*0x934bd1*/
  }
  *a3 = a2 - (_DWORD)a3 - 0x10; /*0x934cfb*/
  v26 = a5 + 1; /*0x934d04*/
  v27 = *(_DWORD *)(v13 + 8) & 0x3FFFFFFF; /*0x934d05*/
  if ( v27 < a5 + 1 ) /*0x934d0c*/
  {
    v28 = 2 * v27; /*0x934d0e*/
    if ( v26 >= v28 ) /*0x934d12*/
      v28 = a5 + 1; /*0x934d14*/
    sub_8A6E40((const void **)v13, v28, 4); /*0x934d1a*/
    v14 = a8; /*0x934d1f*/
  }
  v29 = *(_DWORD **)v13; /*0x934d28*/
  result = (_DWORD *)a5; /*0x934d2a*/
  *(_DWORD *)(v13 + 4) = v26; /*0x934d2e*/
  v29[a5] = a3; /*0x934d31*/
  if ( v14 ) /*0x934d34*/
  {
    result = *(_DWORD **)(a10 + 0x19C); /*0x934d3a*/
    v31 = result[0x2A]; /*0x934d40*/
    if ( v31 >= result[0xC] ) /*0x934d49*/
    {
      return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x1C))( /*0x934d6e*/
                         unk_BA7D98,
                         v14,
                         0xC,
                         0x1C);
    }
    else
    {
      result[0x2A] = v31 + 1; /*0x934d4c*/
      *v14 = result[0x19]; /*0x934d55*/
      result[0x19] = v14; /*0x934d57*/
    }
  }
  return result; /*0x934d60*/
}
