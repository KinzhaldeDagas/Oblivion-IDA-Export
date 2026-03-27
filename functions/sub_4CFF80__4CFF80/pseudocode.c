BOOL __thiscall sub_4CFF80(TESForm *this, BSStringT *a2)
{
  Data *OverrideFile; // eax
  char *v3; // edi
  size_t v6; // [esp-Ch] [ebp-11Ch]
  size_t v7; // [esp-4h] [ebp-114h]
  char v8[4]; // [esp+4h] [ebp-10Ch] BYREF
  char Dest[260]; // [esp+8h] [ebp-108h] BYREF

  OverrideFile = TESForm_GetOverrideFile(this, 0);
  if ( OverrideFile )
  {
    HIDWORD(v6) = "%s%s";
    LODWORD(v6) = 0x104;
    _snprintf(Dest, v6, ".\\Data\\Textures\\Maps\\", OverrideFile->name);
    v8[strlen(Dest)] = 0;
    v3 = &v8[3];
    while ( *++v3 )
      ;
    *(_WORD *)v3 = *(_WORD *)SubStr;
  }
  else
  {
    HIDWORD(v7) = ".\\Data\\Textures\\Maps\\";
    LODWORD(v7) = 0x104;
    _snprintf(Dest, v7, *(const char **)v8);
  }
  return BSStringT_Set(a2, Dest, 0);
}
