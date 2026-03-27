int __thiscall sub_73DA30(char *this, unsigned int a2)
{
  unsigned int v2; // edi
  int (__cdecl *v4)(int, char *, int, unsigned int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_70B6A0(this, a2);
  v4 = *(int (__cdecl **)(int, char *, int, unsigned int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v6 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  return v4(v6, this + 0xDC, 4, &a2, 1);
}
