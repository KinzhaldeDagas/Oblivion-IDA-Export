_DWORD *__thiscall sub_9132E0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // esi
  int v11; // edx
  _DWORD *result; // eax
  int v13; // edx
  int v14; // ecx

  v2 = *(this + 1);
  v3 = *(_DWORD *)(v2 + 0x24);
  v4 = *(_DWORD *)(v2 + 0x20);
  v5 = v2 + 0x1C;
  if ( v4 == (v3 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v5, 4);
  *(_DWORD *)(*(_DWORD *)v5 + 4 * (*(_DWORD *)(v5 + 4))++) = 7;
  v6 = (_DWORD *)*(this + 1);
  v7 = v6[1];
  v6[2] += 4;
  v8 = v6[3];
  v6[1] = v7 + 0x30;
  v6[3] = v8 + 1;
  v9 = (_DWORD *)*(this + 1);
  v10 = v9[1];
  v9[2] += 4;
  v11 = v9[3];
  v9[1] = v10 + 0x30;
  v9[3] = v11 + 1;
  result = (_DWORD *)*(this + 1);
  v13 = result[1] + 0x30;
  v14 = result[3] + 1;
  result[2] += 4;
  result[1] = v13;
  result[3] = v14;
  return result;
}
