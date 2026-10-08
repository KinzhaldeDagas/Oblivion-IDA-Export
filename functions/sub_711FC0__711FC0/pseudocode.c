char __thiscall sub_711FC0(char *this, char *Src)
{
  char *v3; // esi
  void *v4; // ecx
  int NiFile_Indirect; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  char v7; // bl
  __int64 v9; // [esp-4h] [ebp-Ch]

  v3 = this + 0xE0; /*0x711fc9*/
  strcpy_s(this + 0xE0, 0x104u, Src); /*0x711fd5*/
  Shared_NoOpVirtual_60D0A0(v4); /*0x711fdb*/
  sub_747930(*((_BYTE **)this + 0x7A), v3); /*0x711fea*/
  LODWORD(v9) = 0x8000; /*0x711fef*/
  NiFile_Indirect = NiFile_GetNiFile_Indirect((int)v3, 0, v9); /*0x711ff7*/
  v6 = (void (__thiscall ***)(_DWORD, int))NiFile_Indirect; /*0x711ffc*/
  if ( NiFile_Indirect ) /*0x712003*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)NiFile_Indirect + 4))(NiFile_Indirect) ) /*0x71200c*/
    {
      v7 = (*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 4))(this, v6); /*0x71201f*/
      (**v6)(v6, 1); /*0x712027*/
      return v7; /*0x71202e*/
    }
    (**v6)(v6, 1); /*0x712039*/
  }
  *((_DWORD *)this + 0xE0) = 1; /*0x712040*/
  strcpy_s(this + 0x384, 0x104u, "Cannot open file."); /*0x712056*/
  return 0; /*0x71202c*/
}
