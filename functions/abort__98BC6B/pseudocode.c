void __cdecl __noreturn abort()
{
  int v0; // esi
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // kr00_4
  int v5; // [esp-4h] [ebp-88h]
  _DWORD v6[20]; // [esp+4h] [ebp-80h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+54h] [ebp-30h] BYREF
  int v8; // [esp+5Ch] [ebp-28h] BYREF
  __int16 v9; // [esp+E8h] [ebp+64h]
  __int16 v10; // [esp+ECh] [ebp+68h]
  __int16 v11; // [esp+F0h] [ebp+6Ch]
  __int16 v12; // [esp+F4h] [ebp+70h]
  int v13; // [esp+FCh] [ebp+78h]
  int v14; // [esp+104h] [ebp+80h]
  int v15; // [esp+108h] [ebp+84h]
  int v16; // [esp+10Ch] [ebp+88h]
  int v17; // [esp+110h] [ebp+8Ch]
  void *v18; // [esp+114h] [ebp+90h]
  __int16 v19; // [esp+118h] [ebp+94h]
  unsigned int v20; // [esp+11Ch] [ebp+98h]
  void **v21; // [esp+120h] [ebp+9Ch]
  __int16 v22; // [esp+124h] [ebp+A0h]
  int savedregs; // [esp+32Ch] [ebp+2A8h]
  void *retaddr; // [esp+330h] [ebp+2ACh] BYREF

  if ( (dword_B310A8 & 1) != 0 )
    _NMSG_WRITE(0xA);
  v1 = sub_98DACB();
  if ( v1 )
  {
    v1 = raise(0x16);
    v3 = v5;
  }
  if ( (dword_B310A8 & 2) != 0 )
  {
    v16 = v1;
    v15 = v3;
    v14 = v2;
    v13 = v0;
    v22 = __SS__;
    v19 = __CS__;
    v12 = __DS__;
    v11 = __ES__;
    v10 = __FS__;
    v9 = __GS__;
    v4 = __readeflags();
    v20 = v4;
    v21 = &retaddr;
    v8 = 0x10001;
    v18 = retaddr;
    v17 = savedregs;
    _memset((int)v6, 0, sizeof(v6));
    ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
    v6[0] = 0x40000015;
    v6[3] = retaddr;
    ExceptionInfo.ContextRecord = (PCONTEXT)&v8;
    SetUnhandledExceptionFilter(0);
    UnhandledExceptionFilter(&ExceptionInfo);
  }
  _exit(3);
}
