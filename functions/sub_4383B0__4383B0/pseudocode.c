const char *__thiscall sub_4383B0(_DWORD **this, const char *a2, IOTask *a3, IOTask **a4, int a5)
{
  const char *v6; // edi
  IOTask *v8; // eax
  IOTask *v9; // esi
  volatile LONG *v10; // ebx
  int v11; // edx
  IOTask *v12; // [esp-4h] [ebp-2Ch] BYREF
  int v13; // [esp+0h] [ebp-28h]
  IOTask *v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v6 = a2;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, const char *, const char **))(**(this + 1) + 4))(*(this + 1), a2, &a2) )
    return a2;
  v8 = (IOTask *)FormHeapAlloc(0x38u);
  v9 = v8;
  v14 = v8;
  v10 = (volatile LONG *)a3;
  v15 = 0;
  if ( v8 )
  {
    sub_4377D0(v8, v6, (unsigned __int8)a4);
    v11 = a5;
    v9->vtbl = &QueuedAnimIdle::`vftable';
    v9[2].vtbl = (void *)v11;
    v9[2].members.unk04 = (BSTask *)v10;
  }
  else
  {
    v9 = 0;
  }
  a3 = v9;
  if ( v9 )
    InterlockedIncrement((volatile LONG *)&v9->members.unk08);
  v13 = 0;
  v15 = 1;
  a4 = &v12;
  v12 = v9;
  if ( v9 )
    InterlockedIncrement((volatile LONG *)&v9->members.unk08);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, volatile LONG *, IOTask *, int))(**(this + 3) + 0xC))(
         *(this + 3),
         v10,
         v12,
         v13) )
  {
    (*((void (__thiscall **)(IOTask *))v9->vtbl + 8))(v9);
  }
  else if ( v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v9->members.unk08) )
      (*(void (__thiscall **)(IOTask *, int))v9->vtbl)(v9, 1);
    v9 = 0;
  }
  v15 = 0xFFFFFFFF;
  if ( v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v9->members.unk08) )
      (*(void (__thiscall **)(IOTask *, int))v9->vtbl)(v9, 1);
  }
  return 0;
}
