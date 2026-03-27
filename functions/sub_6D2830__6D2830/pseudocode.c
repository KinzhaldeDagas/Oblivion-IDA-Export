int __thiscall sub_6D2830(NiRenderer *this, unsigned int a2)
{
  unsigned int v2; // edi
  int (__cdecl *v4)(int, UInt32 *, int, unsigned int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_6CD720(this, a2);
  v4 = *(int (__cdecl **)(int, UInt32 *, int, unsigned int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v6 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  return v4(v6, &this->members.pad014[7], 4, &a2, 1);
}
