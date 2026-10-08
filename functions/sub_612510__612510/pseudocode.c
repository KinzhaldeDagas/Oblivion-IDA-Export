unsigned int __userpurge sub_612510@<eax>(
        unsigned int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  sub_612150(a1, a2, a3, a4, a5); /*0x612513*/
  if ( (a6 & 1) != 0 ) /*0x61251d*/
    FormHeapFree(a1); /*0x612520*/
  return a1; /*0x61252a*/
}
