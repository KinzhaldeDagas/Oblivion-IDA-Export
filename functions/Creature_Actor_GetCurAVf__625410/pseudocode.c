double __userpurge Creature_Actor_GetCurAVf@<st0>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>, int a5)
{
  int v5; // eax

  v5 = a5;
  if ( (unsigned int)(a5 - 0xC) <= 6 || a5 == 0x1C )
  {
    v5 = 0xC;
  }
  else
  {
    if ( (unsigned int)(a5 - 0x13) <= 6 )
      return Actor_GetCurAVf(a1, a2, a3, a4, 0x13);
    if ( (unsigned int)(a5 - 0x1A) <= 6 )
      return Actor_GetCurAVf(a1, a2, a3, a4, 0x1A);
  }
  return Actor_GetCurAVf(a1, a2, a3, a4, v5);
}
