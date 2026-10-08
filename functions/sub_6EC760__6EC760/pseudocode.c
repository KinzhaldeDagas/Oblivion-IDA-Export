// Saves one NiTextKey: writes float time at +0x00 followed by text at +0x04.
int __thiscall NiTextKey_SaveBinary(const char **this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v3)(int, const char **, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x6ec762*/
  v3 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(*(_DWORD *)(a2 + 0x220) + 8); /*0x6ec76c*/
  v6 = *(_DWORD *)(a2 + 0x220); /*0x6ec77b*/
  a2 = 4; /*0x6ec77c*/
  v3(v6, this, 4, &a2, 1); /*0x6ec784*/
  return sub_713720(v2, *(this + 1)); /*0x6ec794*/
}
