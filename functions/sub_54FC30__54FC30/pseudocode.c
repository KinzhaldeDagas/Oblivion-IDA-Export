void __thiscall sub_54FC30(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // ebx
  unsigned int v9; // eax
  int v10; // ebp
  _DWORD *v11; // edx
  unsigned int *v12; // eax
  void (__stdcall *v13)(volatile LONG *); // ebp
  signed int v14; // eax
  unsigned int v16; // [esp+14h] [ebp-20h] BYREF
  unsigned int v17; // [esp+18h] [ebp-1Ch]
  unsigned int *v18; // [esp+1Ch] [ebp-18h] BYREF
  DWORD TickCount; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h] BYREF
  int v21; // [esp+30h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  v16 = 0;
  v21 = 1;
  v17 = 0;
  TickCount = GetTickCount();
  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  dword_B39C78 = CurrentThreadId;
  v7 = *(this + 2);
  v8 = this + 1;
  v9 = 0;
  if ( v7 )
  {
    v10 = *(this + 3);
    v11 = (_DWORD *)v8[2];
    while ( !*v11 )
    {
      ++v9;
      ++v11;
      if ( v9 >= v7 )
        goto LABEL_5;
    }
    v12 = *(unsigned int **)(v10 + 4 * v9);
  }
  else
  {
LABEL_5:
    v12 = 0;
  }
  v18 = v12;
  if ( !v12 )
    goto LABEL_29;
  v13 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
  do
  {
    sub_7B2600(v8, &v18, &v20, &v16);
    v4 = v16;
    if ( v16 == a3 )
      continue;
    if ( a2 )
    {
      if ( a2 != 1 )
        continue;
      v14 = sub_556650(*(_DWORD **)(v16 + 8));
    }
    else
    {
      v14 = sub_5564E0(*(_DWORD **)(v16 + 8));
    }
    if ( v14 )
    {
      if ( !v5 )
        goto LABEL_20;
      if ( TickCount - *(_DWORD *)(v4 + 0xC) > TickCount - *(_DWORD *)(v5 + 0xC) && v5 != v4 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(unsigned int, int))v5)(v5, 1);
LABEL_20:
        v5 = v4;
        v17 = v4;
        v13((volatile LONG *)(v4 + 4));
      }
    }
  }
  while ( v18 );
  if ( v5 )
  {
    if ( NiTryEnterCS(&stru_B39C80, (int)"BSFaceGenModelMap::FreeLRUData()") )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          sub_559C40(*(volatile LONG **)(v5 + 8));
      }
      else
      {
        sub_559BA0(*(volatile LONG **)(v5 + 8));
      }
      NiLeaveCriticalSection_0(&stru_B39C80);
    }
  }
LABEL_29:
  if ( dword_B39C7C-- == 1 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
  LOBYTE(v21) = 0;
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(unsigned int, int))v5)(v5, 1);
  }
  v21 = 0xFFFFFFFF;
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(unsigned int, int))v4)(v4, 1);
  }
}
