int __thiscall sub_7247D0(int *this, int a2)
{
  _DWORD *v2; // ebx
  int *v4; // esi
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  int v6; // ebx
  int (__cdecl *v7)(int, int *, int, int *, int); // ecx
  int result; // eax
  int v9; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_709EE0(this, (_DWORD *)a2);
  v4 = this + 0x37;
  if ( v2[0x36] >= 0xA000102u )
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v2[0x87] + 4);
    v9 = v2[0x87];
    a2 = 2;
    v5(v9, this + 0x37, 2, &a2, 1);
  }
  else
  {
    *(_WORD *)v4 = *((unsigned __int8 *)v2 + 0x259);
  }
  v6 = v2[0x87];
  v7 = *(int (__cdecl **)(int, int *, int, int *, int))(v6 + 4);
  a2 = 4;
  result = v7(v6, this + 0x38, 4, &a2, 1);
  *(_WORD *)v4 |= 2u;
  return result;
}
