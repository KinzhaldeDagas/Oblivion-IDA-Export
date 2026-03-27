int __thiscall sub_75F050(_BYTE *this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _BYTE *, int, signed int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, signed int *, int, int *, int); // edx
  void (__cdecl *v7)(int, signed int *, int, int *, int); // eax
  int v9; // [esp-3Ch] [ebp-48h]
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  nullsub_returnvVoid_1arg(a2);
  v10 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v4(v10, this + 8, 4, &a2, 1);
  v5 = v2[0x88];
  LOBYTE(a2) = *(this + 0xC);
  v6 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v5 + 8);
  v11 = 1;
  v6(v5, &a2, 1, &v11, 1);
  LOBYTE(a2) = *(this + 0xD);
  v9 = v2[0x88];
  v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v9 + 8);
  v11 = 1;
  v7(v9, &a2, 1, &v11, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 4));
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 9));
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0xA));
}
