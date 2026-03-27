_DWORD *__thiscall sub_92AB00(int *this, unsigned int a2, _WORD *a3)
{
  int *v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // edi
  int v10; // eax
  _OWORD *v11; // eax
  bool v12; // cc
  _DWORD *v14; // eax
  _OWORD *v15; // edi
  _OWORD *v16; // eax
  unsigned int v17; // [esp+Ch] [ebp-224h]
  _OWORD *v18; // [esp+10h] [ebp-220h]
  int v19; // [esp+18h] [ebp-218h]
  _BYTE v21[524]; // [esp+20h] [ebp-210h] BYREF

  v3 = this;
  if ( a3 )
    v4 = sub_950C30(a3, *(this + 6));
  else
    v4 = 0;
  v4[6] = v3[5];
  v5 = (_DWORD *)v3[4];
  if ( a2 >= v5[6] )
  {
    v4[8] = 1;
    v14 = (_DWORD *)(*(_DWORD *)(v3[4] + 0x20) + 4 * (a2 - *(_DWORD *)(v3[4] + 0x18)));
    v4[7] = v14;
    v15 = (_OWORD *)(((unsigned int)a3 + 0x33) & 0xFFFFFFF0);
    v4[4] = v15;
    v4[5] = 3;
    v16 = (_OWORD *)(*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v3[5] + 0x28))(v3[5], *v14, v21);
    *v15 = v16[1];
    v15[1] = v16[2];
    v15[2] = v16[3];
    return v4;
  }
  v6 = *(_DWORD *)(v5[5] + 4 * a2);
  v7 = v5[2];
  v8 = *(_DWORD *)(v7 + 4 * v6);
  v9 = (_DWORD *)(v7 + 4 * v6);
  v4[7] = v9 + 1;
  v18 = (_OWORD *)(((unsigned int)a3 + 0x33) & 0xFFFFFFF0);
  v4[4] = v18;
  v10 = 0;
  v4[8] = v8;
  v4[5] = 0;
  v19 = 0;
  if ( v8 <= 0 )
    return v4;
  v17 = 2;
  while ( 1 )
  {
    v11 = (_OWORD *)(*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v3[5] + 0x28))(
                      v3[5],
                      *(_DWORD *)(v4[7] + 4 * v10),
                      v21);
    if ( ((1 << ((v17 - 2) % 0x1F)) & v9[(v17 - 2) / 0x1F + 1 + *v9]) != 0 )
    {
      *v18++ = v11[1];
      ++v4[5];
    }
    if ( ((1 << ((v17 - 1) % 0x1F)) & v9[(v17 - 1) / 0x1F + 1 + *v9]) != 0 )
    {
      *v18++ = v11[2];
      ++v4[5];
    }
    if ( ((1 << (v17 % 0x1F)) & v9[v17 / 0x1F + 1 + *v9]) != 0 )
    {
      *v18++ = v11[3];
      ++v4[5];
    }
    v10 = v19 + 1;
    v12 = ++v19 < v4[8];
    v17 += 3;
    if ( !v12 )
      break;
    v3 = this;
  }
  return v4;
}
