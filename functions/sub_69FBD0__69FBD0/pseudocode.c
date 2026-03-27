ActorVtbl *__userpurge sub_69FBD0@<eax>(
        ActorVtbl *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  sub_69FA60(a1, a2, a3, a4, a5);
  if ( (a6 & 1) != 0 )
    FormHeapFree((unsigned int)a1);
  return a1;
}
