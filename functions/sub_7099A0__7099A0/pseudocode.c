int __thiscall sub_7099A0(int *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, int *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_700AC0(this, (unsigned int *)a2);
  sub_709430((char *)this + 0x1C, (signed int)v2);
  sub_709430((char *)this + 0x28, (signed int)v2);
  sub_709430((char *)this + 0x34, (signed int)v2);
  sub_709430((char *)this + 0x40, (signed int)v2);
  v8 = v2[0x87];
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4);
  a2 = 4;
  v4(v8, this + 0x13, 4, &a2, 1);
  v5 = v2[0x87];
  v6 = *(int (__cdecl **)(int, int *, int, int *, int))(v5 + 4);
  a2 = 4;
  return v6(v5, this + 0x14, 4, &a2, 1);
}
