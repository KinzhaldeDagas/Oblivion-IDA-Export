int __thiscall sub_756460(int *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // eax
  unsigned int v7; // [esp-28h] [ebp-30h]
  unsigned int v8; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2;
  sub_75EFA0(this, a2);
  sub_712A20(v2);
  v8 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v8 + 4);
  a2 = 4;
  v4(v8, this + 0xC, 4, &a2, 1);
  v7 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v7 + 4);
  a2 = 4;
  v5(v7, this + 0xD, 4, &a2, 1);
  sub_709430((char *)this + 0x38, (signed int)v2);
  return sub_709430((char *)this + 0x44, (signed int)v2);
}
