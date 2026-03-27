void __thiscall sub_74A8C0(unsigned __int16 *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // bp
  int v7; // ebx
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v9; // ebp
  int v10; // esi
  unsigned int v11; // ecx
  int *v12; // eax
  _DWORD *v13; // ebx
  unsigned __int16 v14; // ax
  bool v15; // zf
  int v16; // ebx
  int v17; // esi
  int v18; // ebp
  _DWORD *v19; // ebx
  int v20; // esi
  unsigned __int16 v21; // bx
  int v22; // edx
  int v23; // esi
  _DWORD *v24; // ebp
  int v25; // ebx
  unsigned int v26; // eax
  int v27; // edi
  int v28; // ebx
  int v29; // esi
  int v30; // [esp+8h] [ebp-4h]
  int v31; // [esp+10h] [ebp+4h]

  v3 = *(this + 4);
  v4 = a2;
  if ( a2 != v3 )
  {
    v5 = *(this + 5);
    if ( a2 < v5 )
    {
      v6 = a2;
      if ( (unsigned __int16)a2 < v5 )
      {
        do
        {
          v7 = *((_DWORD *)this + 1) + 4 * v6;
          if ( *(_DWORD *)v7 )
          {
            v8 = *(void (__thiscall ****)(_DWORD, int))v7;
            if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v7 + 4)) )
            {
              if ( v8 )
                (**v8)(v8, 1);
            }
            *(_DWORD *)v7 = 0;
            --*(this + 6);
          }
          ++v6;
        }
        while ( v6 < *(this + 5) );
        v4 = a2;
      }
      *(this + 5) = v4;
    }
    v9 = *((_DWORD *)this + 1);
    v31 = v9;
    *(this + 4) = v4;
    if ( v4 )
    {
      v10 = (unsigned __int16)v4;
      v11 = (unsigned __int64)(unsigned __int16)v4 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v4;
      v12 = (int *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      if ( v12 )
      {
        v13 = v12 + 1;
        *v12 = v10;
        sub_401080(v12 + 1, 4, v10, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release);
      }
      else
      {
        v13 = 0;
      }
      v14 = 0;
      v15 = *(this + 5) == 0;
      *((_DWORD *)this + 1) = v13;
      v30 = 0;
      if ( !v15 )
      {
        do
        {
          v16 = *((_DWORD *)this + 1);
          v17 = 4 * v14;
          v18 = *(_DWORD *)(v16 + v17);
          v19 = (_DWORD *)(v17 + v16);
          if ( v18 != *(_DWORD *)(v17 + v31) )
          {
            if ( v18 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
                (**(void (__thiscall ***)(int, int))v18)(v18, 1);
            }
            v20 = *(_DWORD *)(v17 + v31);
            *v19 = v20;
            if ( v20 )
              InterlockedIncrement((volatile LONG *)(v20 + 4));
          }
          v14 = ++v30;
        }
        while ( (unsigned __int16)v30 < *(this + 5) );
        v9 = v31;
      }
      v21 = *(this + 5);
      if ( v21 < *(this + 4) )
      {
        do
        {
          v22 = *((_DWORD *)this + 1);
          v23 = *(_DWORD *)(v22 + 4 * v21);
          v24 = (_DWORD *)(v22 + 4 * v21);
          if ( v23 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
              (**(void (__thiscall ***)(int, int))v23)(v23, 1);
            *v24 = 0;
          }
          ++v21;
        }
        while ( v21 < *(this + 4) );
        v9 = v31;
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    if ( v9 )
    {
      v25 = *(_DWORD *)(v9 - 4);
      v26 = v9 - 4;
      v27 = v9 + 4 * v25;
      v28 = v25 - 1;
      if ( v28 >= 0 )
      {
        do
        {
          v29 = *(_DWORD *)(v27 - 4);
          v27 -= 4;
          if ( v29 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) )
              (**(void (__thiscall ***)(int, int))v29)(v29, 1);
          }
          --v28;
        }
        while ( v28 >= 0 );
        v26 = v9 - 4;
      }
      FormHeapFree(v26);
    }
  }
}
