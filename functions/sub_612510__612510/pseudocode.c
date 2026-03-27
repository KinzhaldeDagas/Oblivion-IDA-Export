unsigned int __userpurge sub_612510@<eax>(
        unsigned int a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        char a7)
{
  sub_612150(a1, a2, a3, a4, a5, a6);
  if ( (a7 & 1) != 0 )
    FormHeapFree(a1);
  return a1;
}
