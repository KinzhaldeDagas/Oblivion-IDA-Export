int __thiscall sub_94CD00(_DWORD *this, const void **a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // ebp
  _DWORD *v10; // eax
  _OWORD *v11; // ebx
  _OWORD *v12; // eax
  int v13; // ebp
  _OWORD *v14; // ebx
  _OWORD *v15; // eax
  _OWORD *v16; // ebx
  _OWORD *v17; // eax
  _OWORD *v18; // ebx
  _OWORD *v19; // eax
  _OWORD *v20; // ebx
  _OWORD *v21; // eax
  _OWORD *v22; // ebx
  _OWORD *v23; // eax
  bool v24; // zf
  int v25; // [esp+4h] [ebp-18h]
  int v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+18h] [ebp-4h]
  int v28; // [esp+20h] [ebp+4h]

  result = *(this + 0x14);
  if ( result )
  {
    v4 = *(_DWORD *)(result + 0x10) - 1;
    if ( v4 >= 0 )
    {
      v5 = 0xC * v4;
      v28 = 0xC * v4;
      v25 = v4 + 1;
      while ( 1 )
      {
        v7 = (_DWORD *)*(this + 0x14);
        v8 = v7[3];
        v9 = *(_DWORD *)(v5 + v8 + 4);
        v10 = (_DWORD *)(v8 + v5);
        v11 = (_OWORD *)(0x10 * *v10 + *v7);
        v26 = 0x10 * *v10;
        v27 = v10[2];
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a2, 0x10);
        v12 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
        a2[1] = (char *)a2[1] + 1;
        *v12 = *v11;
        v13 = 0x10 * v9;
        v14 = (_OWORD *)(v13 + *(_DWORD *)*(this + 0x14));
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a2, 0x10);
        v15 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
        a2[1] = (char *)a2[1] + 1;
        *v15 = *v14;
        v16 = (_OWORD *)(v26 + *(_DWORD *)*(this + 0x14));
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a2, 0x10);
        v17 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
        a2[1] = (char *)a2[1] + 1;
        *v17 = *v16;
        v18 = (_OWORD *)(0x10 * v27 + *(_DWORD *)*(this + 0x14));
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a2, 0x10);
        v19 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
        a2[1] = (char *)a2[1] + 1;
        *v19 = *v18;
        v20 = (_OWORD *)(v13 + *(_DWORD *)*(this + 0x14));
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a2, 0x10);
        v21 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
        a2[1] = (char *)a2[1] + 1;
        *v21 = *v20;
        v22 = (_OWORD *)(0x10 * v27 + *(_DWORD *)*(this + 0x14));
        if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a2, 0x10);
        v23 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
        a2[1] = (char *)a2[1] + 1;
        *v23 = *v22;
        result = v25 - 1;
        v24 = v25 == 1;
        v28 -= 0xC;
        --v25;
        if ( v24 )
          break;
        v5 = v28;
      }
    }
  }
  return result;
}
