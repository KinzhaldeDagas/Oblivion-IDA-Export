void __thiscall sub_4360A0(unsigned __int16 *this, unsigned int a2)
{
  unsigned __int16 v4; // ax
  int v5; // ecx
  int v6; // ebx
  void (__thiscall ***v7)(_DWORD, int); // edi
  char *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // ebx
  unsigned __int16 v12; // ax
  bool v13; // zf
  int v14; // ebp
  int v15; // edi
  int v16; // ebx
  _DWORD *v17; // ebp
  int v18; // edi
  unsigned __int16 i; // bx
  int v20; // edx
  int v21; // edi
  _DWORD *v22; // ebp
  unsigned int v23; // esi
  char *v24; // [esp+14h] [ebp-10h]
  int v25; // [esp+28h] [ebp+4h]
  unsigned __int16 v26; // [esp+28h] [ebp+4h]

  if ( a2 != *(this + 4) )
  {
    v4 = *(this + 5); /*0x4360d7*/
    if ( a2 < v4 ) /*0x4360e0*/
    {
      v5 = (unsigned __int16)a2; /*0x4360e5*/
      v25 = (unsigned __int16)a2; /*0x4360e8*/
      if ( (unsigned __int16)a2 < v4 ) /*0x4360ec*/
      {
        do /*0x436151*/
        {
          v6 = *((_DWORD *)this + 1) + 4 * (unsigned __int16)v5; /*0x4360f6*/
          if ( *(_DWORD *)v6 ) /*0x4360fb*/
          {
            v7 = *(void (__thiscall ****)(_DWORD, int))v6; /*0x436108*/
            if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v6 + 8)) ) /*0x436116*/
            {
              if ( v7 ) /*0x436122*/
                (**v7)(v7, 1); /*0x43612c*/
            }
            v5 = v25; /*0x43612e*/
            *(_DWORD *)v6 = 0; /*0x436132*/
            --*(this + 6); /*0x436138*/
          }
          v25 = ++v5; /*0x43614d*/
        }
        while ( (unsigned __int16)v5 < *(this + 5) ); /*0x436151*/
      }
      *(this + 5) = a2; /*0x436153*/
    }
    v8 = *((char **)this + 1); /*0x436159*/
    v24 = v8; /*0x43615c*/
    *(this + 4) = a2; /*0x436160*/
    if ( a2 )
    {
      v9 = (unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2;
      v10 = FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
      if ( v10 ) /*0x4361a2*/
      {
        v11 = v10 + 4; /*0x4361af*/
        *(_DWORD *)v10 = (unsigned __int16)a2; /*0x4361b5*/
        ArrayConstructor( /*0x4361b7*/
          (char *)(v10 + 4),
          4u,
          (unsigned __int16)a2,
          (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))sub_4BDDC0);
      }
      else
      {
        v11 = 0; /*0x4361be*/
      }
      v12 = 0; /*0x4361c0*/
      v13 = *(this + 5) == 0; /*0x4361c2*/
      *((_DWORD *)this + 1) = v11; /*0x4361ce*/
      v26 = 0; /*0x4361d1*/
      if ( !v13 ) /*0x4361d5*/
      {
        do /*0x436240*/
        {
          v14 = *((_DWORD *)this + 1); /*0x4361e0*/
          v15 = 4 * v12; /*0x4361ec*/
          v16 = *(_DWORD *)(v14 + v15); /*0x4361ee*/
          v17 = (_DWORD *)(v15 + v14); /*0x4361f2*/
          if ( v16 != *(_DWORD *)&v24[v15] ) /*0x4361f7*/
          {
            if ( v16 ) /*0x4361fb*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v16 + 8)) ) /*0x436201*/
                (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x436217*/
            }
            v18 = *(_DWORD *)&v24[v15]; /*0x43621d*/
            *v17 = v18; /*0x436222*/
            if ( v18 ) /*0x436225*/
              InterlockedIncrement((volatile LONG *)(v18 + 8)); /*0x43622b*/
          }
          v12 = ++v26; /*0x436235*/
        }
        while ( v26 < *(this + 5) ); /*0x436240*/
      }
      for ( i = *(this + 5); i < *(this + 4); ++i ) /*0x43624a*/
      {
        v20 = *((_DWORD *)this + 1); /*0x436254*/
        v21 = *(_DWORD *)(v20 + 4 * i); /*0x43625a*/
        v22 = (_DWORD *)(v20 + 4 * i); /*0x43625f*/
        if ( v21 ) /*0x43626a*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v21 + 8)) ) /*0x436270*/
            (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x436286*/
          *v22 = 0; /*0x436288*/
        }
      }
      v8 = v24; /*0x4362a0*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x4362db*/
    }
    if ( v8 ) /*0x4362a6*/
    {
      v23 = (unsigned int)(v8 + 0xFFFFFFFC); /*0x4362ab*/
      _LN21(v8, 4u, *((_DWORD *)v8 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_4BDDC0); /*0x4362b7*/
      FormHeapFree(v23); /*0x4362bd*/
    }
  }
}
