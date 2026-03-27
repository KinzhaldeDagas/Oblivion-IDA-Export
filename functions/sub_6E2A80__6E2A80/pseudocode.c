int __thiscall sub_6E2A80(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, _DWORD *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_6ECCB0(this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(int, _DWORD *, int, int *, int))(v2[0x88] + 8);
  v6 = v2[0x88];
  a2 = 4;
  return v4(v6, this + 0x12, 4, &a2, 1);
}
