void __usercall __noreturn _invoke_watson(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<edi>,
        int a6@<esi>)
{
  unsigned int v6; // kr00_4
  int v7; // esi
  void *v8; // eax
  UINT v9; // [esp-4h] [ebp-88h]
  _DWORD v10[20]; // [esp+4h] [ebp-80h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+54h] [ebp-30h] BYREF
  int v12; // [esp+5Ch] [ebp-28h] BYREF
  __int16 v13; // [esp+E8h] [ebp+64h]
  __int16 v14; // [esp+ECh] [ebp+68h]
  __int16 v15; // [esp+F0h] [ebp+6Ch]
  __int16 v16; // [esp+F4h] [ebp+70h]
  int v17; // [esp+F8h] [ebp+74h]
  int v18; // [esp+FCh] [ebp+78h]
  int v19; // [esp+100h] [ebp+7Ch]
  int v20; // [esp+104h] [ebp+80h]
  int v21; // [esp+108h] [ebp+84h]
  int v22; // [esp+10Ch] [ebp+88h]
  int v23; // [esp+110h] [ebp+8Ch]
  void *v24; // [esp+114h] [ebp+90h]
  __int16 v25; // [esp+118h] [ebp+94h]
  unsigned int v26; // [esp+11Ch] [ebp+98h]
  void **v27; // [esp+120h] [ebp+9Ch]
  __int16 v28; // [esp+124h] [ebp+A0h]
  int savedregs; // [esp+32Ch] [ebp+2A8h]
  void *retaddr; // [esp+330h] [ebp+2ACh] BYREF

  v22 = a1;
  v21 = a3;
  v20 = a2;
  v19 = a4;
  v18 = a6;
  v17 = a5;
  v28 = __SS__;
  v25 = __CS__;
  v16 = __DS__;
  v15 = __ES__;
  v14 = __FS__;
  v13 = __GS__;
  v6 = __readeflags();
  v26 = v6;
  v27 = &retaddr;
  v12 = 0x10001;
  v24 = retaddr;
  v23 = savedregs;
  _memset((int)v10, 0, sizeof(v10));
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v10;
  v10[0] = 0xC000000D;
  v10[3] = retaddr;
  ExceptionInfo.ContextRecord = (PCONTEXT)&v12;
  v7 = IsDebuggerPresent();
  SetUnhandledExceptionFilter(0);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v7 )
    sub_9933A9();
  v8 = (void *)((int (__cdecl *)(unsigned int))GetCurrentProcess)(0xC000000D);
  TerminateProcess(v8, v9);
}
