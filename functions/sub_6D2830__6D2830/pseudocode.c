int __thiscall sub_6D2830(NiRenderer *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, UInt32 *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6d2832*/
  sub_6CD720(this, a2); /*0x6d2839*/
  v4 = *(int (__cdecl **)(int, UInt32 *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6d2844*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6d2854*/
  a2 = 4; /*0x6d2855*/
  return v4(v6, &this->members.pad014[7], 4, &a2, 1); /*0x6d2862*/
}
