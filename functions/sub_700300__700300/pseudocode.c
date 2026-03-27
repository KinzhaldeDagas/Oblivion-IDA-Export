void __thiscall sub_700300(char **this, NiObjectNET *a2, int a3)
{
  int v4; // eax
  const char *v5; // eax
  unsigned int v6; // edi
  char *v7; // esi
  DWORD CurrentThreadId; // eax
  unsigned __int16 v9; // di
  int v10; // ecx
  int v11; // esi
  unsigned int *v12; // eax
  int v14; // ecx
  int v15; // eax
  NiInterpController *m_controller; // esi
  NiInterpController *v17; // edi

  sub_700770(this, (int)a2, (_DWORD **)a3);
  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 == 1 )
  {
    NiObjectNET_SetName(a2, *(this + 2));
  }
  else if ( v4 == 2 )
  {
    v5 = *(this + 2);
    if ( v5 )
    {
      v6 = strlen(v5) + 2;
      v7 = (char *)FormHeapAlloc(v6);
      strcpy_s(v7, v6, *(this + 2));
      v7[v6 - 2] = *(_BYTE *)(a3 + 0xC);
      v7[v6 - 1] = 0;
      NiObjectNET_SetName(a2, v7);
      FormHeapFree((unsigned int)v7);
    }
  }
  if ( *((_WORD *)this + 0xA) )
  {
    EnterCriticalSection(&stru_B3F600);
    CurrentThreadId = GetCurrentThreadId();
    ++dword_B3F67C;
    v9 = 0;
    for ( dword_B3F678 = CurrentThreadId; v9 < *((_WORD *)this + 0xA); ++v9 )
    {
      v10 = (int)*(this + 4);
      v11 = *(_DWORD *)(v10 + 4 * v9);
      if ( v11 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 0x50))(*(_DWORD *)(v10 + 4 * v9)) )
        {
          v12 = (unsigned int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x18))(v11, a3);
          NiNode_AddNiExtraData((const void **)&a2->vtbl, a3, v12);
        }
      }
    }
    if ( dword_B3F67C-- == 1 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
  }
  v14 = (int)*(this + 3);
  if ( v14 )
  {
    v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x18))(v14, a3);
    m_controller = a2->members.m_controller;
    v17 = (NiInterpController *)v15;
    if ( m_controller != (NiInterpController *)v15 )
    {
      if ( m_controller )
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) )
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1);
      }
      a2->members.m_controller = v17;
      if ( v17 )
        InterlockedIncrement((volatile LONG *)&v17->member);
    }
  }
}
