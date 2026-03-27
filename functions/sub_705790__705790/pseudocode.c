int __thiscall sub_705790(NiTexturingProperty_Map *this, int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, NiTexturingProperty_Map *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_7052F0(this, a2);
  v4 = *(int (__cdecl **)(int, NiTexturingProperty_Map *, int, int *, int))(v2[0x87] + 4);
  v6 = v2[0x87];
  a2 = 4;
  return v4(v6, this + 1, 4, &a2, 1);
}
