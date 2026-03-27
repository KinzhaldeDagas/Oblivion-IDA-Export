void __thiscall NiAVObject_InitializePropertyState(NiAVObject *this)
{
  volatile LONG *v2; // esi
  DWORD CurrentThreadId; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  NiNode *m_parent; // ecx
  int *v6; // eax
  NiPropertyState *v7; // esi
  NiPropertyState *v9; // eax
  NiPropertyState *v10; // eax
  NiPropertyState *v11; // [esp+14h] [ebp-14h] BYREF
  NiPropertyState *v12; // [esp+18h] [ebp-10h] BYREF
  unsigned int v13; // [esp+24h] [ebp-4h]

  v2 = 0;
  v11 = 0;
  v13 = 0;
  EnterCriticalSection(&stru_B3FA00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3FA7C;
  v4 = InterlockedDecrement;
  dword_B3FA78 = CurrentThreadId;
  m_parent = this->members.m_parent;
  if ( m_parent )
  {
    v6 = sub_70A3E0(m_parent, (int *)&v12);
    LOBYTE(v13) = 1;
    sub_55E2A0((int *)&v11, v6);
    v7 = v12;
    LOBYTE(v13) = 0;
    if ( v12 )
    {
      if ( !v4((volatile LONG *)v12 + 1) )
      {
        if ( v7 )
          (**(void (__thiscall ***)(NiPropertyState *, int))v7)(v7, 1);
      }
    }
    v2 = (volatile LONG *)v11;
  }
  else
  {
    v9 = (NiPropertyState *)FormHeapAlloc(0x30u);
    v12 = v9;
    LOBYTE(v13) = 2;
    if ( v9 )
      v10 = sub_7319E0(v9);
    else
      v10 = 0;
    LOBYTE(v13) = 0;
    if ( v10 )
    {
      v2 = (volatile LONG *)v10;
      v11 = v10;
      InterlockedIncrement((volatile LONG *)v10 + 1);
    }
  }
  this->vtbl->UpdatePropertiesDownward(this, (NiPropertyState *)v2);
  if ( v2 )
  {
    if ( !v4(v2 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v2)(v2, 1);
  }
  if ( dword_B3FA7C-- == 1 )
    dword_B3FA78 = 0;
  LeaveCriticalSection(&stru_B3FA00);
  v13 = 0xFFFFFFFF;
}
