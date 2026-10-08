unsigned int __thiscall sub_7008A0(NiRenderer *this, signed int a2)
{
  _DWORD *v2; // edi
  unsigned int result; // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  NiRendererVtbl *vftable; // ebx
  int v7; // eax
  int v8; // [esp-18h] [ebp-24h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x7008a3*/
  result = *(_DWORD *)(a2 + 0xD8); /*0x7008a7*/
  if ( result >= 0x5000006 && result < 0xA010072 ) /*0x7008bb*/
  {
    v8 = *(_DWORD *)(a2 + 0x21C); /*0x7008d2*/
    v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v8 + 4); /*0x7008d3*/
    a2 = 4; /*0x7008d6*/
    v5(v8, &v9, 4, &a2, 1); /*0x7008de*/
    vftable = this->__vftable; /*0x7008e4*/
    v7 = sub_712550(v2, v9); /*0x7008ec*/
    return (*(int (__thiscall **)(NiRenderer *, int))&vftable->gap0[0x48])(this, v7); /*0x7008f7*/
  }
  return result; /*0x7008fa*/
}
