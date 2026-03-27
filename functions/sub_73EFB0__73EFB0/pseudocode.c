_DWORD *__thiscall sub_73EFB0(int this, unsigned __int16 a2)
{
  _DWORD *result; // eax
  int v3; // ebp
  int v4; // esi
  int v5; // edi
  unsigned int v6; // ebx
  _DWORD *v7; // edx
  int v8; // ebp
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  int v11; // edx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  _DWORD *v18; // edx
  int v19; // eax
  _DWORD *v20; // ebx
  int v21; // [esp+4h] [ebp+4h]

  result = (_DWORD *)(unsigned __int16)(*(_WORD *)(this + 0x48) - 1);
  if ( a2 == (_WORD)result )
  {
    --*(_WORD *)(this + 0x48);
  }
  else
  {
    v3 = *(_DWORD *)(this + 0x1C);
    v4 = (unsigned __int16)result;
    v5 = a2;
    v6 = 0xC * (unsigned __int16)result;
    v21 = 0xC * a2;
    v7 = (_DWORD *)(v3 + v21);
    *v7 = *(_DWORD *)(v6 + v3);
    v7[1] = *(_DWORD *)(v6 + v3 + 4);
    v7[2] = *(_DWORD *)(v6 + v3 + 8);
    v8 = *(_DWORD *)(this + 0x24);
    if ( v8 )
    {
      v9 = (_DWORD *)(v8 + 0x10 * (unsigned __int16)result);
      v10 = (_DWORD *)(v8 + 0x10 * v5);
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
    }
    v11 = *(_DWORD *)(this + 0x20);
    if ( v11 )
    {
      v12 = (_DWORD *)(v11 + v6);
      v13 = (_DWORD *)(v21 + v11);
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
    }
    v14 = *(_DWORD *)(this + 0x44);
    if ( v14 )
      *(float *)(v14 + 4 * v5) = *(float *)(v14 + 4 * v4);
    v15 = *(_DWORD *)(this + 0x4C);
    if ( v15 )
      *(float *)(v15 + 4 * v5) = *(float *)(v15 + 4 * v4);
    v16 = *(_DWORD *)(this + 0x50);
    if ( v16 )
    {
      v17 = (_DWORD *)(v16 + 0x10 * v4);
      v18 = (_DWORD *)(v16 + 0x10 * v5);
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
    }
    v19 = *(_DWORD *)(this + 0x54);
    if ( v19 )
      *(float *)(v19 + 4 * v5) = *(float *)(v19 + 4 * v4);
    result = *(_DWORD **)(this + 0x58);
    if ( result )
    {
      v20 = &result[v6 / 4];
      result = (_DWORD *)((char *)result + v21);
      *result = *v20;
      result[1] = v20[1];
      result[2] = v20[2];
    }
    --*(_WORD *)(this + 0x48);
  }
  return result;
}
