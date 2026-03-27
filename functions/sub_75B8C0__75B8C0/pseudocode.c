int __thiscall sub_75B8C0(int *this, signed int a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v6)(unsigned int, int *, int, signed int *, int); // eax
  unsigned int v7; // edi
  int (__cdecl *v8)(unsigned int, int *, int, signed int *, int); // ecx
  int result; // eax
  unsigned int v10; // [esp-3Ch] [ebp-4Ch]
  unsigned int v11; // [esp-28h] [ebp-38h]
  unsigned int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)a2;
  sub_752DC0((NiRenderer *)this, (unsigned int *)a2);
  sub_712A20(v2);
  sub_709430((char *)this + 0x1C, (signed int)v2);
  v12 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v12 + 4);
  a2 = 4;
  v4(v12, this + 0xA, 4, &a2, 1);
  v11 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v11 + 4);
  a2 = 4;
  v5(v11, this + 0xB, 4, &a2, 1);
  v10 = v2[0x87];
  v6 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v10 + 4);
  a2 = 4;
  v6(v10, &v13, 4, &a2, 1);
  *(this + 0xC) = v13;
  v7 = v2[0x87];
  v8 = *(int (__cdecl **)(unsigned int, int *, int, signed int *, int))(v7 + 4);
  a2 = 4;
  result = v8(v7, &v13, 4, &a2, 1);
  *(this + 0xD) = v13;
  return result;
}
