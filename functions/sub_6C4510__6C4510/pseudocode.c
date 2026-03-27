void __thiscall sub_6C4510(unsigned __int16 *this, unsigned int a2)
{
  unsigned __int16 v4; // ax
  int v5; // ecx
  int v6; // ebx
  void (__thiscall ***v7)(_DWORD, int); // edi
  int *v8; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // ebx
  unsigned __int16 v12; // ax
  bool v13; // zf
  int v14; // ebp
  int v15; // edi
  int v16; // ebx
  int *v17; // ebp
  int v18; // edi
  unsigned __int16 i; // bx
  int v20; // edx
  int v21; // edi
  _DWORD *v22; // ebp
  unsigned int v23; // esi
  int *v24; // [esp+14h] [ebp-10h]
  int v25; // [esp+28h] [ebp+4h]
  unsigned __int16 v26; // [esp+28h] [ebp+4h]

  if ( a2 != *(this + 4) )
  {
    v4 = *(this + 5);
    if ( a2 < v4 )
    {
      v5 = (unsigned __int16)a2;
      v25 = (unsigned __int16)a2;
      if ( (unsigned __int16)a2 < v4 )
      {
        do
        {
          v6 = *((_DWORD *)this + 1) + 4 * (unsigned __int16)v5;
          if ( *(_DWORD *)v6 )
          {
            v7 = *(void (__thiscall ****)(_DWORD, int))v6;
            if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v6 + 4)) )
            {
              if ( v7 )
                (**v7)(v7, 1);
            }
            v5 = v25;
            *(_DWORD *)v6 = 0;
            --*(this + 6);
          }
          v25 = ++v5;
        }
        while ( (unsigned __int16)v5 < *(this + 5) );
      }
      *(this + 5) = a2;
    }
    v8 = *((int **)this + 1);
    v24 = v8;
    *(this + 4) = a2;
    if ( a2 )
    {
      v9 = (unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2;
      v10 = (_DWORD *)FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
      if ( v10 )
      {
        v11 = v10 + 1;
        *v10 = (unsigned __int16)a2;
        ArrayConstructor(
          v10 + 1,
          4u,
          (unsigned __int16)a2,
          (int)Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))sub_7016A0);
      }
      else
      {
        v11 = 0;
      }
      v12 = 0;
      v13 = *(this + 5) == 0;
      *((_DWORD *)this + 1) = v11;
      v26 = 0;
      if ( !v13 )
      {
        do
        {
          v14 = *((_DWORD *)this + 1);
          v15 = v12;
          v16 = *(_DWORD *)(v14 + v15 * 4);
          v17 = (int *)(v15 * 4 + v14);
          if ( v16 != v24[v15] )
          {
            if ( v16 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
                (**(void (__thiscall ***)(int, int))v16)(v16, 1);
            }
            v18 = v24[v15];
            *v17 = v18;
            if ( v18 )
              InterlockedIncrement((volatile LONG *)(v18 + 4));
          }
          v12 = ++v26;
        }
        while ( v26 < *(this + 5) );
      }
      for ( i = *(this + 5); i < *(this + 4); ++i )
      {
        v20 = *((_DWORD *)this + 1);
        v21 = *(_DWORD *)(v20 + 4 * i);
        v22 = (_DWORD *)(v20 + 4 * i);
        if ( v21 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) )
            (**(void (__thiscall ***)(int, int))v21)(v21, 1);
          *v22 = 0;
        }
      }
      v8 = v24;
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    if ( v8 )
    {
      v23 = (unsigned int)(v8 + 0xFFFFFFFF);
      _LN21(v8, 4u, v8[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v23);
    }
  }
}
