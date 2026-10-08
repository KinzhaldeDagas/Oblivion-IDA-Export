MagicFogProjectile *__userpurge sub_69C980@<eax>(
        MagicFogProjectile *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  sub_69C140(a1, a2, a3, a4, a5); /*0x69c983*/
  if ( (a6 & 1) != 0 ) /*0x69c98d*/
    FormHeapFree((unsigned int)a1); /*0x69c990*/
  return a1; /*0x69c99a*/
}
