// Initializes the 0x2C-byte AnimIdle runtime holder and starts its KF load. Observed layout: +0x00 phase (0 pending/unavailable, 1 ready, 2 active, 3 terminal), +0x04 completion/action mode, +0x08 KFModel, +0x0C requested slot/type, +0x10 played sequence, +0x24 TESIdleForm, +0x28 actor ref. Builds Meshes\\<TESIdleForm model path>, loads now or queues asynchronously, binds two actor-specific resources, and marks phase 1 when a KFModel is immediately available.
IOTask *__thiscall AnimIdle_InitAndLoadKF(IOTask *this, UInt32 a2, UInt32 a3, BSTask *a4, TESObjectREFR *a5, char a6)
{
  IOTask *v6; // esi
  int v7; // ebx
  IOTask *v8; // ebp
  UInt32 unk10; // edi
  volatile LONG *vtbl; // edi
  int (__thiscall *v11)(UInt32); // edx
  const char *v12; // eax
  const char *KFModelNow; // eax
  int *v14; // esi
  const char *v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  ActorAnimData *v19; // eax
  char *v22; // [esp+18h] [ebp-18h]
  BSStringT v23; // [esp+1Ch] [ebp-14h] BYREF
  int v24; // [esp+2Ch] [ebp-4h]
  int v25; // [esp+34h] [ebp+4h]

  v6 = this; /*0x474c77*/
  v7 = 0; /*0x474c7d*/
  this->members.unk10 = 0; /*0x474c7f*/
  v8 = (IOTask *)((char *)this + 0x1C); /*0x474c8e*/
  v24 = 0; /*0x474c94*/
  v22 = (char *)this + 0x1C; /*0x474c98*/
  ArrayConstructor( /*0x474c9c*/
    (char *)this + 0x1C,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  unk10 = v6->members.unk10; /*0x474ca1*/
  LOBYTE(v24) = 1; /*0x474ca6*/
  if ( unk10 ) /*0x474cab*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk10 + 4)) ) /*0x474cb1*/
      (**(void (__thiscall ***)(UInt32, int))unk10)(unk10, 1); /*0x474cc7*/
    v6->members.unk10 = 0; /*0x474cc9*/
  }
  v6->members.unk0C = a3; /*0x474cd8*/
  v6->members.unk04 = a4; /*0x474cdb*/
  v6[1].members.unk0C = a2; /*0x474cde*/
  v6->vtbl = 0; /*0x474ce1*/
  do /*0x474d2a*/
  {
    v8[0xFFFFFFFF].members.unk10 = sub_449040((int *)g_TESDataHandler, a2, v7); /*0x474cf4*/
    vtbl = (volatile LONG *)v8->vtbl; /*0x474cf7*/
    if ( v8->vtbl ) /*0x474cf7*/
    {
      if ( !InterlockedDecrement(vtbl + 1) ) /*0x474d02*/
      {
        if ( vtbl ) /*0x474d0e*/
          (**(void (__thiscall ***)(void *, int))vtbl)((void *)vtbl, 1); /*0x474d18*/
      }
      v8->vtbl = 0; /*0x474d1a*/
    }
    ++v7; /*0x474d21*/
    v8 = (IOTask *)((char *)v8 + 4); /*0x474d24*/
  }
  while ( v7 < 2 ); /*0x474d2a*/
  v6[1].members.unk10 = (UInt32)a5; /*0x474d32*/
  v23.m_data = 0; /*0x474d35*/
  v23.m_dataLen = 0; /*0x474d39*/
  v23.m_bufLen = 0; /*0x474d3e*/
  v11 = *(int (__thiscall **)(UInt32))(*(_DWORD *)(a2 + 0x18) + 0x14); /*0x474d4a*/
  LOBYTE(v24) = 2; /*0x474d50*/
  v12 = (const char *)v11(a2 + 0x18); /*0x474d55*/
  BSStringT_Static_Format(&v23, "%s\\%s", "Meshes", v12); /*0x474d67*/
  if ( a6 ) /*0x474d74*/
    KFModelNow = (const char *)ModelLoader_LoadKFModelNow(MEMORY[0xB33A1C], v23.m_data); /*0x474d96*/
  else
    KFModelNow = ModelLoader_QueueKFLoad((_DWORD **)MEMORY[0xB33A1C], v23.m_data, v6, 0, (int)a5); /*0x474d84*/
  v6->members.unk08 = (UInt32)KFModelNow; /*0x474d9d*/
  if ( KFModelNow ) /*0x474da0*/
  {
    v14 = (int *)v22; /*0x474da6*/
    v25 = 2; /*0x474daa*/
    do /*0x474e38*/
    {
      if ( v14[0xFFFFFFFE] ) /*0x474db2*/
      {
        if ( a5 ) /*0x474dba*/
        {
          v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(v14[0xFFFFFFFE] + 0x18) + 0x14))(v14[0xFFFFFFFE] + 0x18); /*0x474dcc*/
          v16 = Actor_LoadCloneAndAttachModel3D(v15, 0xFFFFFFFF, a5, 0); /*0x474dcf*/
          v17 = *v14; /*0x474dd4*/
          v18 = v16; /*0x474dd6*/
          if ( *v14 != v16 ) /*0x474ddd*/
          {
            if ( v17 ) /*0x474de1*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x474de7*/
                (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x474dfd*/
            }
            *v14 = v18; /*0x474e01*/
            if ( v18 ) /*0x474e03*/
              InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x474e09*/
          }
          v19 = a5->vtbl->GetAnimData(a5); /*0x474e19*/
          sub_7165B0((_DWORD *)*v14, *((_DWORD *)v19->manager + 0x1F)); /*0x474e28*/
        }
      }
      ++v14; /*0x474e30*/
      --v25; /*0x474e33*/
    }
    while ( v25 ); /*0x474e38*/
    if ( !a6 ) /*0x474e43*/
      InterlockedIncrement((volatile LONG *)(this->members.unk08 + 0xC)); /*0x474e50*/
    this->vtbl = (void *)1; /*0x474e5a*/
    v6 = this; /*0x474e60*/
  }
  FormHeapFree((unsigned int)v23.m_data); /*0x474e67*/
  return v6; /*0x474e71*/
}
