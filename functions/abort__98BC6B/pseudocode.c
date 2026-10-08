void __cdecl __noreturn abort()
{
  int v0; // esi
  PVOID v1; // eax
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // kr00_4
  int v5; // [esp-4h] [ebp-88h]
  _DWORD v6[20]; // [esp+4h] [ebp-80h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+54h] [ebp-30h] BYREF
  int v8; // [esp+5Ch] [ebp-28h] BYREF
  _WORD v9[58]; // [esp+84h] [ebp+0h] BYREF
  int v10; // [esp+FCh] [ebp+78h]
  int v11; // [esp+104h] [ebp+80h]
  int v12; // [esp+108h] [ebp+84h]
  PVOID v13; // [esp+10Ch] [ebp+88h]
  int v14; // [esp+110h] [ebp+8Ch]
  void *v15; // [esp+114h] [ebp+90h]
  __int16 v16; // [esp+118h] [ebp+94h]
  unsigned int v17; // [esp+11Ch] [ebp+98h]
  void **v18; // [esp+120h] [ebp+9Ch]
  __int16 v19; // [esp+124h] [ebp+A0h]
  int savedregs; // [esp+32Ch] [ebp+2A8h]
  void *retaddr; // [esp+330h] [ebp+2ACh] BYREF

  if ( (dword_B310A8 & 1) != 0 ) /*0x98bc8e*/
    _NMSG_WRITE((int)v9, 0xA); /*0x98bc92*/
  v1 = sub_98DACB(); /*0x98bc98*/
  if ( v1 ) /*0x98bc9f*/
  {
    v1 = (PVOID)raise(0x16); /*0x98bca3*/
    v3 = v5; /*0x98bca8*/
  }
  if ( (dword_B310A8 & 2) != 0 ) /*0x98bcb0*/
  {
    v13 = v1; /*0x98bcb6*/
    v12 = v3; /*0x98bcbc*/
    v11 = v2; /*0x98bcc2*/
    v10 = v0; /*0x98bccb*/
    v19 = __SS__; /*0x98bcd1*/
    v16 = __CS__; /*0x98bcd8*/
    v9[0x38] = __DS__; /*0x98bcdf*/
    v9[0x36] = __ES__; /*0x98bce3*/
    v9[0x34] = __FS__; /*0x98bce7*/
    v9[0x32] = __GS__; /*0x98bceb*/
    v4 = __readeflags(); /*0x98bcef*/
    v17 = v4; /*0x98bcf0*/
    v18 = &retaddr; /*0x98bd02*/
    v8 = 0x10001; /*0x98bd08*/
    v15 = retaddr; /*0x98bd0f*/
    v14 = savedregs; /*0x98bd1a*/
    _memset((int)v6, 0, sizeof(v6)); /*0x98bd26*/
    ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6; /*0x98bd31*/
    v6[0] = 0x40000015; /*0x98bd39*/
    v6[3] = retaddr; /*0x98bd40*/
    ExceptionInfo.ContextRecord = (PCONTEXT)&v8; /*0x98bd43*/
    SetUnhandledExceptionFilter(0); /*0x98bd46*/
    UnhandledExceptionFilter(&ExceptionInfo); /*0x98bd50*/
  }
  _exit(3); /*0x98bd58*/
}
