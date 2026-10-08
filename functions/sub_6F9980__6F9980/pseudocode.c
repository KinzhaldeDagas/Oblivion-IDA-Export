char __thiscall sub_6F9980(char *this, char *Src, void (__thiscall ***a3)(_DWORD, int))
{
  void (__thiscall ***NiFile_Indirect)(_DWORD, int); // esi
  char result; // al
  void *v6; // ecx
  char v7; // bl
  __int64 v8; // [esp-4h] [ebp-10h]

  NiFile_Indirect = a3; /*0x6f9987*/
  if ( !a3 ) /*0x6f998f*/
  {
    LODWORD(v8) = 0x2800; /*0x6f9991*/
    NiFile_Indirect = (void (__thiscall ***)(_DWORD, int))NiFile_GetNiFile_Indirect((int)Src, 0, v8); /*0x6f99a1*/
  }
  result = 0; /*0x6f99a3*/
  if ( NiFile_Indirect ) /*0x6f99a7*/
  {
    strcpy_s(this + 0xE0, 0x104u, Src); /*0x6f99b7*/
    Shared_NoOpVirtual_60D0A0(v6); /*0x6f99bd*/
    sub_747930(*((_BYTE **)this + 0x7A), this + 0xE0); /*0x6f99cc*/
    v7 = sub_7120F0(this, (int)NiFile_Indirect); /*0x6f99d9*/
    (**NiFile_Indirect)(NiFile_Indirect, 1); /*0x6f99e3*/
    return v7; /*0x6f99e5*/
  }
  return result; /*0x6f99e8*/
}
