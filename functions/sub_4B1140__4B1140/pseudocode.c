char __userpurge sub_4B1140@<al>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        int a5,
        void *a6,
        int a7,
        int a8,
        int a9)
{
  if ( (*(_DWORD *)(a1 + 0x7C) & 2) != 0 )
    return sub_4B28E0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  else
    return 0;
}
