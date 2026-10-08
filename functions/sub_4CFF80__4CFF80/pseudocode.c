BOOL __thiscall sub_4CFF80(TESForm *this, BSStringT *a2)
{
  Data *OverrideFile; // eax
  char *v3; // edi
  size_t v6; // [esp-Ch] [ebp-11Ch]
  size_t v7; // [esp-4h] [ebp-114h]
  char v8[4]; // [esp+4h] [ebp-10Ch] BYREF
  char Dest[260]; // [esp+8h] [ebp-108h] BYREF

  OverrideFile = TESForm_GetOverrideFile(this, 0); /*0x4cff9e*/
  if ( OverrideFile ) /*0x4cffa5*/
  {
    HIDWORD(v6) = "%s%s"; /*0x4cffb0*/
    LODWORD(v6) = 0x104; /*0x4cffb9*/
    _snprintf(Dest, v6, ".\\Data\\Textures\\Maps\\", OverrideFile->name); /*0x4cffbf*/
    v8[strlen(Dest)] = 0; /*0x4cffe0*/
    v3 = &v8[3]; /*0x4cffe4*/
    while ( *++v3 ) /*0x4cffef*/
      ; /*0x4cffe7*/
    *(_WORD *)v3 = *(_WORD *)SubStr; /*0x4cfff8*/
  }
  else
  {
    HIDWORD(v7) = ".\\Data\\Textures\\Maps\\"; /*0x4cfffe*/
    LODWORD(v7) = 0x104; /*0x4d0007*/
    _snprintf(Dest, v7, *(const char **)v8); /*0x4d000d*/
  }
  return BSStringT_Set(a2, Dest, 0); /*0x4d0023*/
}
