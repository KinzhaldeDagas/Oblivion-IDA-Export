void __thiscall sub_8BCA30(int **this, int *size)
{
  int v3; // ebp
  unsigned int v4; // ecx
  int v5; // ebx
  void (__thiscall ***v6)(_DWORD, int); // edi
  int *v7; // edi
  unsigned int v8; // ecx
  int *v9; // eax
  int *v10; // ebx
  unsigned int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  int v15; // ebp
  int *v16; // edi
  int v17; // ebx
  unsigned int v18; // ebx
  int v19; // ecx
  int v20; // edi
  _DWORD *v21; // ebp
  int *v22; // [esp+14h] [ebp-10h]
  unsigned int sizea; // [esp+28h] [ebp+4h]

  v3 = (int)size;
  if ( size != *(this + 2) )
  {
    if ( size < *(this + 3) )
    {
      v4 = (unsigned int)size;
      do
      {
        v5 = (int)&(*(this + 1))[v4];
        if ( *(_DWORD *)v5 )
        {
          v6 = *(void (__thiscall ****)(_DWORD, int))v5;
          if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v5 + 4)) )
          {
            if ( v6 )
              (**v6)(v6, 1);
          }
          v4 = (unsigned int)size;
          *(_DWORD *)v5 = 0;
          *(this + 4) = (int *)((char *)*(this + 4) + 0xFFFFFFFF);
        }
        size = (int *)++v4;
      }
      while ( v4 < (unsigned int)*(this + 3) );
      *(this + 3) = (int *)v3;
    }
    v7 = *(this + 1);
    v22 = v7;
    *(this + 2) = (int *)v3;
    if ( v3 )
    {
      v8 = (unsigned __int64)(unsigned int)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3;
      v9 = (int *)FormHeapAlloc(__CFADD__(v8, 4) ? 0xFFFFFFFF : v8 + 4);
      if ( v9 )
      {
        v10 = v9 + 1;
        *v9 = v3;
        ArrayConstructor(
          v9 + 1,
          4u,
          v3,
          (int)Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))sub_7016A0);
      }
      else
      {
        v10 = 0;
      }
      v11 = 0;
      v12 = *(this + 3) == 0;
      *(this + 1) = v10;
      sizea = 0;
      if ( !v12 )
      {
        do
        {
          v13 = (int)*(this + 1);
          v14 = v11;
          v15 = *(_DWORD *)(v13 + 4 * v11);
          v16 = (int *)(4 * v11 + v13);
          if ( v15 != v22[v11] )
          {
            if ( v15 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
                (**(void (__thiscall ***)(int, int))v15)(v15, 1);
            }
            v17 = v22[v14];
            *v16 = v17;
            if ( v17 )
              InterlockedIncrement((volatile LONG *)(v17 + 4));
          }
          v11 = ++sizea;
        }
        while ( sizea < (unsigned int)*(this + 3) );
        v7 = v22;
      }
      v18 = (unsigned int)*(this + 3);
      if ( v18 < (unsigned int)*(this + 2) )
      {
        do
        {
          v19 = (int)*(this + 1);
          v20 = *(_DWORD *)(v19 + 4 * v18);
          v21 = (_DWORD *)(v19 + 4 * v18);
          if ( v20 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
              (**(void (__thiscall ***)(int, int))v20)(v20, 1);
            *v21 = 0;
          }
          ++v18;
        }
        while ( v18 < (unsigned int)*(this + 2) );
        v7 = v22;
      }
    }
    else
    {
      *(this + 1) = 0;
    }
    if ( v7 )
    {
      _LN21(v7, 4u, v7[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree((unsigned int)(v7 + 0xFFFFFFFF));
    }
  }
}
