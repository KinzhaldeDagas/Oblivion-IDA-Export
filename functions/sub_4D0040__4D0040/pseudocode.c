void __thiscall sub_4D0040(int this, BSStringT *a2)
{
  int v3; // ecx
  const char *v4; // eax
  int v5; // ecx
  int v6; // edi
  int *v7; // esi
  int v8; // ecx
  size_t v9; // [esp-18h] [ebp-128h]
  char Dest[260]; // [esp+8h] [ebp-108h] BYREF

  if ( (*(_BYTE *)(this + 0x24) & 1) == 0 ) /*0x4d0063*/
  {
    sub_4CFF80((TESForm *)this, a2); /*0x4d0066*/
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v3 = *(_DWORD *)(this + 0x50)) == 0 ) /*0x4d0076*/
      v4 = "NONE"; /*0x4d0084*/
    else
      v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xD4))(v3); /*0x4d0080*/
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v5 = *(_DWORD *)(this + 0x3C)) == 0 ) /*0x4d0097*/
      v6 = 0; /*0x4d009e*/
    else
      v6 = *(_DWORD *)(v5 + 4); /*0x4d0099*/
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v7 = *(int **)(this + 0x3C)) == 0 ) /*0x4d00a9*/
      v8 = 0; /*0x4d00af*/
    else
      v8 = *v7; /*0x4d00ab*/
    HIDWORD(v9) = "%s.%02i.%02i.dds"; /*0x4d00b4*/
    LODWORD(v9) = 0x104; /*0x4d00bd*/
    _snprintf(Dest, v9, v4, v8, v6); /*0x4d00c3*/
    BSStringT_Append(a2, Dest); /*0x4d00d2*/
  }
}
