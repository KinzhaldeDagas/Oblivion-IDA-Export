char __thiscall sub_711FC0(char *this, char *Src)
{
  char *v3; // esi
  void *v4; // ecx
  int NiFile_Indirect; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  char v7; // bl
  __int64 v9; // [esp-4h] [ebp-Ch]

  v3 = this + 0xE0;
  strcpy_s(this + 0xE0, 0x104u, Src);
  TESTexture::ClearComponentReferences(v4);
  sub_747930(*((_BYTE **)this + 0x7A), v3);
  LODWORD(v9) = 0x8000;
  NiFile_Indirect = NiFile_GetNiFile_Indirect((int)v3, 0, v9);
  v6 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect;
  if ( NiFile_Indirect )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) )
    {
      v7 = (*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 4))(this, v6);
      (**v6)(v6, 1);
      return v7;
    }
    (**v6)(v6, 1);
  }
  *((_DWORD *)this + 0xE0) = 1;
  strcpy_s(this + 0x384, 0x104u, "Cannot open file.");
  return 0;
}
