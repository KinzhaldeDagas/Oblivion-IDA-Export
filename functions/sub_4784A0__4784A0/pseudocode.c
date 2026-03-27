void __thiscall sub_4784A0(_WORD *this)
{
  __int16 v2; // ax
  __int16 v3; // cx
  unsigned __int16 v4; // di
  unsigned __int16 v5; // bx
  int v6; // eax
  int v7; // edx
  unsigned __int16 v8; // ax
  int *v9; // ebx
  int v10; // esi
  unsigned int v11; // ecx
  int *v12; // eax
  _DWORD *v13; // edi
  unsigned __int16 v14; // ax
  bool v15; // zf
  int v16; // edi
  int v17; // esi
  int v18; // ebx
  int *v19; // edi
  int v20; // esi
  int *v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+18h] [ebp-10h]

  v2 = *(this + 6);
  v3 = *(this + 5);
  if ( v2 != v3 )
  {
    if ( v2 )
    {
      v4 = 0;
      v5 = 0;
      if ( v3 )
      {
        do
        {
          v6 = *((_DWORD *)this + 1);
          v7 = *(_DWORD *)(v6 + 4 * v4);
          if ( v7 )
          {
            if ( *(_DWORD *)(v6 + 4 * v5) != v7 )
              sub_55E2A0((int *)(v6 + 4 * v5), (int *)(v6 + 4 * v4));
            ++v5;
          }
          ++v4;
        }
        while ( v4 < *(this + 5) );
      }
    }
    v8 = *(this + 6);
    v9 = *((int **)this + 1);
    v21 = v9;
    *(this + 5) = v8;
    *(this + 4) = v8;
    if ( v8 )
    {
      v10 = v8;
      v11 = (unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8;
      v12 = (int *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      v13 = 0;
      if ( v12 )
      {
        v13 = v12 + 1;
        *v12 = v10;
        ArrayConstructor(
          v12 + 1,
          4u,
          v10,
          (int)Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))sub_7016A0);
      }
      v14 = 0;
      v15 = *(this + 5) == 0;
      *((_DWORD *)this + 1) = v13;
      v22 = 0;
      if ( !v15 )
      {
        do
        {
          v16 = *((_DWORD *)this + 1);
          v17 = v14;
          v18 = *(_DWORD *)(v16 + v17 * 4);
          v19 = (int *)(v17 * 4 + v16);
          if ( v18 != v21[v17] )
          {
            if ( v18 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
                (**(void (__thiscall ***)(int, int))v18)(v18, 1);
            }
            v20 = v21[v17];
            *v19 = v20;
            if ( v20 )
              InterlockedIncrement((volatile LONG *)(v20 + 4));
          }
          v14 = ++v22;
        }
        while ( (unsigned __int16)v22 < *(this + 5) );
        v9 = v21;
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    if ( v9 )
    {
      _LN21(v9, 4u, v9[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree((unsigned int)(v9 + 0xFFFFFFFF));
    }
  }
}
