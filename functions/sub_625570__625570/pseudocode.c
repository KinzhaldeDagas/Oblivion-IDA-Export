void __userpurge sub_625570(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4, int a5, int a6)
{
  int v6; // eax

  v6 = a4; /*0x625570*/
  if ( (unsigned int)(a4 - 0xC) <= 6 || a4 == 0x1C ) /*0x62557f*/
  {
    v6 = 0xC; /*0x6255c7*/
  }
  else
  {
    if ( (unsigned int)(a4 - 0x13) <= 6 ) /*0x625587*/
    {
      Actor_ModMaxAVf(a1, a2, a3, 0x13, a5, a6); /*0x62559c*/
      return; /*0x6255a1*/
    }
    if ( (unsigned int)(a4 - 0x1A) <= 6 ) /*0x6255aa*/
    {
      Actor_ModMaxAVf(a1, a2, a3, 0x1A, a5, a6); /*0x6255bf*/
      return; /*0x6255c4*/
    }
  }
  Actor_ModMaxAVf(a1, a2, a3, v6, a5, a6); /*0x6255da*/
}
