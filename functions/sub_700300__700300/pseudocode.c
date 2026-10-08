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

  sub_700770(this, (int)a2, (_DWORD **)a3); /*0x700310*/
  v4 = *(_DWORD *)(a3 + 8); /*0x700315*/
  if ( v4 == 1 ) /*0x70031b*/
  {
    NiObjectNET_SetName(a2, *(this + 2)); /*0x700323*/
  }
  else if ( v4 == 2 ) /*0x70032d*/
  {
    v5 = *(this + 2); /*0x70032f*/
    if ( v5 ) /*0x700334*/
    {
      v6 = strlen(v5) + 2; /*0x70034b*/
      v7 = (char *)FormHeapAlloc(v6); /*0x700358*/
      strcpy_s(v7, v6, *(this + 2)); /*0x70035c*/
      v7[v6 - 2] = *(_BYTE *)(a3 + 0xC); /*0x70036c*/
      v7[v6 - 1] = 0; /*0x700370*/
      NiObjectNET_SetName(a2, v7); /*0x700375*/
      FormHeapFree((unsigned int)v7); /*0x70037b*/
    }
  }
  if ( *((_WORD *)this + 0xA) ) /*0x700383*/
  {
    EnterCriticalSection(&unk_B3F600); /*0x70038f*/
    CurrentThreadId = GetCurrentThreadId(); /*0x700395*/
    ++unk_B3F67C; /*0x70039b*/
    v9 = 0; /*0x7003a2*/
    for ( unk_B3F678 = CurrentThreadId; v9 < *((_WORD *)this + 0xA); ++v9 ) /*0x7003a9*/
    {
      v10 = (int)*(this + 4); /*0x7003b0*/
      v11 = *(_DWORD *)(v10 + 4 * v9); /*0x7003b6*/
      if ( v11 ) /*0x7003bb*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 0x50))(*(_DWORD *)(v10 + 4 * v9)) ) /*0x7003c4*/
        {
          v12 = (unsigned int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x18))(v11, a3); /*0x7003d2*/
          NiObjectNET_AddExtraData((const void **)&a2->vtbl, a3, v12); /*0x7003d9*/
        }
      }
    }
    if ( unk_B3F67C-- == 1 ) /*0x7003e7*/
      unk_B3F678 = 0; /*0x7003f0*/
    LeaveCriticalSection(&unk_B3F600); /*0x7003ff*/
  }
  v14 = (int)*(this + 3); /*0x700405*/
  if ( v14 ) /*0x70040a*/
  {
    v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x18))(v14, a3); /*0x700412*/
    m_controller = a2->members.m_controller; /*0x700418*/
    v17 = (NiInterpController *)v15; /*0x70041b*/
    if ( m_controller != (NiInterpController *)v15 ) /*0x70041f*/
    {
      if ( m_controller ) /*0x700423*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) ) /*0x700429*/
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1); /*0x70043f*/
      }
      a2->members.m_controller = v17; /*0x700447*/
      if ( v17 ) /*0x70044a*/
        InterlockedIncrement((volatile LONG *)&v17->member); /*0x700450*/
    }
  }
}
