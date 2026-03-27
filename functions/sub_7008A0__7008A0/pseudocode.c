unsigned int __thiscall sub_7008A0(NiRenderer *this, signed int a2)
{
  _DWORD *v2; // edi
  unsigned int result; // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  NiRendererVtbl *vftable; // ebx
  int v7; // eax
  int v8; // [esp-18h] [ebp-24h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  result = *(_DWORD *)(a2 + 0xD8);
  if ( result >= 0x5000006 && result < 0xA010072 )
  {
    v8 = *(_DWORD *)(a2 + 0x21C);
    v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v8 + 4);
    a2 = 4;
    v5(v8, &v9, 4, &a2, 1);
    vftable = this->__vftable;
    v7 = sub_712550(v2, v9);
    return (*(int (__thiscall **)(NiRenderer *, int))&vftable->gap0[0x48])(this, v7);
  }
  return result;
}
