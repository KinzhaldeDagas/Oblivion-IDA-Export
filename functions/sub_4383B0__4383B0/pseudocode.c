// Queues asynchronous KF model load through the model loader. Queued idle and actor animation setup paths use this for deferred KF availability.
const char *__thiscall ModelLoader_QueueKFLoad(_DWORD **this, const char *a2, IOTask *a3, IOTask **a4, int a5)
{
  const char *v6; // edi
  IOTask *v8; // eax
  IOTask *v9; // esi
  IOTask *v10; // ebx
  int v11; // edx
  IOTask *v12; // [esp-4h] [ebp-2Ch] BYREF
  int v13; // [esp+0h] [ebp-28h]
  IOTask *v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v6 = a2; /*0x4383dc*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, const char *, const char **))(**(this + 1) + 4))(*(this + 1), a2, &a2) ) /*0x4383e9*/
    return a2; /*0x4383ef*/
  v8 = (IOTask *)FormHeapAlloc(0x38u); /*0x4383fa*/
  v9 = v8; /*0x4383ff*/
  v14 = v8; /*0x438404*/
  v10 = a3; /*0x43840a*/
  v15 = 0; /*0x43840e*/
  if ( v8 ) /*0x438416*/
  {
    sub_4377D0(v8, v6, (unsigned __int8)a4); /*0x438420*/
    v11 = a5; /*0x438425*/
    v9->vtbl = &QueuedAnimIdle::`vftable'; /*0x438429*/
    v9[2].vtbl = (void *)v11; /*0x43842f*/
    v9[2].members.unk04 = (BSTask *)v10; /*0x438432*/
  }
  else
  {
    v9 = 0; /*0x438437*/
  }
  a3 = v9; /*0x438441*/
  if ( v9 ) /*0x438445*/
    InterlockedIncrement((volatile LONG *)&v9->members.unk08); /*0x43844b*/
  v13 = 0; /*0x43844f*/
  v15 = 1; /*0x438454*/
  a4 = &v12; /*0x43845c*/
  v12 = v9; /*0x438460*/
  if ( v9 ) /*0x438462*/
    InterlockedIncrement((volatile LONG *)&v9->members.unk08); /*0x438468*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, IOTask *, IOTask *, int))(**(this + 3) + 0xC))( /*0x438473*/
         *(this + 3),
         v10,
         v12,
         v13) )
  {
    (*((void (__thiscall **)(IOTask *))v9->vtbl + 8))(v9); /*0x438486*/
  }
  else if ( v9 ) /*0x43848c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v9->members.unk08) ) /*0x438492*/
      (*(void (__thiscall **)(IOTask *, int))v9->vtbl)(v9, 1); /*0x4384a0*/
    v9 = 0; /*0x4384a2*/
  }
  v15 = 0xFFFFFFFF; /*0x4384a6*/
  if ( v9 ) /*0x4384ae*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v9->members.unk08) ) /*0x4384b4*/
      (*(void (__thiscall **)(IOTask *, int))v9->vtbl)(v9, 1); /*0x4384c2*/
  }
  return 0; /*0x4384c6*/
}
