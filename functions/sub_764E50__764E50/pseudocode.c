NiPixelData *__thiscall sub_764E50(int this, unsigned int *a2)
{
  _DWORD *v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // esi
  NiPixelData *v14; // ebp
  int v15; // eax
  NiPixelData *v16; // eax
  NiPixelData *v17; // ebx
  unsigned int v18; // edi
  char *v19; // esi
  char *v20; // ebp
  unsigned int v21; // [esp+28h] [ebp-40h]
  int v22; // [esp+2Ch] [ebp-3Ch]
  _DWORD v23[2]; // [esp+30h] [ebp-38h] BYREF
  _DWORD v24[4]; // [esp+38h] [ebp-30h] BYREF
  char v25[32]; // [esp+48h] [ebp-20h] BYREF
  unsigned int v26; // [esp+6Ch] [ebp+4h]

  if ( *(_BYTE *)(this + 0x6F0) ) /*0x764e56*/
    return 0; /*0x764e65*/
  v5 = 0; /*0x764e76*/
  v6 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x4C))(*(_DWORD *)(this + 0x880), 0); /*0x764e81*/
  v7 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x50))(*(_DWORD *)(this + 0x880), 0); /*0x764e8f*/
  v21 = v7; /*0x764e97*/
  if ( a2 ) /*0x764e9b*/
  {
    v8 = *a2; /*0x764e9d*/
    if ( *a2 >= v6 ) /*0x764ea1*/
      return 0; /*0x764ea1*/
    v9 = a2[2]; /*0x764ea7*/
    if ( v9 >= v7 ) /*0x764eac*/
      return 0; /*0x764eac*/
    v10 = a2[1] - v8 + 1; /*0x764eb7*/
    if ( a2[1] + 1 > v6 ) /*0x764ebf*/
      v10 = v6 - v8; /*0x764ec3*/
    v11 = a2[3] - v9 + 1; /*0x764ece*/
    if ( a2[3] + 1 > v21 ) /*0x764ed6*/
      v11 = v21 - v9; /*0x764eda*/
    v24[0] = *a2; /*0x764ee4*/
    v24[2] = v8 + v10; /*0x764ee8*/
    v24[1] = v9; /*0x764eec*/
    v24[3] = v9 + v11; /*0x764ef0*/
    v5 = v24; /*0x764ef4*/
  }
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x80))(*(_DWORD *)(this + 0x880), 0); /*0x764f08*/
  v13 = *(_DWORD *)(sub_497DD0((int)&stru_B42654, v12) + 0xC); /*0x764f15*/
  v22 = v13; /*0x764f26*/
  (*(void (__stdcall **)(int, char *))(*(_DWORD *)v13 + 0x30))(v13, v25); /*0x764f2a*/
  if ( (*(int (__stdcall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)v13 + 0x34))(v13, v23, v5, 0x10) < 0 ) /*0x764f3e*/
    return 0; /*0x764f88*/
  v14 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x764f47*/
  if ( !v14 /*0x764f75*/
    || (v15 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x880) + 0x5C))(*(_DWORD *)(this + 0x880), 0),
        v16 = NiPixelData::NiPixelData(v14, v6, v21, v15, 1u, 1),
        (v17 = v16) == 0) )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 0x38))(v13); /*0x764f7d*/
    return 0; /*0x764f7d*/
  }
  v18 = *((_DWORD *)v16 + 0x19) * **((_DWORD **)v16 + 0x15); /*0x764f95*/
  v19 = (char *)(*((_DWORD *)v16 + 0x14) + **((_DWORD **)v16 + 0x17)); /*0x764f9d*/
  v20 = (char *)v23[1]; /*0x764fa2*/
  if ( v21 ) /*0x764fa6*/
  {
    v26 = v21; /*0x764fa8*/
    do /*0x764fc6*/
    {
      memcpy(v19, v20, v18); /*0x764fb3*/
      v20 += v23[0]; /*0x764fb8*/
      v19 += v18; /*0x764fbf*/
      --v26; /*0x764fc1*/
    }
    while ( v26 ); /*0x764fc6*/
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 0x38))(v22); /*0x764fd2*/
  return v17; /*0x764e61*/
}
