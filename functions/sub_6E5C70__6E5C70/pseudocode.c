int __thiscall sub_6E5C70(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e5c72*/
  sub_6E4E60(this, a2); /*0x6e5c79*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e5c84*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e5c94*/
  a2 = 4; /*0x6e5c95*/
  return v4(v6, this + 0x48, 0x18, &a2, 1); /*0x6e5ca2*/
}
