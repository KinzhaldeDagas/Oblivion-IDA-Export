char __cdecl sub_431370(char *a1, int a2)
{
  int (__thiscall *v3)(_DWORD *); // eax
  char v4; // bl
  size_t v5; // [esp-4h] [ebp-40h]
  _DWORD v6[10]; // [esp+8h] [ebp-34h] BYREF
  unsigned int v7; // [esp+38h] [ebp-4h]

  if ( a2 )
  {
    LODWORD(v5) = 0;
    NiFile::NiFile((NiFile *)v6, a1, a2, v5);
    v3 = *(int (__thiscall **)(_DWORD *))(v6[0] + 4);
    v7 = 0;
    v4 = v3(v6);
    v7 = 0xFFFFFFFF;
    NiFile::~NiFile((NiFile *)v6);
    return v4;
  }
  else
  {
    return OBSE_g_FileFinder && OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, a1, 0, 0, 0xFFFFFFFF) != 0;
  }
}
