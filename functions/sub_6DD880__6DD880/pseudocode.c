int __thiscall sub_6DD880(int *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, int *, int, signed int *, int); // edx
  void (__cdecl *v7)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, int *, int, signed int *, int); // edx
  int v10; // [esp-50h] [ebp-5Ch]
  int v11; // [esp-3Ch] [ebp-48h]
  int v12; // [esp-28h] [ebp-34h]
  int v13; // [esp-14h] [ebp-20h]
  int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_715F40(this, a2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v13 = *(_DWORD *)(v2 + 0x21C);
    v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v13 + 4);
    a2 = 2;
    v4(v13, this + 0xF, 2, &a2, 1);
  }
  else
  {
    *((_WORD *)this + 0x1E) = *(_WORD *)(v2 + 0x25A) >> 5;
  }
  v14 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v14 + 4);
  a2 = 4;
  v5(v14, &v15, 4, &a2, 1);
  *(this + 0x1A) = v15;
  v6 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v12 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  v6(v12, this + 0x16, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x21C);
  v7 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v11 + 4);
  a2 = 4;
  v7(v11, this + 0x17, 4, &a2, 1);
  v8 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v10 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  v8(v10, this + 0x18, 2, &a2, 1);
  sub_712A20((unsigned int *)v2);
  return sub_712A20((unsigned int *)v2);
}
