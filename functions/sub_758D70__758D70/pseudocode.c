int __thiscall sub_758D70(int *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // eax
  unsigned int v6; // edi
  int (__cdecl *v7)(unsigned int, int *, int, signed int *, int); // edx
  unsigned int v9; // [esp-28h] [ebp-30h]
  unsigned int v10; // [esp-14h] [ebp-1Ch]

  v2 = (unsigned int *)a2;
  sub_752DC0((NiRenderer *)this, (unsigned int *)a2);
  sub_712A20(v2);
  sub_709430((char *)this + 0x1C, (signed int)v2);
  v10 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v10 + 4);
  a2 = 4;
  v4(v10, this + 0xA, 4, &a2, 1);
  v9 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v9 + 4);
  a2 = 4;
  v5(v9, this + 0xB, 4, &a2, 1);
  v6 = v2[0x87];
  v7 = *(int (__cdecl **)(unsigned int, int *, int, signed int *, int))(v6 + 4);
  a2 = 4;
  return v7(v6, this + 0xC, 4, &a2, 1);
}
