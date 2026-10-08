char __userpurge sub_6F5FD0@<al>(_DWORD *this@<ecx>, void *Str, size_t Size, size_t Count)
{
  int v6; // [esp-1Ch] [ebp-24h] BYREF
  void **v7; // [esp-18h] [ebp-20h]
  int v8; // [esp-14h] [ebp-1Ch]
  int v9; // [esp-10h] [ebp-18h]
  int v10; // [esp-Ch] [ebp-14h]
  _BYTE v11[12]; // [esp-8h] [ebp-10h]
  FILE *v12; // [esp+4h] [ebp-4h]

  if ( !*(this + 0xF) ) /*0x6f5fd9*/
    return 0; /*0x6f5fd9*/
  *(_DWORD *)&v11[4] = *(this + 0xF); /*0x6f5fe3*/
  if ( (unsigned int)fwrite(Str, Size, *(size_t *)&v11[4], v12) != HIDWORD(Size) ) /*0x6f5ff5*/
  {
    *(_QWORD *)v11 = 0xF00000000LL; /*0x6f600e*/
    LOBYTE(v7) = 0; /*0x6f6016*/
    OB_stString28_AssignSubstring_010201A0( /*0x6f601a*/
      (OB_stString28_010201A0 *)&v6,
      (const OB_stString28_010201A0 *)(this + 1),
      0,
      0xFFFFFFFF);
    sub_6F6BF0(6, v6, v7, v8, v9, v10, *(size_t *)v11); /*0x6f6021*/
    if ( *(this + 0xF) ) /*0x6f6026*/
      fclose((FILE *)*(this + 0xF)); /*0x6f6031*/
    OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)(this + 1), EmptyString, 0); /*0x6f6042*/
    *(this + 0xF) = 0; /*0x6f6047*/
    return 0; /*0x6f6052*/
  }
  return 1; /*0x6f6050*/
}
