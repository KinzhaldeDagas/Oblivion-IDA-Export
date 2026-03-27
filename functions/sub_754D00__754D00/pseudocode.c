int __thiscall sub_754D00(_BYTE *this, signed int a2)
{
  _DWORD *v2; // edi
  int v4; // edi
  int (__cdecl *v5)(int, _BYTE *, int, signed int *, int); // ecx

  v2 = (_DWORD *)a2;
  sub_75F050(this, a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0xB));
  v4 = v2[0x88];
  v5 = *(int (__cdecl **)(int, _BYTE *, int, signed int *, int))(v4 + 8);
  a2 = 4;
  return v5(v4, this + 0x30, 4, &a2, 1);
}
