char __thiscall sub_6FF570(const void **this, int a2)
{
  DWORD CurrentThreadId; // eax
  __int16 v5; // ax
  _DWORD *v6; // eax
  bool v7; // zf
  unsigned __int16 v8; // ax
  void *v9; // ebx
  int i; // eax
  int v11; // edx
  unsigned __int16 v12; // bx
  int v13; // ebp
  NiAVObject *v14; // edi
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  size_t v18; // [esp-10h] [ebp-18h]

  if ( !a2 )
    return 0;
  InterlockedIncrement((volatile LONG *)(a2 + 4));
  EnterCriticalSection(&stru_B3F600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F67C;
  dword_B3F678 = CurrentThreadId;
  v5 = *((_WORD *)this + 0xB);
  if ( v5 )
  {
    if ( *((_WORD *)this + 0xA) == v5 )
    {
      v8 = 2 * v5 + 1;
      *((_WORD *)this + 0xB) = v8;
      v9 = (void *)FormHeapAlloc((unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8);
      LODWORD(v18) = 4 * *((unsigned __int16 *)this + 0xA);
      memcpy(v9, *(this + 4), v18);
      FormHeapFree((unsigned int)*(this + 4));
      *(this + 4) = v9;
    }
    *((_DWORD *)*(this + 4) + (unsigned __int16)(*((_WORD *)this + 0xA))++) = a2;
    for ( i = *((unsigned __int16 *)this + 0xA);
          (unsigned __int16)i < *((_WORD *)this + 0xB);
          *((_DWORD *)*(this + 4) + v11) = 0 )
    {
      v11 = (unsigned __int16)i++;
    }
    v12 = *((_WORD *)this + 0xA) - 1;
    if ( *((_WORD *)this + 0xA) == 1 )
    {
LABEL_15:
      v7 = dword_B3F67C-- == 1;
      if ( v7 )
        dword_B3F678 = 0;
      LeaveCriticalSection(&stru_B3F600);
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v13 = 4 * v12;
        v14 = sub_452A60(*(Atmosphere **)((char *)*(this + 4) + v13));
        v15 = strcmp((const char *)sub_452A60(*(Atmosphere **)((char *)*(this + 4) + v13 - 4)), (const char *)v14);
        if ( !v15 )
          break;
        if ( v15 > 0 )
        {
          v16 = (int)*(this + 4);
          v17 = *(_DWORD *)(v16 + v13 - 4);
          *(_DWORD *)(v16 + 4 * v12 - 4) = *(_DWORD *)(v16 + 4 * v12);
          --v12;
          *(_DWORD *)((char *)*(this + 4) + v13) = v17;
          if ( v12 )
            continue;
        }
        goto LABEL_15;
      }
      sub_6FF480(this, v12);
      v7 = dword_B3F67C-- == 1;
      if ( v7 )
        dword_B3F678 = 0;
      LeaveCriticalSection(&stru_B3F600);
      return 0;
    }
  }
  else
  {
    *((_WORD *)this + 0xB) = 1;
    *((_WORD *)this + 0xA) = 1;
    v6 = (_DWORD *)FormHeapAlloc(4u);
    *(this + 4) = v6;
    *v6 = a2;
    v7 = dword_B3F67C-- == 1;
    if ( v7 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return 1;
  }
}
