int __thiscall sub_54F890(char *this, int a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  DWORD CurrentThreadId; // eax
  char *v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // edx
  unsigned int *v10; // eax
  int v11; // ebp
  signed int v12; // eax
  unsigned int v15; // [esp+14h] [ebp-14h] BYREF
  unsigned int *v16; // [esp+18h] [ebp-10h] BYREF
  unsigned int v17; // [esp+24h] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v15 = 0;
  v17 = 0;
  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  v6 = this + 4;
  dword_B39C78 = CurrentThreadId;
  v7 = *((_DWORD *)v6 + 1);
  v8 = 0;
  if ( v7 )
  {
    v9 = *((_DWORD **)v6 + 2);
    while ( !*v9 )
    {
      ++v8;
      ++v9;
      if ( v8 >= v7 )
        goto LABEL_5;
    }
    v10 = *(unsigned int **)(*((_DWORD *)v6 + 2) + 4 * v8);
  }
  else
  {
LABEL_5:
    v10 = 0;
  }
  v16 = v10;
  if ( v10 )
  {
    v11 = a2;
    while ( 1 )
    {
      sub_7B2600(v6, &v16, &a2, &v15);
      v3 = v15;
      if ( !v11 )
        break;
      if ( v11 == 1 )
      {
        v12 = sub_556650(*(_DWORD **)(v15 + 8));
LABEL_13:
        v4 += v12;
      }
      if ( !v16 )
        goto LABEL_15;
    }
    v12 = sub_5564E0(*(_DWORD **)(v15 + 8));
    goto LABEL_13;
  }
LABEL_15:
  if ( dword_B39C7C-- == 1 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
  v17 = 0xFFFFFFFF;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(unsigned int, int))v3)(v3, 1);
  }
  return v4;
}
