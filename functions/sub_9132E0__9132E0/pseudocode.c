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

  v2 = *(this + 1); /*0x9132e4*/
  v3 = *(_DWORD *)(v2 + 0x24); /*0x9132e7*/
  v4 = *(_DWORD *)(v2 + 0x20); /*0x9132ea*/
  v5 = v2 + 0x1C; /*0x9132ed*/
  if ( v4 == (v3 & 0x3FFFFFFF) ) /*0x9132f7*/
    sub_8A6EE0((const void **)v5, 4); /*0x9132fc*/
  *(_DWORD *)(*(_DWORD *)v5 + 4 * (*(_DWORD *)(v5 + 4))++) = 7; /*0x913309*/
  v6 = (_DWORD *)*(this + 1); /*0x913313*/
  v7 = v6[1]; /*0x913319*/
  v6[2] += 4; /*0x91331f*/
  v8 = v6[3]; /*0x913322*/
  v6[1] = v7 + 0x30; /*0x91332c*/
  v6[3] = v8 + 1; /*0x913330*/
  v9 = (_DWORD *)*(this + 1); /*0x913333*/
  v10 = v9[1]; /*0x913339*/
  v9[2] += 4; /*0x91333f*/
  v11 = v9[3]; /*0x913342*/
  v9[1] = v10 + 0x30; /*0x913347*/
  v9[3] = v11 + 1; /*0x91334b*/
  result = (_DWORD *)*(this + 1); /*0x91334e*/
  v13 = result[1] + 0x30; /*0x913357*/
  v14 = result[3] + 1; /*0x91335f*/
  result[2] += 4; /*0x913361*/
  result[1] = v13; /*0x913364*/
  result[3] = v14; /*0x913367*/
  return result; /*0x913360*/
}
