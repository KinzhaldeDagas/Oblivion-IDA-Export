int __thiscall sub_7057D0(NiTexturingProperty_Map *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, NiTexturingProperty_Map *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7057d2*/
  sub_7054D0(this, a2); /*0x7057d9*/
  v4 = *(int (__cdecl **)(int, NiTexturingProperty_Map *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7057e4*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x7057f4*/
  a2 = 4; /*0x7057f5*/
  return v4(v6, this + 1, 4, &a2, 1); /*0x705802*/
}
