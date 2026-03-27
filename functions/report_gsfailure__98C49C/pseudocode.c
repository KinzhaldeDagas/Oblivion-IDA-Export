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
  int retaddr; // [esp+32Ch] [ebp+4h]

  dword_BA9F38 = a1;
  dword_BA9F34 = a3;
  dword_BA9F30 = a2;
  dword_BA9F2C = a4;
  dword_BA9F28 = a6;
  dword_BA9F24 = a5;
  word_BA9F50 = __SS__;
  word_BA9F44 = __CS__;
  word_BA9F20 = __DS__;
  word_BA9F1C = __ES__;
  word_BA9F18 = __FS__;
  word_BA9F14 = __GS__;
  v7 = __readeflags();
  dword_BA9F48 = v7;
  dword_BA9F3C = vars0;
  dword_BA9F40 = retaddr;
  dword_BA9F4C = (int)&a7;
  dword_BA9E88 = 0x10001;
  dword_BA9E3C = retaddr;
  dword_BA9E30 = 0xC0000409;
  dword_BA9E34 = 1;
  dword_BA9E80 = IsDebuggerPresent();
  sub_9933A9();
  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter(&ExceptionInfo);
  if ( !dword_BA9E80 )
    sub_9933A9();
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}
