void __userpurge Creature_Actor_GetCurAVi(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax

  v5 = a4; /*0x6253c0*/
  if ( (unsigned int)(a4 - 0xC) <= 6 || a4 == 0x1C ) /*0x6253cf*/
  {
    v5 = 0xC; /*0x6253fd*/
  }
  else
  {
    if ( (unsigned int)(a4 - 0x13) <= 6 ) /*0x6253d7*/
    {
      Actor_GetCurAVi(a1, a2, a3, 0x13); /*0x6253e2*/
      return; /*0x6253e2*/
    }
    if ( (unsigned int)(a4 - 0x1A) <= 6 ) /*0x6253ed*/
    {
      Actor_GetCurAVi(a1, a2, a3, 0x1A); /*0x6253f8*/
      return; /*0x6253f8*/
    }
  }
  Actor_GetCurAVi(a1, a2, a3, v5); /*0x625406*/
}
