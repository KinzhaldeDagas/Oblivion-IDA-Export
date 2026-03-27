char __thiscall sub_5630A0(_DWORD *this, Ni2DBuffer *a2)
{
  void *height; // ecx
  _DWORD *v5; // eax
  void *m_uiRefCount; // ecx
  Ni2DBuffer *v7; // eax
  unsigned __int16 v8; // ax
  int v9; // ebx
  unsigned int v10; // ecx
  int *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  unsigned int v14; // ecx
  int *v15; // eax
  _DWORD *v16; // edi
  unsigned int v17; // ecx
  int *v18; // eax
  _DWORD *v19; // edi
  int v20; // edi
  void *v21; // ecx
  void *v22; // ecx
  unsigned __int16 v23; // ax
  int v24; // ebx
  unsigned int v25; // ecx
  int *v26; // eax
  _DWORD *v27; // edi
  unsigned int v28; // ecx
  int *v29; // eax
  _DWORD *v30; // edi
  unsigned int v31; // ecx
  int *v32; // eax
  _DWORD *v33; // edi
  int v34; // edi
  void *v35; // ecx
  void *width; // ebp
  Ni2DBuffer *v37; // eax
  Ni2DBuffer *v39; // [esp+4h] [ebp-44h]
  Ni2DBuffer *v40; // [esp+4h] [ebp-44h]
  int (__stdcall ***v41[7])(signed int); // [esp+20h] [ebp-28h] BYREF
  int v42; // [esp+44h] [ebp-4h]
  unsigned __int16 a2a; // [esp+4Ch] [ebp+4h]
  unsigned __int16 a2b; // [esp+4Ch] [ebp+4h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B39F80, (int)&unk_A2F830);
  if ( a2
    && (height = (void *)a2->members.height) != 0
    && a2->members.width != 2
    && !*(this + 2)
    && (v5 = sub_78DC10(height), (*(this + 3) = v5) != 0) )
  {
    NiSmartPointer_Set__((Ni2DBuffer **)this + 4, a2);
    *(this + 2) = 2;
    sub_55E2A0(this + 0xD, (int *)&a2[2].members.height);
    sub_55E2A0(this + 0xE, (int *)&a2[2].members.data);
    sub_55E2A0(this + 0xF, (int *)&a2[3]);
    sub_55E2A0(this + 8, (int *)&a2[1].members.height);
    *((float *)this + 0x11) = *(float *)&a2[3].members.width;
    *(this + 0x12) = a2[3].members.height;
    *((float *)this + 0x14) = *(float *)&a2[4].__vftable;
    *((float *)this + 0x15) = *(float *)&a2[4].members.super.m_uiRefCount;
    if ( a2[3].members.super.m_uiRefCount )
    {
      sub_478C80((NiTPointerMap<NiObject *,NiObject *> **)v41, 1.0);
      m_uiRefCount = (void *)a2[3].members.super.m_uiRefCount;
      v42 = 0;
      v7 = (Ni2DBuffer *)sub_700610(m_uiRefCount, (int)v41);
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, v7);
      v42 = 0xFFFFFFFF;
      sub_4781A0(v41);
    }
    else
    {
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, 0);
    }
    v8 = sub_5601E0(this);
    a2a = v8;
    if ( v8 )
    {
      if ( a2[1].__vftable )
      {
        if ( a2[1].members.data )
        {
          if ( a2[2].members.super.m_uiRefCount )
          {
            v9 = v8;
            v10 = (unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8;
            v11 = (int *)FormHeapAlloc(__CFADD__(v10, 4) ? 0xFFFFFFFF : v10 + 4);
            v42 = 1;
            if ( v11 )
            {
              v12 = v11 + 1;
              *v11 = v9;
              ArrayConstructor(
                v11 + 1,
                4u,
                v9,
                (int)Concurrency::details::_NonReentrantLock::_Release,
                (void (__thiscall *)(void *))sub_7016A0);
              v13 = v12;
            }
            else
            {
              v13 = 0;
            }
            *(this + 5) = v13;
            v42 = 0xFFFFFFFF;
            v14 = (unsigned __int64)(unsigned int)v9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v9;
            v15 = (int *)FormHeapAlloc(__CFADD__(v14, 4) ? 0xFFFFFFFF : v14 + 4);
            v42 = 2;
            if ( v15 )
            {
              v16 = v15 + 1;
              *v15 = v9;
              ArrayConstructor(
                v15 + 1,
                4u,
                v9,
                (int)Concurrency::details::_NonReentrantLock::_Release,
                (void (__thiscall *)(void *))sub_7016A0);
            }
            else
            {
              v16 = 0;
            }
            v42 = 0xFFFFFFFF;
            *(this + 9) = v16;
            v17 = (unsigned __int64)(unsigned int)v9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v9;
            v18 = (int *)FormHeapAlloc(__CFADD__(v17, 4) ? 0xFFFFFFFF : v17 + 4);
            v42 = 3;
            if ( v18 )
            {
              v19 = v18 + 1;
              *v18 = v9;
              ArrayConstructor(
                v18 + 1,
                4u,
                v9,
                (int)Concurrency::details::_NonReentrantLock::_Release,
                (void (__thiscall *)(void *))sub_7016A0);
            }
            else
            {
              v19 = 0;
            }
            v42 = 0xFFFFFFFF;
            *(this + 0xB) = v19;
            if ( a2a )
            {
              v20 = 0;
              do
              {
                sub_55E2A0((int *)(v20 + *(this + 5)), (int *)((char *)a2[1].__vftable + v20));
                v21 = *(NiDX92DBufferDataVtbl **)((char *)&a2[1].members.data->__vftable + v20);
                if ( v21 )
                {
                  v39 = (Ni2DBuffer *)sub_700900(v21);
                  NiSmartPointer_Set__((Ni2DBuffer **)(v20 + *(this + 9)), v39);
                }
                else
                {
                  NiSmartPointer_Set__((Ni2DBuffer **)(v20 + *(this + 9)), 0);
                }
                sub_55E2A0((int *)(v20 + *(this + 0xB)), (int *)(v20 + a2[2].members.super.m_uiRefCount));
                v20 += 4;
                --v9;
              }
              while ( v9 );
            }
          }
        }
      }
    }
    v22 = (void *)*(this + 3);
    if ( v22 )
    {
      v23 = sub_787200(v22);
      a2b = v23;
      if ( v23 )
      {
        if ( a2[1].members.super.m_uiRefCount )
        {
          if ( a2[2].__vftable )
          {
            if ( a2[2].members.width )
            {
              v24 = v23;
              v25 = (unsigned __int64)v23 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v23;
              v26 = (int *)FormHeapAlloc(__CFADD__(v25, 4) ? 0xFFFFFFFF : v25 + 4);
              v42 = 4;
              if ( v26 )
              {
                v27 = v26 + 1;
                *v26 = v24;
                ArrayConstructor(
                  v26 + 1,
                  4u,
                  v24,
                  (int)Concurrency::details::_NonReentrantLock::_Release,
                  (void (__thiscall *)(void *))sub_7016A0);
              }
              else
              {
                v27 = 0;
              }
              v42 = 0xFFFFFFFF;
              *(this + 6) = v27;
              v28 = (unsigned __int64)(unsigned int)v24 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v24;
              v29 = (int *)FormHeapAlloc(__CFADD__(v28, 4) ? 0xFFFFFFFF : v28 + 4);
              v42 = 5;
              if ( v29 )
              {
                v30 = v29 + 1;
                *v29 = v24;
                ArrayConstructor(
                  v29 + 1,
                  4u,
                  v24,
                  (int)Concurrency::details::_NonReentrantLock::_Release,
                  (void (__thiscall *)(void *))sub_7016A0);
              }
              else
              {
                v30 = 0;
              }
              v42 = 0xFFFFFFFF;
              *(this + 0xA) = v30;
              v31 = (unsigned __int64)(unsigned int)v24 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v24;
              v32 = (int *)FormHeapAlloc(__CFADD__(v31, 4) ? 0xFFFFFFFF : v31 + 4);
              v42 = 6;
              if ( v32 )
              {
                v33 = v32 + 1;
                *v32 = v24;
                ArrayConstructor(
                  v32 + 1,
                  4u,
                  v24,
                  (int)Concurrency::details::_NonReentrantLock::_Release,
                  (void (__thiscall *)(void *))sub_7016A0);
              }
              else
              {
                v33 = 0;
              }
              v42 = 0xFFFFFFFF;
              *(this + 0xC) = v33;
              if ( a2b )
              {
                v34 = 0;
                do
                {
                  sub_55E2A0((int *)(v34 + *(this + 6)), (int *)(v34 + a2[1].members.super.m_uiRefCount));
                  v35 = *(void **)((char *)a2[2].__vftable + v34);
                  if ( v35 )
                  {
                    v40 = (Ni2DBuffer *)sub_700900(v35);
                    NiSmartPointer_Set__((Ni2DBuffer **)(v34 + *(this + 0xA)), v40);
                  }
                  else
                  {
                    NiSmartPointer_Set__((Ni2DBuffer **)(v34 + *(this + 0xA)), 0);
                  }
                  sub_55E2A0((int *)(v34 + *(this + 0xC)), (int *)(v34 + a2[2].members.width));
                  v34 += 4;
                  --v24;
                }
                while ( v24 );
              }
            }
          }
        }
      }
    }
    width = (void *)a2[1].members.width;
    if ( width )
    {
      v37 = (Ni2DBuffer *)sub_700900(width);
      NiSmartPointer_Set__((Ni2DBuffer **)this + 7, v37);
    }
    NiLeaveCriticalSection_0(&stru_B39F80);
    return 1;
  }
  else
  {
    NiLeaveCriticalSection_0(&stru_B39F80);
    return 0;
  }
}
