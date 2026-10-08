int __thiscall sub_6E7A80(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, NiAccumulator **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e7a82*/
  sub_7008A0(this, a2); /*0x6e7a89*/
  v4 = *(int (__cdecl **)(int, NiAccumulator **, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e7a94*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e7aa4*/
  a2 = 4; /*0x6e7aa5*/
  return v4(v6, &this->members.accumulator, 4, &a2, 1); /*0x6e7ab2*/
}
