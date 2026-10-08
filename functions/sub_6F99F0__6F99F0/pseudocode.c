char __thiscall sub_6F99F0(_DWORD *this, int a2)
{
  void (__thiscall ***NiFile_Indirect)(_DWORD, int); // esi
  char result; // al
  char v5; // bl
  __int64 v6; // [esp-4h] [ebp-Ch]

  LODWORD(v6) = 0x2800; /*0x6f99f6*/
  NiFile_Indirect = (void (__thiscall ***)(_DWORD, int))NiFile_GetNiFile_Indirect(a2, 1, v6); /*0x6f9a05*/
  result = 0; /*0x6f9a0a*/
  if ( NiFile_Indirect ) /*0x6f9a0e*/
  {
    v5 = sub_712260(this, (int)NiFile_Indirect); /*0x6f9a1b*/
    (**NiFile_Indirect)(NiFile_Indirect, 1); /*0x6f9a23*/
    return v5; /*0x6f9a25*/
  }
  return result; /*0x6f9a28*/
}
