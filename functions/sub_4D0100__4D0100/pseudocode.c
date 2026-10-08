void __thiscall sub_4D0100(int this, BSStringT *a2, int a3, int a4)
{
  const char *v5; // eax
  size_t v6; // [esp-14h] [ebp-124h]
  char Dest[260]; // [esp+8h] [ebp-108h] BYREF

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4d0123*/
  {
    sub_4CFF80((TESForm *)this, a2); /*0x4d0126*/
    v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0xD4))(this); /*0x4d0135*/
    HIDWORD(v6) = "%s.%02i.%02i.dds"; /*0x4d0148*/
    LODWORD(v6) = 0x104; /*0x4d0151*/
    _snprintf(Dest, v6, v5, a3, a4); /*0x4d0157*/
    BSStringT_Append(a2, Dest); /*0x4d0166*/
  }
}
