IOTask *__thiscall sub_474C50(IOTask *this, UInt32 a2, UInt32 a3, BSTask *a4, TESObjectREFR *a5, char a6)
{
  IOTask *v6; // esi
  int v7; // ebx
  IOTask *v8; // ebp
  UInt32 unk10; // edi
  volatile LONG *vtbl; // edi
  int (__thiscall *v11)(UInt32); // edx
  const char *v12; // eax
  const char *v13; // eax
  int *v14; // esi
  const char *v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  ActorAnimData *v19; // eax
  int *v22; // [esp+18h] [ebp-18h]
  BSStringT v23; // [esp+1Ch] [ebp-14h] BYREF
  int v24; // [esp+2Ch] [ebp-4h]
  int v25; // [esp+34h] [ebp+4h]

  v6 = this;
  v7 = 0;
  this->members.unk10 = 0;
  v8 = (IOTask *)((char *)this + 0x1C);
  v24 = 0;
  v22 = (int *)((char *)this + 0x1C);
  ArrayConstructor(
    (char *)this + 0x1C,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  unk10 = v6->members.unk10;
  LOBYTE(v24) = 1;
  if ( unk10 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk10 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk10)(unk10, 1);
    v6->members.unk10 = 0;
  }
  v6->members.unk0C = a3;
  v6->members.unk04 = a4;
  v6[1].members.unk0C = a2;
  v6->vtbl = 0;
  do
  {
    v8[0xFFFFFFFF].members.unk10 = sub_449040((int *)TESDataHandler, a2, v7);
    vtbl = (volatile LONG *)v8->vtbl;
    if ( v8->vtbl )
    {
      if ( !InterlockedDecrement(vtbl + 1) )
      {
        if ( vtbl )
          (**(void (__thiscall ***)(void *, int))vtbl)((void *)vtbl, 1);
      }
      v8->vtbl = 0;
    }
    ++v7;
    v8 = (IOTask *)((char *)v8 + 4);
  }
  while ( v7 < 2 );
  v6[1].members.unk10 = (UInt32)a5;
  v23.m_data = 0;
  v23.m_dataLen = 0;
  v23.m_bufLen = 0;
  v11 = *(int (__thiscall **)(UInt32))(*(_DWORD *)(a2 + 0x18) + 0x14);
  LOBYTE(v24) = 2;
  v12 = (const char *)v11(a2 + 0x18);
  BSStringT_Static_Format(&v23, "%s\\%s", "Meshes", v12);
  if ( a6 )
    v13 = (const char *)sub_439FF0(ModelLoaderPtr, v23.m_data);
  else
    v13 = sub_4383B0((_DWORD **)ModelLoaderPtr, v23.m_data, v6, 0, (int)a5);
  v6->members.unk08 = (UInt32)v13;
  if ( v13 )
  {
    v14 = v22;
    v25 = 2;
    do
    {
      if ( v14[0xFFFFFFFE] )
      {
        if ( a5 )
        {
          v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(v14[0xFFFFFFFE] + 0x18) + 0x14))(v14[0xFFFFFFFE] + 0x18);
          v16 = sub_479450(v15, 0xFFFFFFFF, a5, 0);
          v17 = *v14;
          v18 = v16;
          if ( *v14 != v16 )
          {
            if ( v17 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
                (**(void (__thiscall ***)(int, int))v17)(v17, 1);
            }
            *v14 = v18;
            if ( v18 )
              InterlockedIncrement((volatile LONG *)(v18 + 4));
          }
          v19 = a5->vtbl->GetAnimData(a5);
          sub_7165B0((_DWORD *)*v14, *((_DWORD *)v19->manager + 0x1F));
        }
      }
      ++v14;
      --v25;
    }
    while ( v25 );
    if ( !a6 )
      InterlockedIncrement((volatile LONG *)(this->members.unk08 + 0xC));
    this->vtbl = (void *)1;
    v6 = this;
  }
  FormHeapFree((unsigned int)v23.m_data);
  return v6;
}
