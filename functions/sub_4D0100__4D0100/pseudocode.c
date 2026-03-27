void __thiscall sub_4D0100(int this, BSStringT *a2, int a3, int a4)
{
  const char *v5; // eax
  size_t v6; // [esp-14h] [ebp-124h]
  char Dest[260]; // [esp+8h] [ebp-108h] BYREF

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
  {
    sub_4CFF80((TESForm *)this, a2);
    v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0xD4))(this);
    HIDWORD(v6) = "%s.%02i.%02i.dds";
    LODWORD(v6) = 0x104;
    _snprintf(Dest, v6, v5, a3, a4);
    BSStringT_Append(a2, Dest);
  }
}
