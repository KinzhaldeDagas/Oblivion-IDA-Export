int __thiscall sub_71A6D0(int *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_708EB0(this, (_DWORD *)a2);
  v6 = v2[0x87];
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v6 + 4);
  a2 = 4;
  v4(v6, this + 0x37, 4, &a2, 1);
  sub_709430((char *)this + 0xE0, (signed int)v2);
  sub_709430((char *)this + 0xEC, (signed int)v2);
  return sub_709430((char *)this + 0xF8, (signed int)v2);
}
