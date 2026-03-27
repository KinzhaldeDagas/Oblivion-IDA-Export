int __thiscall sub_8C4DD0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v3)(int, _DWORD *, int, signed int *, int); // edx
  _DWORD *v5; // ebx
  void (__cdecl *v6)(int, int, int, signed int *, int); // edx
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // edx
  void (__cdecl *v8)(int, int, int, signed int *, int); // edx
  void (__cdecl *v9)(int, _DWORD *, int, signed int *, int); // edx
  int v10; // edx
  int v11; // edi
  int v13; // [esp-50h] [ebp-5Ch]
  int v14; // [esp-4Ch] [ebp-58h]
  int v15; // [esp-48h] [ebp-54h]
  int v16; // [esp-3Ch] [ebp-48h]
  int v17; // [esp-28h] [ebp-34h]
  int v18; // [esp-24h] [ebp-30h]
  int v19; // [esp-20h] [ebp-2Ch]
  int v20; // [esp-20h] [ebp-2Ch]
  int v21; // [esp-14h] [ebp-20h]
  int v22; // [esp-14h] [ebp-20h]

  v2 = a2;
  v3 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8);
  v5 = this + 2;
  v21 = *(_DWORD *)(a2 + 0x220);
  a2 = 4;
  v3(v21, this + 2, 4, &a2, 1);
  v19 = 0x14 * *v5;
  v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v18 = *(this + 5);
  v17 = *(_DWORD *)(v2 + 0x220);
  a2 = 0x14;
  v6(v17, v18, v19, &a2, 1);
  v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v16 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  v7(v16, this + 3, 4, &a2, 1);
  v15 = 0xC * *(this + 3);
  v8 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v14 = *(this + 6);
  v13 = *(_DWORD *)(v2 + 0x220);
  a2 = 0xC;
  v8(v13, v14, v15, &a2, 1);
  v9 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v22 = *(_DWORD *)(v2 + 0x220);
  a2 = 2;
  v9(v22, this + 4, 2, &a2, 1);
  v10 = *(this + 7);
  v11 = *(_DWORD *)(v2 + 0x220);
  v20 = 0xC * *((unsigned __int16 *)this + 8);
  a2 = 0xC;
  return (*(int (__cdecl **)(int, int, int, signed int *, int))(v11 + 8))(v11, v10, v20, &a2, 1);
}
