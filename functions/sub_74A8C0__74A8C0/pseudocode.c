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

  v3 = *(this + 4); /*0x74a8c4*/
  v4 = a2; /*0x74a8c8*/
  if ( a2 != v3 )
  {
    v5 = *(this + 5); /*0x74a8d4*/
    if ( a2 < v5 ) /*0x74a8e0*/
    {
      v6 = a2; /*0x74a8e5*/
      if ( (unsigned __int16)a2 < v5 ) /*0x74a8e8*/
      {
        do /*0x74a939*/
        {
          v7 = *((_DWORD *)this + 1) + 4 * v6; /*0x74a8fa*/
          if ( *(_DWORD *)v7 ) /*0x74a8f6*/
          {
            v8 = *(void (__thiscall ****)(_DWORD, int))v7; /*0x74a904*/
            if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v7 + 4)) ) /*0x74a90e*/
            {
              if ( v8 ) /*0x74a91a*/
                (**v8)(v8, 1); /*0x74a924*/
            }
            *(_DWORD *)v7 = 0; /*0x74a926*/
            --*(this + 6); /*0x74a92c*/
          }
          ++v6; /*0x74a932*/
        }
        while ( v6 < *(this + 5) ); /*0x74a939*/
        v4 = a2; /*0x74a93b*/
      }
      *(this + 5) = v4; /*0x74a93f*/
    }
    v9 = *((_DWORD *)this + 1); /*0x74a945*/
    v31 = v9; /*0x74a948*/
    *(this + 4) = v4; /*0x74a94c*/
    if ( v4 )
    {
      v10 = (unsigned __int16)v4; /*0x74a956*/
      v11 = (unsigned __int64)(unsigned __int16)v4 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v4;
      v12 = (int *)FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      if ( v12 ) /*0x74a982*/
      {
        v13 = v12 + 1; /*0x74a98a*/
        *v12 = v10; /*0x74a990*/
        sub_401080(v12 + 1, 4, v10, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release); /*0x74a992*/
      }
      else
      {
        v13 = 0; /*0x74a999*/
      }
      v14 = 0; /*0x74a99b*/
      v15 = *(this + 5) == 0; /*0x74a99d*/
      *((_DWORD *)this + 1) = v13; /*0x74a9a1*/
      v30 = 0; /*0x74a9a4*/
      if ( !v15 ) /*0x74a9a8*/
      {
        do /*0x74aa0f*/
        {
          v16 = *((_DWORD *)this + 1); /*0x74a9b0*/
          v17 = 4 * v14; /*0x74a9bc*/
          v18 = *(_DWORD *)(v16 + v17); /*0x74a9be*/
          v19 = (_DWORD *)(v17 + v16); /*0x74a9c1*/
          if ( v18 != *(_DWORD *)(v17 + v31) ) /*0x74a9c6*/
          {
            if ( v18 ) /*0x74a9ca*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x74a9d0*/
                (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x74a9e7*/
            }
            v20 = *(_DWORD *)(v17 + v31); /*0x74a9ed*/
            *v19 = v20; /*0x74a9f2*/
            if ( v20 ) /*0x74a9f4*/
              InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x74a9fa*/
          }
          v14 = ++v30; /*0x74aa04*/
        }
        while ( (unsigned __int16)v30 < *(this + 5) ); /*0x74aa0f*/
        v9 = v31; /*0x74aa11*/
      }
      v21 = *(this + 5); /*0x74aa15*/
      if ( v21 < *(this + 4) ) /*0x74aa1d*/
      {
        do /*0x74aa5a*/
        {
          v22 = *((_DWORD *)this + 1); /*0x74aa20*/
          v23 = *(_DWORD *)(v22 + 4 * v21); /*0x74aa26*/
          v24 = (_DWORD *)(v22 + 4 * v21); /*0x74aa2b*/
          if ( v23 ) /*0x74aa2e*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x74aa34*/
              (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x74aa4a*/
            *v24 = 0; /*0x74aa4c*/
          }
          ++v21; /*0x74aa53*/
        }
        while ( v21 < *(this + 4) ); /*0x74aa5a*/
        v9 = v31; /*0x74aa5c*/
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x74aa62*/
    }
    if ( v9 ) /*0x74aa6b*/
    {
      v25 = *(_DWORD *)(v9 - 4); /*0x74aa6d*/
      v26 = v9 - 4; /*0x74aa70*/
      v27 = v9 + 4 * v25; /*0x74aa73*/
      v28 = v25 - 1; /*0x74aa77*/
      if ( v28 >= 0 ) /*0x74aa7e*/
      {
        do /*0x74aaa9*/
        {
          v29 = *(_DWORD *)(v27 - 4); /*0x74aa80*/
          v27 -= 4; /*0x74aa83*/
          if ( v29 ) /*0x74aa88*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x74aa8e*/
              (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x74aaa4*/
          }
          --v28; /*0x74aaa6*/
        }
        while ( v28 >= 0 ); /*0x74aaa9*/
        v26 = v9 - 4; /*0x74aaab*/
      }
      FormHeapFree(v26); /*0x74aab0*/
    }
  }
}
