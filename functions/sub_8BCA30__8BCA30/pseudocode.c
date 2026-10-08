void __thiscall sub_8BCA30(int **this, int *size)
{
  int v3; // ebp
  unsigned int v4; // ecx
  int *v5; // ebx
  void (__thiscall ***v6)(_DWORD, int); // edi
  char *v7; // edi
  unsigned int v8; // ecx
  int v9; // eax
  int *v10; // ebx
  unsigned int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  int v15; // ebp
  _DWORD *v16; // edi
  int v17; // ebx
  unsigned int v18; // ebx
  int v19; // ecx
  int v20; // edi
  _DWORD *v21; // ebp
  char *v22; // [esp+14h] [ebp-10h]
  unsigned int sizea; // [esp+28h] [ebp+4h]

  v3 = (int)size; /*0x8bca57*/
  if ( size != *(this + 2) )
  {
    if ( size < *(this + 3) ) /*0x8bca67*/
    {
      v4 = (unsigned int)size; /*0x8bca69*/
      do /*0x8bcac9*/
      {
        v5 = &(*(this + 1))[v4]; /*0x8bca73*/
        if ( *v5 ) /*0x8bca78*/
        {
          v6 = (void (__thiscall ***)(_DWORD, int))*v5; /*0x8bca85*/
          if ( !InterlockedDecrement((volatile LONG *)(*v5 + 4)) ) /*0x8bca93*/
          {
            if ( v6 ) /*0x8bca9f*/
              (**v6)(v6, 1); /*0x8bcaa9*/
          }
          v4 = (unsigned int)size; /*0x8bcaab*/
          *v5 = 0; /*0x8bcaaf*/
          *(this + 4) = (int *)((char *)*(this + 4) + 0xFFFFFFFF); /*0x8bcab8*/
        }
        size = (int *)++v4; /*0x8bcac5*/
      }
      while ( v4 < (unsigned int)*(this + 3) ); /*0x8bcac9*/
      *(this + 3) = (int *)v3; /*0x8bcacb*/
    }
    v7 = (char *)*(this + 1); /*0x8bcad0*/
    v22 = v7; /*0x8bcad3*/
    *(this + 2) = (int *)v3; /*0x8bcad7*/
    if ( v3 )
    {
      v8 = (unsigned __int64)(unsigned int)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3;
      v9 = FormHeapAlloc(__CFADD__(v8, 4) ? 0xFFFFFFFF : v8 + 4);
      if ( v9 ) /*0x8bcb15*/
      {
        v10 = (int *)(v9 + 4); /*0x8bcb22*/
        *(_DWORD *)v9 = v3; /*0x8bcb28*/
        ArrayConstructor( /*0x8bcb2a*/
          (char *)(v9 + 4),
          4u,
          v3,
          (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))NiPointerSlot_Release);
      }
      else
      {
        v10 = 0; /*0x8bcb31*/
      }
      v11 = 0; /*0x8bcb33*/
      v12 = *(this + 3) == 0; /*0x8bcb35*/
      *(this + 1) = v10; /*0x8bcb40*/
      sizea = 0; /*0x8bcb43*/
      if ( !v12 ) /*0x8bcb47*/
      {
        do /*0x8bcbae*/
        {
          v13 = (int)*(this + 1); /*0x8bcb50*/
          v14 = 4 * v11; /*0x8bcb57*/
          v15 = *(_DWORD *)(v13 + 4 * v11); /*0x8bcb5e*/
          v16 = (_DWORD *)(4 * v11 + v13); /*0x8bcb61*/
          if ( v15 != *(_DWORD *)&v22[4 * v11] ) /*0x8bcb66*/
          {
            if ( v15 ) /*0x8bcb6a*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x8bcb70*/
                (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x8bcb87*/
            }
            v17 = *(_DWORD *)&v22[v14]; /*0x8bcb8d*/
            *v16 = v17; /*0x8bcb92*/
            if ( v17 ) /*0x8bcb94*/
              InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x8bcb9a*/
          }
          v11 = ++sizea; /*0x8bcba4*/
        }
        while ( sizea < (unsigned int)*(this + 3) ); /*0x8bcbae*/
        v7 = v22; /*0x8bcbb0*/
      }
      v18 = (unsigned int)*(this + 3); /*0x8bcbb4*/
      if ( v18 < (unsigned int)*(this + 2) ) /*0x8bcbba*/
      {
        do /*0x8bcc0a*/
        {
          v19 = (int)*(this + 1); /*0x8bcbc4*/
          v20 = *(_DWORD *)(v19 + 4 * v18); /*0x8bcbc7*/
          v21 = (_DWORD *)(v19 + 4 * v18); /*0x8bcbcc*/
          if ( v20 ) /*0x8bcbd7*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8bcbdd*/
              (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x8bcbf3*/
            *v21 = 0; /*0x8bcbf5*/
          }
          ++v18; /*0x8bcbfc*/
        }
        while ( v18 < (unsigned int)*(this + 2) ); /*0x8bcc0a*/
        v7 = v22; /*0x8bcc0c*/
      }
    }
    else
    {
      *(this + 1) = 0; /*0x8bcc12*/
    }
    if ( v7 ) /*0x8bcc1b*/
    {
      _LN21(v7, 4u, *((_DWORD *)v7 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8bcc2c*/
      FormHeapFree((unsigned int)(v7 + 0xFFFFFFFC)); /*0x8bcc32*/
    }
  }
}
