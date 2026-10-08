unsigned int __userpurge sub_66EAD0@<eax>(
        unsigned int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st3>,
        double a5@<st0>,
        char a6)
{
  sub_66B150(a1, a2, a3, a4, a5); /*0x66ead3*/
  if ( (a6 & 1) != 0 ) /*0x66eadd*/
    FormHeapFree(a1); /*0x66eae0*/
  return a1; /*0x66eaea*/
}
