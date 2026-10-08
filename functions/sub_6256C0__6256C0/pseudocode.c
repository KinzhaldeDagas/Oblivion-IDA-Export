int __userpurge sub_6256C0@<eax>(_BYTE *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, signed int a5, int a6)
{
  int v6; // eax

  v6 = a4; /*0x6256c0*/
  if ( (unsigned int)(a4 - 0xC) <= 6 || a4 == 0x1C ) /*0x6256cf*/
  {
    v6 = 0xC; /*0x6256fd*/
  }
  else
  {
    if ( (unsigned int)(a4 - 0x13) <= 6 ) /*0x6256d7*/
      return Actor_ModCurAVi(a1, a2, a3, 0x13, a5, a6); /*0x6256e2*/
    if ( (unsigned int)(a4 - 0x1A) <= 6 ) /*0x6256ed*/
      return Actor_ModCurAVi(a1, a2, a3, 0x1A, a5, a6); /*0x6256f8*/
  }
  return Actor_ModCurAVi(a1, a2, a3, v6, a5, a6);
}
