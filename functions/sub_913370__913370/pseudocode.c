int __thiscall sub_913370(_DWORD *this, _OWORD *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  _OWORD *v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  _OWORD *v15; // eax
  int v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // esi
  _OWORD *v20; // eax

  v3 = *(this + 1); /*0x913376*/
  v4 = *(_DWORD *)(v3 + 0x24); /*0x913379*/
  v5 = *(_DWORD *)(v3 + 0x20); /*0x91337c*/
  v6 = v3 + 0x1C; /*0x91337f*/
  if ( v5 == (v4 & 0x3FFFFFFF) ) /*0x913389*/
    sub_8A6EE0((const void **)v6, 4); /*0x91338e*/
  *(_DWORD *)(*(_DWORD *)v6 + 4 * (*(_DWORD *)(v6 + 4))++) = 8; /*0x91339b*/
  v7 = *(this + 1); /*0x9133a5*/
  v8 = *(_DWORD *)(v7 + 0x14); /*0x9133a8*/
  v9 = v7 + 0x10; /*0x9133ae*/
  if ( v8 == (*(_DWORD *)(v7 + 0x18) & 0x3FFFFFFF) ) /*0x9133bb*/
    sub_8A6EE0((const void **)v9, 0x10); /*0x9133c0*/
  v10 = (_OWORD *)(*(_DWORD *)v9 + 0x10 * (*(_DWORD *)(v9 + 4))++); /*0x9133d6*/
  *v10 = *a2; /*0x9133df*/
  v11 = *(this + 1); /*0x9133e2*/
  v12 = *(_DWORD *)(v11 + 0x18); /*0x9133e5*/
  v13 = *(_DWORD *)(v11 + 0x14); /*0x9133e8*/
  v14 = v11 + 0x10; /*0x9133eb*/
  if ( v13 == (v12 & 0x3FFFFFFF) ) /*0x9133f6*/
    sub_8A6EE0((const void **)v14, 0x10); /*0x9133fb*/
  v15 = (_OWORD *)(*(_DWORD *)v14 + 0x10 * (*(_DWORD *)(v14 + 4))++); /*0x91340d*/
  *v15 = a2[1]; /*0x913417*/
  v16 = *(this + 1); /*0x91341a*/
  v17 = *(_DWORD *)(v16 + 0x18); /*0x91341d*/
  v18 = *(_DWORD *)(v16 + 0x14); /*0x913420*/
  v19 = v16 + 0x10; /*0x913423*/
  if ( v18 == (v17 & 0x3FFFFFFF) ) /*0x91342e*/
    sub_8A6EE0((const void **)v19, 0x10); /*0x913433*/
  v20 = (_OWORD *)(*(_DWORD *)v19 + 0x10 * (*(_DWORD *)(v19 + 4))++); /*0x913445*/
  *v20 = a2[2]; /*0x91344f*/
  *((_BYTE *)this + 0x16) = 1; /*0x913452*/
  return v8; /*0x913456*/
}
