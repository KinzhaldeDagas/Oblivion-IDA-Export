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

  v2 = (_DWORD *)a2; /*0x75f052*/
  nullsub_returnvVoid_1arg(a2); /*0x75f05a*/
  v10 = v2[0x88]; /*0x75f072*/
  v4 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v10 + 8); /*0x75f073*/
  a2 = 4; /*0x75f076*/
  v4(v10, this + 8, 4, &a2, 1); /*0x75f07e*/
  v5 = v2[0x88]; /*0x75f083*/
  LOBYTE(a2) = *(this + 0xC); /*0x75f090*/
  v6 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v5 + 8); /*0x75f094*/
  v11 = 1; /*0x75f09f*/
  v6(v5, &a2, 1, &v11, 1); /*0x75f0a7*/
  LOBYTE(a2) = *(this + 0xD); /*0x75f0b3*/
  v9 = v2[0x88]; /*0x75f0c4*/
  v7 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v9 + 8); /*0x75f0c5*/
  v11 = 1; /*0x75f0c8*/
  v7(v9, &a2, 1, &v11, 1); /*0x75f0d0*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 4)); /*0x75f0e0*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 9)); /*0x75f0ed*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0xA)); /*0x75f0fc*/
}
