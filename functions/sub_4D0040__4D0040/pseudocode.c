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

  if ( (*(_BYTE *)(this + 0x24) & 1) == 0 )
  {
    sub_4CFF80((TESForm *)this, a2);
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v3 = *(_DWORD *)(this + 0x50)) == 0 )
      v4 = "NONE";
    else
      v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xD4))(v3);
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v5 = *(_DWORD *)(this + 0x3C)) == 0 )
      v6 = 0;
    else
      v6 = *(_DWORD *)(v5 + 4);
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (v7 = *(int **)(this + 0x3C)) == 0 )
      v8 = 0;
    else
      v8 = *v7;
    HIDWORD(v9) = "%s.%02i.%02i.dds";
    LODWORD(v9) = 0x104;
    _snprintf(Dest, v9, v4, v8, v6);
    BSStringT_Append(a2, Dest);
  }
}
