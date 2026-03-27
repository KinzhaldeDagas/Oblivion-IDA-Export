int __thiscall sub_7554D0(int *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, int *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_75E920(this, a2);
  v4 = *(int (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v6 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  return v4(v6, this + 0xC, 4, &a2, 1);
}
