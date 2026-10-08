bool __cdecl sub_431370(char *a1, int a2)
{
  int (__thiscall *v3)(_DWORD *); // eax
  char v4; // bl
  size_t v5; // [esp-4h] [ebp-40h]
  _DWORD v6[10]; // [esp+8h] [ebp-34h] BYREF
  unsigned int v7; // [esp+38h] [ebp-4h]

  if ( a2 ) /*0x43139a*/
  {
    LODWORD(v5) = 0; /*0x4313ea*/
    NiFile::NiFile((NiFile *)v6, a1, a2, v5); /*0x4313f2*/
    v3 = *(int (__thiscall **)(_DWORD *))(v6[0] + 4); /*0x4313fb*/
    v7 = 0; /*0x431402*/
    v4 = v3(v6); /*0x431410*/
    v7 = 0xFFFFFFFF; /*0x431412*/
    NiFile::~NiFile((NiFile *)v6); /*0x43141a*/
    return v4; /*0x43141f*/
  }
  else
  {
    return MEMORY[0xB33A04] && MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], a1, 0, 0, 0xFFFFFFFF) != 0; /*0x4313ba*/
  }
}
