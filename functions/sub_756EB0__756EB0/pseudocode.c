int __thiscall sub_756EB0(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, UInt32 *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-44h]
  int v11; // [esp-28h] [ebp-30h]
  int v12; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_752DC0(this, (unsigned int *)a2);
  v12 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v12 + 4);
  a2 = 4;
  v4(v12, &this->members.pad014[1], 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v11 + 4);
  a2 = 2;
  v5(v11, &this->members.pad014[2], 2, &a2, 1);
  v10 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v10 + 4);
  a2 = 4;
  v6(v10, &this->members.pad014[3], 4, &a2, 1);
  v7 = *(_DWORD *)(v2 + 0x21C);
  v8 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(v7 + 4);
  a2 = 2;
  return v8(v7, &this->members.pad014[4], 2, &a2, 1);
}
