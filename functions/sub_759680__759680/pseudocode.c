int __thiscall sub_759680(int *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_75E920(this, a2);
  v6 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v6 + 4);
  v7 = 1;
  v4(v6, &a2, 1, &v7, 1);
  *((_BYTE *)this + 0x30) = (_BYTE)a2 != 0;
  return sub_709430((char *)this + 0x34, v2);
}
