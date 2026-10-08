int __thiscall sub_6E0630(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v5)(int, UInt32 *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e0631*/
  NiTimeController_LoadBinary(this, a2); /*0x6e0639*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x6e0648*/
  {
    v5 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e066f*/
    v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e067f*/
    a2 = 2; /*0x6e0680*/
    v5(v6, &this->members.pad014[0xA], 2, &a2, 1); /*0x6e0688*/
  }
  else
  {
    LOWORD(this->members.pad014[0xA]) = (unsigned __int8)(*(_WORD *)(v2 + 0x25A) >> 5); /*0x6e065b*/
  }
  return sub_712A20((unsigned int *)v2); /*0x6e0664*/
}
