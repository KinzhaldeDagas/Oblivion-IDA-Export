double __userpurge Creature_Actor_GetCurAVf@<st0>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>, int a5)
{
  int v5; // eax

  v5 = a5; /*0x625410*/
  if ( (unsigned int)(a5 - 0xC) <= 6 || a5 == 0x1C ) /*0x62541f*/
  {
    v5 = 0xC; /*0x62544d*/
  }
  else
  {
    if ( (unsigned int)(a5 - 0x13) <= 6 ) /*0x625427*/
      return Actor_GetCurAVf(a1, a2, a3, a4, 0x13); /*0x625432*/
    if ( (unsigned int)(a5 - 0x1A) <= 6 ) /*0x62543d*/
      return Actor_GetCurAVf(a1, a2, a3, a4, 0x1A); /*0x625448*/
  }
  return Actor_GetCurAVf(a1, a2, a3, a4, v5);
}
