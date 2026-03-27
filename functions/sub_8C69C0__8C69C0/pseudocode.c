void __thiscall sub_8C69C0(int **this, int a2)
{
  unsigned int v4; // ebp
  int *v5; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  int *v10; // ebp
  unsigned int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebp
  int v15; // ebx
  int *v16; // edi
  int v17; // eax
  bool v18; // cf
  unsigned int v19; // ebp
  int v20; // eax
  int v21; // edi
  _DWORD *v22; // ebx
  unsigned int v23; // esi
  int *v24; // [esp+14h] [ebp-14h] BYREF
  int v25; // [esp+18h] [ebp-10h]
  int v26; // [esp+24h] [ebp-4h]
  int *v27; // [esp+2Ch] [ebp+4h]

  if ( (int *)a2 != *(this + 2) )
  {
    if ( a2 < (unsigned int)*(this + 3) )
    {
      v4 = a2;
      do
      {
        v5 = &(*(this + 1))[2 * v4];
        if ( *v5 || v5[1] )
        {
          v24 = 0;
          v25 = 0;
          v26 = 0;
          sub_8C6880(v5, (int *)&v24);
          *(this + 4) = (int *)((char *)*(this + 4) + 0xFFFFFFFF);
          v26 = 0xFFFFFFFF;
        }
        ++v4;
      }
      while ( v4 < (unsigned int)*(this + 3) );
      *(this + 3) = (int *)a2;
    }
    v7 = *(this + 1);
    v27 = v7;
    *(this + 2) = (int *)a2;
    if ( a2 )
    {
      v8 = (unsigned __int64)(unsigned int)a2 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a2;
      v9 = (int *)FormHeapAlloc(__CFADD__(v8, 4) ? 0xFFFFFFFF : v8 + 4);
      v24 = v9;
      v26 = 1;
      if ( v9 )
      {
        v10 = v9 + 1;
        *v9 = a2;
        ArrayConstructor(
          v9 + 1,
          8u,
          a2,
          (int)Concurrency::details::StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>::Reinitialize,
          (void (__thiscall *)(void *))sub_7016A0);
      }
      else
      {
        v10 = 0;
      }
      v11 = 0;
      v12 = *(this + 3) == 0;
      v26 = 0xFFFFFFFF;
      *(this + 1) = v10;
      v24 = 0;
      if ( !v12 )
      {
        do
        {
          v13 = (int)*(this + 1);
          v14 = 2 * v11;
          v15 = *(_DWORD *)(v13 + 8 * v11);
          v16 = (int *)(8 * v11 + v13);
          if ( v15 != v27[2 * v11] )
          {
            if ( v15 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
                (**(void (__thiscall ***)(int, int))v15)(v15, 1);
            }
            v17 = v27[v14];
            *v16 = v17;
            if ( v17 )
              InterlockedIncrement((volatile LONG *)(v17 + 4));
          }
          v11 = (unsigned int)v24 + 1;
          v16[1] = v27[v14 + 1];
          v18 = v11 < (unsigned int)*(this + 3);
          v24 = (int *)v11;
        }
        while ( v18 );
      }
      v19 = (unsigned int)*(this + 3);
      if ( v19 < (unsigned int)*(this + 2) )
      {
        v24 = 0;
        v25 = 0;
        do
        {
          v20 = (int)*(this + 1);
          v21 = *(_DWORD *)(v20 + 8 * v19);
          v22 = (_DWORD *)(v20 + 8 * v19);
          v26 = 2;
          if ( v21 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
              (**(void (__thiscall ***)(int, int))v21)(v21, 1);
            *v22 = 0;
          }
          ++v19;
          v22[1] = 0;
          v18 = v19 < (unsigned int)*(this + 2);
          v26 = 0xFFFFFFFF;
        }
        while ( v18 );
      }
      v7 = v27;
    }
    else
    {
      *(this + 1) = 0;
    }
    if ( v7 )
    {
      v23 = (unsigned int)(v7 + 0xFFFFFFFF);
      _LN21(v7, 8u, v7[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v23);
    }
  }
}
