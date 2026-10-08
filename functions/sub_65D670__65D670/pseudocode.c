void __userpurge sub_65D670(
        int a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        double a6@<st3>,
        char a7)
{
  if ( !a7 && !sub_45A500(g_TESSaveLoadGame) ) /*0x65d682*/
  {
    sub_6765F0(a7, a2, a3, a4, a5, (ActorProcessManager *)&qword_B3BB2C[0x75], a6, 0, MEMORY[0xB3BAD0], 1); /*0x65d69a*/
    *(_DWORD *)(a1 + 0x608) = 0; /*0x65d69f*/
    MEMORY[0xB3BAD4] = 0; /*0x65d6a9*/
    MEMORY[0xB3BAD0] = 0; /*0x65d6b3*/
  }
  *(_BYTE *)(a1 + 0x610) = a7; /*0x65d6bd*/
}
