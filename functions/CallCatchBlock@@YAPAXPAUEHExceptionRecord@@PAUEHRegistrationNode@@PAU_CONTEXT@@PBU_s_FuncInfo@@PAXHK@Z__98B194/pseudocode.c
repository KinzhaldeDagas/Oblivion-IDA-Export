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
  unsigned int magicNumber; // eax
  int v10; // [esp+10h] [ebp-3Ch] BYREF
  int v11; // [esp+18h] [ebp-34h]
  int v12; // [esp+1Ch] [ebp-30h]
  int v13; // [esp+20h] [ebp-2Ch]
  _DWORD *v14; // [esp+24h] [ebp-28h]
  __ehstate_t state; // [esp+28h] [ebp-24h]
  void *v16; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v7 = v6;
  v16 = v6;
  v11 = 0;
  state = a2[0xFFFFFFFF].state;
  v14 = _CreateFrameInfo(&v10, (int)a1->params.pExceptionObject);
  v13 = *(_DWORD *)(_getptd() + 0x88);
  v12 = *(_DWORD *)(_getptd() + 0x8C);
  *(_DWORD *)(_getptd() + 0x88) = a1;
  *(_DWORD *)(_getptd() + 0x8C) = a3;
  ms_exc.registration.TryLevel = 1;
  v16 = _CallCatchBlock2(a2, a4, v7, (int)a5, a6);
  ms_exc.registration.TryLevel = 0xFFFFFFFE;
  a2[0xFFFFFFFF].state = state;
  _FindAndUnlinkFrame((int)v14);
  *(_DWORD *)(_getptd() + 0x88) = v13;
  *(_DWORD *)(_getptd() + 0x8C) = v12;
  if ( a1->ExceptionCode == 0xE06D7363 && a1->NumberParameters == 3 )
  {
    magicNumber = a1->params.magicNumber;
    if ( (magicNumber == 0x19930520 || magicNumber == 0x19930521 || magicNumber == 0x19930522) && !v11 )
    {
      if ( v16 )
      {
        if ( _IsExceptionObjectToBeDestroyed((int)a1->params.pExceptionObject) )
          __DestructExceptionObject(a1);
      }
    }
  }
  return v16;
}
