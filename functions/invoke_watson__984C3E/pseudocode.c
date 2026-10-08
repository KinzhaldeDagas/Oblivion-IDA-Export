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

  v22 = a1; /*0x984c5a*/
  v21 = a3; /*0x984c60*/
  v20 = a2; /*0x984c66*/
  v19 = a4; /*0x984c6c*/
  v18 = a6; /*0x984c6f*/
  v17 = a5; /*0x984c72*/
  v28 = __SS__; /*0x984c75*/
  v25 = __CS__; /*0x984c7c*/
  v16 = __DS__; /*0x984c83*/
  v15 = __ES__; /*0x984c87*/
  v14 = __FS__; /*0x984c8b*/
  v13 = __GS__; /*0x984c8f*/
  v6 = __readeflags(); /*0x984c93*/
  v26 = v6; /*0x984c94*/
  v27 = &retaddr; /*0x984ca6*/
  v12 = 0x10001; /*0x984cac*/
  v24 = retaddr; /*0x984cb3*/
  v23 = savedregs; /*0x984cbe*/
  _memset((int)v10, 0, sizeof(v10)); /*0x984cca*/
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v10; /*0x984cd2*/
  v10[0] = 0xC000000D; /*0x984cdb*/
  v10[3] = retaddr; /*0x984ce2*/
  ExceptionInfo.ContextRecord = (PCONTEXT)&v12; /*0x984ce5*/
  v7 = IsDebuggerPresent(); /*0x984cf0*/
  SetUnhandledExceptionFilter(0); /*0x984cf2*/
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v7 ) /*0x984d08*/
    sub_9933A9(); /*0x984d0c*/
  v8 = (void *)((int (__cdecl *)(unsigned int))GetCurrentProcess)(0xC000000D); /*0x984d17*/
  TerminateProcess(v8, v9); /*0x984d1e*/
}
