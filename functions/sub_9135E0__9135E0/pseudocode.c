int __thiscall sub_9135E0(_DWORD *this, _OWORD *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  _OWORD *v10; // eax

  v3 = *(this + 1); /*0x9135e5*/
  v4 = *(_DWORD *)(v3 + 0x24); /*0x9135e8*/
  v5 = *(_DWORD *)(v3 + 0x20); /*0x9135eb*/
  v6 = v3 + 0x1C; /*0x9135ee*/
  if ( v5 == (v4 & 0x3FFFFFFF) ) /*0x9135f8*/
    sub_8A6EE0((const void **)v6, 4); /*0x9135fd*/
  *(_DWORD *)(*(_DWORD *)v6 + 4 * (*(_DWORD *)(v6 + 4))++) = 1; /*0x91360a*/
  v7 = *(this + 1); /*0x913614*/
  v8 = *(_DWORD *)(v7 + 0x14); /*0x913617*/
  v9 = v7 + 0x10; /*0x91361d*/
  if ( v8 == (*(_DWORD *)(v7 + 0x18) & 0x3FFFFFFF) ) /*0x91362a*/
    sub_8A6EE0((const void **)v9, 0x10); /*0x91362f*/
  v10 = (_OWORD *)(*(_DWORD *)v9 + 0x10 * (*(_DWORD *)(v9 + 4))++); /*0x913641*/
  *v10 = *a2; /*0x91364e*/
  *((_BYTE *)this + 0x18) = 1; /*0x913651*/
  return v8; /*0x913655*/
}
