UInt32 *__thiscall sub_7077D0(_DWORD *this, UInt32 *arg0, Ni2DBuffer *a2, char a4)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  volatile LONG *v9; // esi
  int v10; // eax
  volatile LONG *v11; // edi
  volatile LONG **v12; // ebx
  bool v13; // zf
  UInt32 v14; // esi
  Ni2DBuffer *v15; // [esp-4h] [ebp-2Ch]
  UInt32 v16; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+24h] [ebp-4h]

  v17 = 0;
  if ( *(this + 0x29) )
  {
    v16 = 0;
    v18 = 1;
    EnterCriticalSection(&stru_B3FA00);
    CurrentThreadId = GetCurrentThreadId();
    ++dword_B3FA7C;
    dword_B3FA78 = CurrentThreadId;
    if ( a4 )
    {
      v7 = (_DWORD *)FormHeapAlloc(0x30u);
      LOBYTE(v18) = 1;
      if ( v7 )
      {
        v15 = (Ni2DBuffer *)sub_731620(v7, (int)a2);
        NiSmartPointer_Set__((Ni2DBuffer **)&v16, v15);
      }
      else
      {
        NiSmartPointer_Set__((Ni2DBuffer **)&v16, 0);
      }
    }
    else
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&v16, a2);
    }
    v8 = (_DWORD *)*(this + 0x27);
    while ( v8 )
    {
      v9 = (volatile LONG *)v8[2];
      v8 = (_DWORD *)*v8;
      if ( v9 )
      {
        if ( (*(int (__thiscall **)(volatile LONG *))(*v9 + 0x4C))(v9) <= 0xA )
        {
          v10 = (*(int (__thiscall **)(volatile LONG *))(*v9 + 0x4C))(v9);
          v11 = *(volatile LONG **)(v16 + 4 * v10 + 8);
          v12 = (volatile LONG **)(v16 + 4 * v10 + 8);
          if ( v11 != v9 )
          {
            if ( v11 )
            {
              if ( !InterlockedDecrement(v11 + 1) )
                (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1);
            }
            *v12 = v9;
            InterlockedIncrement(v9 + 1);
          }
        }
      }
    }
    v13 = dword_B3FA7C-- == 1;
    if ( v13 )
      dword_B3FA78 = 0;
    LeaveCriticalSection(&stru_B3FA00);
    v14 = v16;
    v13 = v16 == 0;
    *arg0 = v16;
    if ( !v13 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
    v17 = 1;
    LOBYTE(v18) = 0;
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v14)(v14, 1);
    }
    return arg0;
  }
  else
  {
    *arg0 = (UInt32)a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->members);
    return arg0;
  }
}
