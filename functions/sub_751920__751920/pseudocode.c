int __thiscall sub_751920(int *this, signed int a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // eax
  int (__cdecl *v6)(unsigned int, int *, int, signed int *, int); // eax
  int result; // eax
  void (__cdecl *v8)(unsigned int, int *, int, signed int *, int); // edx
  unsigned int v9; // esi
  int (__cdecl *v10)(unsigned int, int *, int, signed int *, int); // ecx
  unsigned int v11; // [esp-3Ch] [ebp-4Ch]
  unsigned int v12; // [esp-28h] [ebp-38h]
  unsigned int v13; // [esp-14h] [ebp-24h]
  unsigned int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)a2;
  sub_752DC0(this, a2);
  sub_712A20(v2);
  sub_709430((char *)this + 0x1C, (signed int)v2);
  v13 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v13 + 4);
  a2 = 4;
  v4(v13, this + 0xA, 4, &a2, 1);
  v12 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v12 + 4);
  a2 = 4;
  v5(v12, this + 0xB, 4, &a2, 1);
  v11 = v2[0x87];
  v6 = *(int (__cdecl **)(unsigned int, int *, int, signed int *, int))(v11 + 4);
  a2 = 4;
  result = v6(v11, &v15, 4, &a2, 1);
  *(this + 0xC) = v15;
  if ( v2[0x36] >= 0xA00010E )
  {
    v8 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v2[0x87] + 4);
    v14 = v2[0x87];
    a2 = 4;
    v8(v14, this + 0xD, 4, &a2, 1);
    v9 = v2[0x87];
    v10 = *(int (__cdecl **)(unsigned int, int *, int, signed int *, int))(v9 + 4);
    a2 = 4;
    return v10(v9, this + 0xE, 4, &a2, 1);
  }
  return result;
}
