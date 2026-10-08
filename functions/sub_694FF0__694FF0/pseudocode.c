ActorVtbl *__userpurge sub_694FF0@<eax>(
        ActorVtbl *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  sub_694D20(a1, a2, a3, a4, a5); /*0x694ff3*/
  if ( (a6 & 1) != 0 ) /*0x694ffd*/
    FormHeapFree((unsigned int)a1); /*0x695000*/
  return a1; /*0x69500a*/
}
