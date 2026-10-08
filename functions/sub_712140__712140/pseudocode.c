char __thiscall sub_712140(char *this, char *Src)
{
  char *v3; // esi
  void *v4; // ecx
  int NiFile_Indirect; // esi
  char v6; // bl
  __int64 v8; // [esp-4h] [ebp-10h]

  v3 = this + 0xE0; /*0x71214a*/
  strcpy_s(this + 0xE0, 0x104u, Src); /*0x712156*/
  Shared_NoOpVirtual_60D0A0(v4); /*0x71215c*/
  sub_747930(*((_BYTE **)this + 0x7A), v3); /*0x71216b*/
  LODWORD(v8) = 0x8000; /*0x712170*/
  NiFile_Indirect = NiFile_GetNiFile_Indirect((int)Src, 1, v8); /*0x71217d*/
  if ( NiFile_Indirect ) /*0x712184*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) ) /*0x71218d*/
    {
      v6 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 0x10))(this, NiFile_Indirect); /*0x71219d*/
      (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1); /*0x7121a7*/
      return v6; /*0x7121ae*/
    }
    (**(void (__thiscall ***)(int, int))NiFile_Indirect)(NiFile_Indirect, 1); /*0x7121b9*/
  }
  return 0; /*0x7121a9*/
}
