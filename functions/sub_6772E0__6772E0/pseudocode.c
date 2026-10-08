Actor *__thiscall sub_6772E0(ActorProcessManager *this)
{
  int i; // ebx
  Actor *result; // eax
  Actor *j; // edi
  ActorVtbl *vtbl; // esi

  for ( i = 0; i < 2; ++i ) /*0x6772e6*/
  {
    if ( i ) /*0x6772ed*/
    {
      result = (Actor *)(i - 1); /*0x6772ef*/
      if ( i != 1 ) /*0x6772f2*/
        continue; /*0x6772f2*/
      result = ActorProcessManager_GetListHead(this, 2); /*0x6772f6*/
    }
    else
    {
      result = ActorProcessManager_GetListHead(this, 3); /*0x6772fc*/
    }
    if ( result ) /*0x677303*/
    {
      result = ActorList_ReturnHead((ActorList *)result); /*0x677307*/
      for ( j = result; j; j = *(Actor **)&j->members.super.super.super.type ) /*0x677310*/
      {
        vtbl = j->vtbl; /*0x677312*/
        if ( j->vtbl ) /*0x677312*/
        {
          result = (Actor *)(*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl); /*0x677322*/
          if ( (_BYTE)result ) /*0x677326*/
          {
            result = (Actor *)(*((int (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent /*0x677334*/
                               + 0x66))(
                                vtbl,
                                0);
            if ( !(_BYTE)result ) /*0x677338*/
              result = (Actor *)(*((int (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent /*0x677346*/
                                 + 0x61))(
                                  vtbl,
                                  1);
          }
        }
      }
    }
  }
  return result; /*0x677357*/
}
