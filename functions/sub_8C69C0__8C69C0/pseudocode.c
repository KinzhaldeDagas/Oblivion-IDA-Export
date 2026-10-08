void __thiscall sub_8C69C0(int **this, unsigned int a2)
{
  unsigned int v4; // ebp
  int *v5; // ecx
  char *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int *v10; // ebp
  unsigned int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebp
  int v15; // ebx
  _DWORD *v16; // edi
  int v17; // eax
  bool v18; // cf
  unsigned int v19; // ebp
  int v20; // eax
  int v21; // edi
  _DWORD *v22; // ebx
  unsigned int v23; // esi
  unsigned int v24; // [esp+14h] [ebp-14h] BYREF
  int v25; // [esp+18h] [ebp-10h]
  int v26; // [esp+24h] [ebp-4h]
  char *v27; // [esp+2Ch] [ebp+4h]

  if ( (int *)a2 != *(this + 2) )
  {
    if ( a2 < (unsigned int)*(this + 3) ) /*0x8c69f9*/
    {
      v4 = a2; /*0x8c69fb*/
      do /*0x8c6a49*/
      {
        v5 = &(*(this + 1))[2 * v4]; /*0x8c6a03*/
        if ( *v5 || v5[1] ) /*0x8c6a0c*/
        {
          v24 = 0; /*0x8c6a23*/
          v25 = 0; /*0x8c6a27*/
          v26 = 0; /*0x8c6a30*/
          sub_8C6880(v5, (int *)&v24); /*0x8c6a34*/
          *(this + 4) = (int *)((char *)*(this + 4) + 0xFFFFFFFF); /*0x8c6a3c*/
          v26 = 0xFFFFFFFF; /*0x8c6a3f*/
        }
        ++v4; /*0x8c6a43*/
      }
      while ( v4 < (unsigned int)*(this + 3) ); /*0x8c6a49*/
      *(this + 3) = (int *)a2; /*0x8c6a4b*/
    }
    v7 = (char *)*(this + 1); /*0x8c6a54*/
    v27 = v7; /*0x8c6a57*/
    *(this + 2) = (int *)a2; /*0x8c6a5b*/
    if ( a2 )
    {
      v8 = (unsigned __int64)a2 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a2;
      v9 = FormHeapAlloc(__CFADD__(v8, 4) ? 0xFFFFFFFF : v8 + 4);
      v24 = v9; /*0x8c6a8b*/
      v26 = 1; /*0x8c6a91*/
      if ( v9 ) /*0x8c6a99*/
      {
        v10 = (int *)(v9 + 4); /*0x8c6aa6*/
        *(_DWORD *)v9 = a2; /*0x8c6aac*/
        ArrayConstructor( /*0x8c6aae*/
          (char *)(v9 + 4),
          8u,
          a2,
          (void (__thiscall *)(char *))Concurrency::details::StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>::Reinitialize,
          (void (__thiscall *)(void *))NiPointerSlot_Release);
      }
      else
      {
        v10 = 0; /*0x8c6ab5*/
      }
      v11 = 0; /*0x8c6ab7*/
      v12 = *(this + 3) == 0; /*0x8c6ab9*/
      v26 = 0xFFFFFFFF; /*0x8c6abc*/
      *(this + 1) = v10; /*0x8c6ac4*/
      v24 = 0; /*0x8c6ac7*/
      if ( !v12 ) /*0x8c6acb*/
      {
        do /*0x8c6b38*/
        {
          v13 = (int)*(this + 1); /*0x8c6ad0*/
          v14 = 8 * v11; /*0x8c6ad7*/
          v15 = *(_DWORD *)(v13 + 8 * v11); /*0x8c6ade*/
          v16 = (_DWORD *)(8 * v11 + v13); /*0x8c6ae1*/
          if ( v15 != *(_DWORD *)&v27[8 * v11] ) /*0x8c6ae6*/
          {
            if ( v15 ) /*0x8c6aea*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x8c6af0*/
                (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x8c6b06*/
            }
            v17 = *(_DWORD *)&v27[v14]; /*0x8c6b0c*/
            *v16 = v17; /*0x8c6b11*/
            if ( v17 ) /*0x8c6b13*/
              InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x8c6b19*/
          }
          v11 = v24 + 1; /*0x8c6b2b*/
          v16[1] = *(_DWORD *)&v27[v14 + 4]; /*0x8c6b2e*/
          v18 = v11 < (unsigned int)*(this + 3); /*0x8c6b31*/
          v24 = v11; /*0x8c6b34*/
        }
        while ( v18 ); /*0x8c6b38*/
      }
      v19 = (unsigned int)*(this + 3); /*0x8c6b3c*/
      if ( v19 < (unsigned int)*(this + 2) ) /*0x8c6b42*/
      {
        v24 = 0; /*0x8c6b44*/
        v25 = 0; /*0x8c6b48*/
        do /*0x8c6b9c*/
        {
          v20 = (int)*(this + 1); /*0x8c6b50*/
          v21 = *(_DWORD *)(v20 + 8 * v19); /*0x8c6b53*/
          v22 = (_DWORD *)(v20 + 8 * v19); /*0x8c6b58*/
          v26 = 2; /*0x8c6b5b*/
          if ( v21 ) /*0x8c6b63*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x8c6b69*/
              (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x8c6b7f*/
            *v22 = 0; /*0x8c6b81*/
          }
          ++v19; /*0x8c6b87*/
          v22[1] = 0; /*0x8c6b8a*/
          v18 = v19 < (unsigned int)*(this + 2); /*0x8c6b91*/
          v26 = 0xFFFFFFFF; /*0x8c6b94*/
        }
        while ( v18 ); /*0x8c6b9c*/
      }
      v7 = v27; /*0x8c6ba0*/
    }
    else
    {
      *(this + 1) = 0; /*0x8c6bdb*/
    }
    if ( v7 ) /*0x8c6ba6*/
    {
      v23 = (unsigned int)(v7 + 0xFFFFFFFC); /*0x8c6bab*/
      _LN21(v7, 8u, *((_DWORD *)v7 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8c6bb7*/
      FormHeapFree(v23); /*0x8c6bbd*/
    }
  }
}
