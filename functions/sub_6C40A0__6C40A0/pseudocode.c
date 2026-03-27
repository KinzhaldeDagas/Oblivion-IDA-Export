void __thiscall sub_6C40A0(int **this, unsigned int size)
{
  int **v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ecx
  unsigned int *v5; // eax
  int *v6; // ebp
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int *v10; // esi
  int v11; // esi
  bool v12; // cf
  int *v13; // eax
  unsigned int v14; // ebx
  int v16; // [esp+18h] [ebp-14h]
  int *v17; // [esp+1Ch] [ebp-10h]

  v2 = this;
  v3 = size;
  if ( (int *)size != *(this + 1) )
  {
    if ( size )
    {
      v4 = (unsigned __int64)size >> 0x1E != 0 ? 0xFFFFFFFF : 4 * size;
      v5 = (unsigned int *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
      if ( v5 )
      {
        v6 = (int *)(v5 + 1);
        *v5 = size;
        ArrayConstructor(
          v5 + 1,
          4u,
          size,
          (int)Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))sub_7016A0);
      }
      else
      {
        v6 = 0;
      }
      v7 = 0;
      v17 = v6;
      v16 = 0;
      if ( v2[2] )
      {
        do
        {
          v8 = v7;
          v9 = v6[v7];
          v10 = &(*v2)[v7];
          if ( v9 != *v10 )
          {
            if ( v9 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
                (**(void (__thiscall ***)(int, int))v9)(v9, 1);
            }
            v11 = *v10;
            v6[v8] = v11;
            if ( v11 )
              InterlockedIncrement((volatile LONG *)(v11 + 4));
          }
          v7 = v16 + 1;
          v12 = ++v16 < (unsigned int)*(this + 2);
          v2 = this;
        }
        while ( v12 );
        v3 = size;
      }
    }
    else
    {
      v17 = 0;
    }
    v13 = *v2;
    if ( *v2 )
    {
      v14 = (unsigned int)(v13 + 0xFFFFFFFF);
      _LN21(v13, 4u, v13[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v14);
    }
    *v2 = v17;
    v2[1] = (int *)v3;
  }
}
