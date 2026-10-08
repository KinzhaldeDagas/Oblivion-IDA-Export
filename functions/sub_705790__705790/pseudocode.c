int __thiscall sub_705790(NiTexturingProperty_Map *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, NiTexturingProperty_Map *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x705792*/
  sub_7052F0(this, a2); /*0x705799*/
  v4 = *(int (__cdecl **)(int, NiTexturingProperty_Map *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x7057a4*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x7057b4*/
  a2 = 4; /*0x7057b5*/
  return v4(v6, this + 1, 4, &a2, 1); /*0x7057c2*/
}
