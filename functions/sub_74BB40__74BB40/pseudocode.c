int __thiscall sub_74BB40(int *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // edx
  unsigned int v7; // [esp-28h] [ebp-34h]
  unsigned int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (unsigned int *)a2;
  sub_74F240(this, a2);
  sub_712AE0(v2);
  v8 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v8 + 4);
  a2 = 4;
  v4(v8, &v9, 4, &a2, 1);
  *(this + 0x1C) = v9;
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v2[0x87] + 4);
  v7 = v2[0x87];
  a2 = 4;
  v5(v7, &v9, 4, &a2, 1);
  *(this + 0x1D) = v9;
  return sub_709430((char *)this + 0x78, (signed int)v2);
}
