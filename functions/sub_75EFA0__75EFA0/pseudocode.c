int __thiscall sub_75EFA0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, NiAccumulator **, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, unsigned int **, int, int *, int); // eax
  void (__cdecl *v6)(unsigned int, char *, int, int *, int); // edx
  unsigned int v8; // [esp-3Ch] [ebp-4Ch]
  unsigned int v9; // [esp-28h] [ebp-38h]
  unsigned int v10; // [esp-14h] [ebp-24h]
  char v11; // [esp+Bh] [ebp-5h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_7008A0(this, (signed int)a2);
  v10 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, NiAccumulator **, int, int *, int))(v10 + 4);
  v12 = 4;
  v4(v10, &this->members.accumulator, 4, &v12, 1);
  v9 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v9 + 4);
  v12 = 1;
  v5(v9, &a2, 1, &v12, 1);
  LOBYTE(this->members.propertyState) = (_BYTE)a2 != 0;
  v6 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v2[0x87] + 4);
  v8 = v2[0x87];
  v12 = 1;
  v6(v8, &v11, 1, &v12, 1);
  BYTE1(this->members.propertyState) = v11 != 0;
  sub_712A20(v2);
  sub_712A20(v2);
  return sub_712A20(v2);
}
