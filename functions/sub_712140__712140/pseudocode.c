char __thiscall sub_712140(char *this, char *Src)
{
  char *v3; // esi
  void *v4; // ecx
  int NiFile_Indirect; // esi
  char v6; // bl
  __int64 v8; // [esp-4h] [ebp-10h]

  v3 = this + 0xE0;
  strcpy_s(this + 0xE0, 0x104u, Src);
  TESTexture::ClearComponentReferences(v4);
  sub_747930(*((_BYTE **)this + 0x7A), v3);
  LODWORD(v8) = 0x8000;
  NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Src, 1, v8);
  if ( NiFile_Indirect )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) )
    {
      v6 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 0x10))(this, NiFile_Indirect);
      (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1);
      return v6;
    }
    (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1);
  }
  return 0;
}
