TESObjectREFR *__userpurge sub_6253A0@<eax>(
        TESObjectREFR *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  sub_625140(a1, a2, a3, a4, a5); /*0x6253a3*/
  if ( (a6 & 1) != 0 ) /*0x6253ad*/
    FormHeapFree((unsigned int)a1); /*0x6253b0*/
  return a1; /*0x6253ba*/
}
