char __thiscall sub_6F9980(char *this, char *Src, void (__thiscall ***a3)(_DWORD, int))
{
  void (__thiscall ***NiFile_Indirect)(_DWORD, int); // esi
  char result; // al
  void *v6; // ecx
  char v7; // bl
  __int64 v8; // [esp-4h] [ebp-10h]

  NiFile_Indirect = a3;
  if ( !a3 )
  {
    LODWORD(v8) = 0x2800;
    NiFile_Indirect = (void (__thiscall ***)(_DWORD, int))NiFile_GetNiFile_Indirect((int)Src, 0, v8);
  }
  result = 0;
  if ( NiFile_Indirect )
  {
    strcpy_s(this + 0xE0, 0x104u, Src);
    TESTexture::ClearComponentReferences(v6);
    sub_747930(*((_BYTE **)this + 0x7A), this + 0xE0);
    v7 = sub_7120F0(this, (int)NiFile_Indirect);
    (**NiFile_Indirect)(NiFile_Indirect, 1);
    return v7;
  }
  return result;
}
