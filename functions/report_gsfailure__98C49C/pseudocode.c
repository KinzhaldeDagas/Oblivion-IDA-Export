void __usercall __noreturn __report_gsfailure(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<edi>,
        int a6@<esi>,
        char a7)
{
  unsigned int v7; // kr00_4
  HANDLE CurrentProcess; // eax
  int vars0; // [esp+328h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+32Ch] [ebp+4h]

  dword_BA9E10[0x4A] = a1; /*0x98c4a5*/
  dword_BA9E10[0x49] = a3; /*0x98c4aa*/
  dword_BA9E10[0x48] = a2; /*0x98c4b0*/
  dword_BA9E10[0x47] = a4; /*0x98c4b6*/
  dword_BA9E10[0x46] = a6; /*0x98c4bc*/
  dword_BA9E10[0x45] = a5; /*0x98c4c2*/
  LOWORD(dword_BA9E10[0x50]) = __SS__; /*0x98c4c8*/
  LOWORD(dword_BA9E10[0x4D]) = __CS__; /*0x98c4cf*/
  LOWORD(dword_BA9E10[0x44]) = __DS__; /*0x98c4d6*/
  LOWORD(dword_BA9E10[0x43]) = __ES__; /*0x98c4dd*/
  LOWORD(dword_BA9E10[0x42]) = __FS__; /*0x98c4e4*/
  LOWORD(dword_BA9E10[0x41]) = __GS__; /*0x98c4eb*/
  v7 = __readeflags(); /*0x98c4f2*/
  dword_BA9E10[0x4E] = v7; /*0x98c4f3*/
  dword_BA9E10[0x4B] = vars0; /*0x98c4fc*/
  dword_BA9E10[0x4C] = retaddr; /*0x98c504*/
  dword_BA9E10[0x4F] = &a7; /*0x98c50c*/
  dword_BA9E10[0x1E] = 0x10001; /*0x98c517*/
  dword_BA9E10[0xB] = retaddr; /*0x98c526*/
  dword_BA9E10[8] = 0xC0000409; /*0x98c52b*/
  dword_BA9E10[9] = 1; /*0x98c535*/
  dword_BA9E10[0x1C] = IsDebuggerPresent(); /*0x98c55b*/
  sub_9933A9(); /*0x98c562*/
  SetUnhandledExceptionFilter(0); /*0x98c56a*/
  UnhandledExceptionFilter(&ExceptionInfo); /*0x98c575*/
  if ( !dword_BA9E10[0x1C] ) /*0x98c582*/
    sub_9933A9(); /*0x98c586*/
  CurrentProcess = GetCurrentProcess(); /*0x98c591*/
  TerminateProcess(CurrentProcess, 0xC0000409); /*0x98c598*/
}
