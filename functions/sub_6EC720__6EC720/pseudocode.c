// Loads one NiTextKey: reads float time at +0x00 and allocates/loads the string at +0x04.
int __thiscall NiTextKey_LoadBinary(int *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v3)(int, int *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x6ec722*/
  v3 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x6ec72c*/
  v6 = *(_DWORD *)(a2 + 0x21C); /*0x6ec73b*/
  a2 = 4; /*0x6ec73c*/
  v3(v6, this, 4, &a2, 1); /*0x6ec744*/
  return sub_713620(v2, (int)(this + 1)); /*0x6ec754*/
}
