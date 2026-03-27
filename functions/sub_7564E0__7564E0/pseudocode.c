int __thiscall sub_7564E0(_BYTE *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _BYTE *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _BYTE *, int, signed int *, int); // eax
  int v7; // [esp-28h] [ebp-30h]
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_75F050(this, a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0xB));
  v8 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v8 + 8);
  a2 = 4;
  v4(v8, this + 0x30, 4, &a2, 1);
  v7 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v7 + 8);
  a2 = 4;
  v5(v7, this + 0x34, 4, &a2, 1);
  sub_7094A0(this + 0x38, (signed int)v2);
  return sub_7094A0(this + 0x44, (signed int)v2);
}
