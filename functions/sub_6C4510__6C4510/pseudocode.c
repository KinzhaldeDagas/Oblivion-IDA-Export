void __thiscall sub_6C4510(unsigned __int16 *this, unsigned int a2)
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
    v4 = *(this + 5); /*0x6c4547*/
    if ( a2 < v4 ) /*0x6c4550*/
    {
      v5 = (unsigned __int16)a2; /*0x6c4555*/
      v25 = (unsigned __int16)a2; /*0x6c4558*/
      if ( (unsigned __int16)a2 < v4 ) /*0x6c455c*/
      {
        do /*0x6c45c1*/
        {
          v6 = *((_DWORD *)this + 1) + 4 * (unsigned __int16)v5; /*0x6c4566*/
          if ( *(_DWORD *)v6 ) /*0x6c456b*/
          {
            v7 = *(void (__thiscall ****)(_DWORD, int))v6; /*0x6c4578*/
            if ( !InterlockedDecrement((volatile LONG *)(*(_DWORD *)v6 + 4)) ) /*0x6c4586*/
            {
              if ( v7 ) /*0x6c4592*/
                (**v7)(v7, 1); /*0x6c459c*/
            }
            v5 = v25; /*0x6c459e*/
            *(_DWORD *)v6 = 0; /*0x6c45a2*/
            --*(this + 6); /*0x6c45a8*/
          }
          v25 = ++v5; /*0x6c45bd*/
        }
        while ( (unsigned __int16)v5 < *(this + 5) ); /*0x6c45c1*/
      }
      *(this + 5) = a2; /*0x6c45c3*/
    }
    v8 = *((char **)this + 1); /*0x6c45c9*/
    v24 = v8; /*0x6c45cc*/
    *(this + 4) = a2; /*0x6c45d0*/
    if ( a2 )
    {
      v9 = (unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2;
      v10 = FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
      if ( v10 ) /*0x6c4612*/
      {
        v11 = v10 + 4; /*0x6c461f*/
        *(_DWORD *)v10 = (unsigned __int16)a2; /*0x6c4625*/
        ArrayConstructor( /*0x6c4627*/
          (char *)(v10 + 4),
          4u,
          (unsigned __int16)a2,
          (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))NiPointerSlot_Release);
      }
      else
      {
        v11 = 0; /*0x6c462e*/
      }
      v12 = 0; /*0x6c4630*/
      v13 = *(this + 5) == 0; /*0x6c4632*/
      *((_DWORD *)this + 1) = v11; /*0x6c463e*/
      v26 = 0; /*0x6c4641*/
      if ( !v13 ) /*0x6c4645*/
      {
        do /*0x6c46b0*/
        {
          v14 = *((_DWORD *)this + 1); /*0x6c4650*/
          v15 = 4 * v12; /*0x6c465c*/
          v16 = *(_DWORD *)(v14 + v15); /*0x6c465e*/
          v17 = (_DWORD *)(v15 + v14); /*0x6c4662*/
          if ( v16 != *(_DWORD *)&v24[v15] ) /*0x6c4667*/
          {
            if ( v16 ) /*0x6c466b*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x6c4671*/
                (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x6c4687*/
            }
            v18 = *(_DWORD *)&v24[v15]; /*0x6c468d*/
            *v17 = v18; /*0x6c4692*/
            if ( v18 ) /*0x6c4695*/
              InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x6c469b*/
          }
          v12 = ++v26; /*0x6c46a5*/
        }
        while ( v26 < *(this + 5) ); /*0x6c46b0*/
      }
      for ( i = *(this + 5); i < *(this + 4); ++i ) /*0x6c46ba*/
      {
        v20 = *((_DWORD *)this + 1); /*0x6c46c4*/
        v21 = *(_DWORD *)(v20 + 4 * i); /*0x6c46ca*/
        v22 = (_DWORD *)(v20 + 4 * i); /*0x6c46cf*/
        if ( v21 ) /*0x6c46da*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x6c46e0*/
            (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x6c46f6*/
          *v22 = 0; /*0x6c46f8*/
        }
      }
      v8 = v24; /*0x6c4710*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x6c474b*/
    }
    if ( v8 ) /*0x6c4716*/
    {
      v23 = (unsigned int)(v8 + 0xFFFFFFFC); /*0x6c471b*/
      _LN21(v8, 4u, *((_DWORD *)v8 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c4727*/
      FormHeapFree(v23); /*0x6c472d*/
    }
  }
}
