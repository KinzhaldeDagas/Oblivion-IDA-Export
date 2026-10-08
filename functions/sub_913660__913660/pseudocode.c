int __thiscall sub_913660(_DWORD *this, _OWORD *a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  _OWORD *v10; // eax

  v3 = *(this + 1); /*0x913665*/
  v4 = *(_DWORD *)(v3 + 0x24); /*0x913668*/
  v5 = *(_DWORD *)(v3 + 0x20); /*0x91366b*/
  v6 = v3 + 0x1C; /*0x91366e*/
  if ( v5 == (v4 & 0x3FFFFFFF) ) /*0x913678*/
    sub_8A6EE0((const void **)v6, 4); /*0x91367d*/
  *(_DWORD *)(*(_DWORD *)v6 + 4 * (*(_DWORD *)(v6 + 4))++) = 2; /*0x91368a*/
  v7 = *(this + 1); /*0x913694*/
  v8 = *(_DWORD *)(v7 + 0x14); /*0x913697*/
  v9 = v7 + 0x10; /*0x91369d*/
  if ( v8 == (*(_DWORD *)(v7 + 0x18) & 0x3FFFFFFF) ) /*0x9136aa*/
    sub_8A6EE0((const void **)v9, 0x10); /*0x9136af*/
  v10 = (_OWORD *)(*(_DWORD *)v9 + 0x10 * (*(_DWORD *)(v9 + 4))++); /*0x9136c1*/
  *v10 = *a2; /*0x9136ce*/
  *((_BYTE *)this + 0x19) = 1; /*0x9136d1*/
  return v8; /*0x9136d5*/
}
