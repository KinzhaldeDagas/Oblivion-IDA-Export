_DWORD *__thiscall sub_913550(_DWORD *this)
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

  v2 = *(this + 1); /*0x913554*/
  v3 = *(_DWORD *)(v2 + 0x24); /*0x913557*/
  v4 = *(_DWORD *)(v2 + 0x20); /*0x91355a*/
  v5 = v2 + 0x1C; /*0x91355d*/
  if ( v4 == (v3 & 0x3FFFFFFF) ) /*0x913567*/
    sub_8A6EE0((const void **)v5, 4); /*0x91356c*/
  *(_DWORD *)(*(_DWORD *)v5 + 4 * (*(_DWORD *)(v5 + 4))++) = 0xD; /*0x913579*/
  v6 = (_DWORD *)*(this + 1); /*0x913583*/
  v7 = v6[1]; /*0x913589*/
  v6[2] += 4; /*0x91358f*/
  v8 = v6[3]; /*0x913592*/
  v6[1] = v7 + 0x20; /*0x91359c*/
  v6[3] = v8 + 1; /*0x9135a0*/
  v9 = (_DWORD *)*(this + 1); /*0x9135a3*/
  v10 = v9[1]; /*0x9135a9*/
  v9[2] += 4; /*0x9135af*/
  v11 = v9[3]; /*0x9135b2*/
  v9[1] = v10 + 0x20; /*0x9135b7*/
  v9[3] = v11 + 1; /*0x9135bb*/
  result = (_DWORD *)*(this + 1); /*0x9135be*/
  v13 = result[1] + 0x20; /*0x9135c7*/
  v14 = result[3] + 1; /*0x9135cf*/
  result[2] += 4; /*0x9135d1*/
  result[1] = v13; /*0x9135d4*/
  result[3] = v14; /*0x9135d7*/
  return result; /*0x9135d0*/
}
