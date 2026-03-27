int __thiscall sub_6DBF20(_DWORD *this, signed int a2)
{
  unsigned int *v2; // esi
  void (__cdecl *v4)(unsigned int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, signed int *, int); // eax
  void (__cdecl *v6)(unsigned int, _DWORD *, int, signed int *, int); // edx
  void (__cdecl *v7)(unsigned int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v8)(unsigned int, _DWORD *, int, signed int *, int); // edx
  unsigned int v10; // [esp-50h] [ebp-5Ch]
  unsigned int v11; // [esp-3Ch] [ebp-48h]
  unsigned int v12; // [esp-28h] [ebp-34h]
  unsigned int v13; // [esp-14h] [ebp-20h]
  unsigned int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp+8h] [ebp-4h] BYREF

  v2 = (unsigned int *)a2;
  sub_6EC2B0(a2);
  v13 = v2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, _DWORD *, int, signed int *, int))(v13 + 4);
  a2 = 2;
  v4(v13, this + 3, 2, &a2, 1);
  v12 = v2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, signed int *, int))(v12 + 4);
  a2 = 4;
  v5(v12, &v15, 4, &a2, 1);
  *(this + 0xE) = v15;
  v6 = *(void (__cdecl **)(unsigned int, _DWORD *, int, signed int *, int))(v2[0x87] + 4);
  v11 = v2[0x87];
  a2 = 4;
  v6(v11, this + 0xA, 4, &a2, 1);
  v10 = v2[0x87];
  v7 = *(void (__cdecl **)(unsigned int, _DWORD *, int, signed int *, int))(v10 + 4);
  a2 = 4;
  v7(v10, this + 0xB, 4, &a2, 1);
  v8 = *(void (__cdecl **)(unsigned int, _DWORD *, int, signed int *, int))(v2[0x87] + 4);
  v14 = v2[0x87];
  a2 = 2;
  v8(v14, this + 0xC, 2, &a2, 1);
  sub_712A20(v2);
  return sub_712A20(v2);
}
