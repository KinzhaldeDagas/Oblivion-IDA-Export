char __userpurge sub_6F6060@<al>(_DWORD *this@<ecx>, void *DstBuf, size_t ElementSize, size_t Count)
{
  int v6; // [esp-1Ch] [ebp-24h] BYREF
  void **v7; // [esp-18h] [ebp-20h]
  int v8; // [esp-14h] [ebp-1Ch]
  int v9; // [esp-10h] [ebp-18h]
  int v10; // [esp-Ch] [ebp-14h]
  _BYTE v11[12]; // [esp-8h] [ebp-10h]
  FILE *v12; // [esp+4h] [ebp-4h]

  if ( !*(this + 0xF) ) /*0x6f6069*/
    return 0; /*0x6f6069*/
  *(_DWORD *)&v11[4] = *(this + 0xF); /*0x6f6073*/
  if ( (unsigned int)fread(DstBuf, ElementSize, *(size_t *)&v11[4], v12) != HIDWORD(ElementSize) ) /*0x6f6085*/
  {
    *(_QWORD *)v11 = 0xF00000000LL; /*0x6f609e*/
    LOBYTE(v7) = 0; /*0x6f60a6*/
    OB_stString28_AssignSubstring_010201A0( /*0x6f60aa*/
      (OB_stString28_010201A0 *)&v6,
      (const OB_stString28_010201A0 *)(this + 1),
      0,
      0xFFFFFFFF);
    sub_6F6BF0(1, v6, v7, v8, v9, v10, *(size_t *)v11); /*0x6f60b1*/
    if ( *(this + 0xF) ) /*0x6f60b6*/
      fclose((FILE *)*(this + 0xF)); /*0x6f60c1*/
    OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)(this + 1), EmptyString, 0); /*0x6f60d2*/
    *(this + 0xF) = 0; /*0x6f60d7*/
    return 0; /*0x6f60e2*/
  }
  return 1; /*0x6f60e0*/
}
