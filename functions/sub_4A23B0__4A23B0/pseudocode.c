void __thiscall sub_4A23B0(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  unsigned int *v8; // eax
  _DWORD *v9; // ecx
  void (__thiscall ***v10)(_DWORD, int); // edi
  volatile LONG *v11; // esi
  unsigned int v13; // [esp+14h] [ebp-18h] BYREF
  int v14; // [esp+18h] [ebp-14h] BYREF
  unsigned int *v15; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+28h] [ebp-4h]

  EnterCriticalSection(&CriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B353FC;
  dword_B353F8 = CurrentThreadId;
  v3 = (_DWORD *)*(this + 2);
  if ( v3[3] )
  {
    v4 = v3[1];
    v5 = 0;
    if ( v4 )
    {
      v6 = (_DWORD *)v3[2];
      v7 = v6;
      while ( !*v7 )
      {
        ++v5;
        ++v7;
        if ( v5 >= v4 )
          goto LABEL_6;
      }
      v8 = (unsigned int *)v6[v5];
    }
    else
    {
LABEL_6:
      v8 = 0;
    }
    v15 = v8;
    while ( v15 )
    {
      v14 = 0;
      v13 = 0;
      v9 = (_DWORD *)*(this + 2);
      v16 = 0;
      sub_7B2600(v9, &v15, &v14, &v13);
      v10 = (void (__thiscall ***)(_DWORD, int))v13;
      v11 = (volatile LONG *)(v13 + 4);
      if ( *(_DWORD *)(v13 + 4) == 2 )
        NiTMap_RemoveAt((_DWORD *)*(this + 2), v14);
      v16 = 0xFFFFFFFF;
      if ( !InterlockedDecrement(v11) )
        (**v10)(v10, 1);
    }
  }
  if ( dword_B353FC-- == 1 )
    dword_B353F8 = 0;
  LeaveCriticalSection(&CriticalSection);
}
