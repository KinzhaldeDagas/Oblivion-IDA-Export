// positive sp value has been detected, the output may be wrong!
int __userpurge def_8BB62E@<eax>(
        const char *a1@<eax>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        char a6,
        const char *a7,
        const char *a8,
        int a9)
{
  int result; // eax

  result = sub_8BB6A0(a4, a2, a1, a2, a7, a8, a9, a6); /*0x8bb66c*/
  if ( a3 == 2 || a3 == 3 ) /*0x8bb679*/
    __debugbreak(); /*0x8bb67b*/
  return result; /*0x8bb67f*/
}
