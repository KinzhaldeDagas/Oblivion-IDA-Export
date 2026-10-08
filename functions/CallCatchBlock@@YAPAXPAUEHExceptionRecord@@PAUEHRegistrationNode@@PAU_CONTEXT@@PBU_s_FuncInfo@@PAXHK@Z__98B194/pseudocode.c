void *__cdecl CallCatchBlock(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        const struct _s_FuncInfo *a4,
        void *a5,
        unsigned int a6)
{
  void *v6; // ecx
  void *v7; // ebx
  void *v8; // eax
  unsigned int magicNumber; // eax
  int v11; // [esp+10h] [ebp-3Ch] BYREF
  int v12; // [esp+18h] [ebp-34h]
  DWORD v13; // [esp+1Ch] [ebp-30h]
  DWORD v14; // [esp+20h] [ebp-2Ch]
  _DWORD *v15; // [esp+24h] [ebp-28h]
  __ehstate_t state; // [esp+28h] [ebp-24h]
  void *v17; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v7 = v6; /*0x98b1a0*/
  v17 = v6; /*0x98b1a8*/
  v12 = 0; /*0x98b1ab*/
  state = a2[0xFFFFFFFF].state; /*0x98b1b2*/
  v15 = _CreateFrameInfo(&v11, (int)a1->params.pExceptionObject); /*0x98b1c3*/
  v14 = _getptd()[0x22]; /*0x98b1d1*/
  v13 = _getptd()[0x23]; /*0x98b1df*/
  _getptd()[0x22] = (DWORD)a1; /*0x98b1e7*/
  _getptd()[0x23] = (DWORD)a3; /*0x98b1f5*/
  ms_exc.registration.TryLevel = 1; /*0x98b205*/
  _CallCatchBlock2((int)a2, (int)a1, a2, a4, v7, (int)a5, a6); /*0x98b213*/
  v17 = v8; /*0x98b21b*/
  ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x98b293*/
  a2[0xFFFFFFFF].state = state; /*0x98b2bd*/
  _FindAndUnlinkFrame((int)v15); /*0x98b2c3*/
  _getptd()[0x22] = v14; /*0x98b2d1*/
  _getptd()[0x23] = v13; /*0x98b2df*/
  if ( a1->ExceptionCode == 0xE06D7363 && a1->NumberParameters == 3 ) /*0x98b2f1*/
  {
    magicNumber = a1->params.magicNumber; /*0x98b2f3*/
    if ( (magicNumber == 0x19930520 || magicNumber == 0x19930521 || magicNumber == 0x19930522) && !v12 ) /*0x98b30f*/
    {
      if ( v17 ) /*0x98b315*/
      {
        if ( _IsExceptionObjectToBeDestroyed((int)a1->params.pExceptionObject) ) /*0x98b31a*/
          __DestructExceptionObject(a1); /*0x98b328*/
      }
    }
  }
  return v17; /*0x98b2a9*/
}
