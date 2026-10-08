void __thiscall NiTObjectArray_Resize16(MEF_RefPointerArray16 *self, unsigned int capacity)
{
  unsigned __int16 usedEnd; // ax
  unsigned int v5; // ecx
  void **v6; // ebx
  void (__thiscall ***v7)(_DWORD, int); // edi
  char *data; // eax
  unsigned int v9; // ecx
  int v10; // eax
  void **v11; // ebx
  unsigned __int16 v12; // ax
  bool v13; // zf
  void **v14; // ebp
  int v15; // edi
  volatile LONG *v16; // ebx
  void **v17; // ebp
  volatile LONG *v18; // edi
  unsigned __int16 i; // bx
  void **v20; // edx
  volatile LONG *v21; // edi
  void **v22; // ebp
  unsigned int v23; // esi
  char *v24; // [esp+14h] [ebp-10h]
  unsigned int capacitya; // [esp+28h] [ebp+4h]
  unsigned __int16 capacityb; // [esp+28h] [ebp+4h]

  if ( capacity != self->capacity )
  {
    usedEnd = self->usedEnd; /*0x523b47*/
    if ( capacity < usedEnd ) /*0x523b50*/
    {
      v5 = (unsigned __int16)capacity; /*0x523b55*/
      capacitya = (unsigned __int16)capacity; /*0x523b58*/
      if ( (unsigned __int16)capacity < usedEnd ) /*0x523b5c*/
      {
        do /*0x523bc1*/
        {
          v6 = &self->data[(unsigned __int16)v5]; /*0x523b66*/
          if ( *v6 ) /*0x523b6b*/
          {
            v7 = (void (__thiscall ***)(_DWORD, int))*v6; /*0x523b78*/
            if ( !InterlockedDecrement((volatile LONG *)*v6 + 1) ) /*0x523b86*/
            {
              if ( v7 ) /*0x523b92*/
                (**v7)(v7, 1); /*0x523b9c*/
            }
            v5 = capacitya; /*0x523b9e*/
            *v6 = 0; /*0x523ba2*/
            --self->occupiedCount; /*0x523ba8*/
          }
          capacitya = ++v5; /*0x523bbd*/
        }
        while ( (unsigned __int16)v5 < self->usedEnd ); /*0x523bc1*/
      }
      self->usedEnd = capacity; /*0x523bc3*/
    }
    data = (char *)self->data; /*0x523bc9*/
    v24 = data; /*0x523bcc*/
    self->capacity = capacity; /*0x523bd0*/
    if ( capacity )
    {
      v9 = (unsigned __int64)(unsigned __int16)capacity >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)capacity;
      v10 = FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
      if ( v10 ) /*0x523c12*/
      {
        v11 = (void **)(v10 + 4); /*0x523c1f*/
        *(_DWORD *)v10 = (unsigned __int16)capacity; /*0x523c25*/
        ArrayConstructor( /*0x523c27*/
          (char *)(v10 + 4),
          4u,
          (unsigned __int16)capacity,
          (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))NiPointerSlot_Release);
      }
      else
      {
        v11 = 0; /*0x523c2e*/
      }
      v12 = 0; /*0x523c30*/
      v13 = self->usedEnd == 0; /*0x523c32*/
      self->data = v11; /*0x523c3e*/
      capacityb = 0; /*0x523c41*/
      if ( !v13 ) /*0x523c45*/
      {
        do /*0x523cb0*/
        {
          v14 = self->data; /*0x523c50*/
          v15 = v12; /*0x523c5c*/
          v16 = (volatile LONG *)v14[v15]; /*0x523c5e*/
          v17 = &v14[v15]; /*0x523c62*/
          if ( v16 != *(volatile LONG **)&v24[v15 * 4] ) /*0x523c67*/
          {
            if ( v16 ) /*0x523c6b*/
            {
              if ( !InterlockedDecrement(v16 + 1) ) /*0x523c71*/
                (**(void (__thiscall ***)(void *, int))v16)((void *)v16, 1); /*0x523c87*/
            }
            v18 = *(volatile LONG **)&v24[v15 * 4]; /*0x523c8d*/
            *v17 = (void *)v18; /*0x523c92*/
            if ( v18 ) /*0x523c95*/
              InterlockedIncrement(v18 + 1); /*0x523c9b*/
          }
          v12 = ++capacityb; /*0x523ca5*/
        }
        while ( capacityb < self->usedEnd ); /*0x523cb0*/
      }
      for ( i = self->usedEnd; i < self->capacity; ++i ) /*0x523cba*/
      {
        v20 = self->data; /*0x523cc4*/
        v21 = (volatile LONG *)v20[i]; /*0x523cca*/
        v22 = &v20[i]; /*0x523ccf*/
        if ( v21 ) /*0x523cda*/
        {
          if ( !InterlockedDecrement(v21 + 1) ) /*0x523ce0*/
            (**(void (__thiscall ***)(void *, int))v21)((void *)v21, 1); /*0x523cf6*/
          *v22 = 0; /*0x523cf8*/
        }
      }
      data = v24; /*0x523d10*/
    }
    else
    {
      self->data = 0; /*0x523d4b*/
    }
    if ( data ) /*0x523d16*/
    {
      v23 = (unsigned int)(data + 0xFFFFFFFC); /*0x523d1b*/
      _LN21(data, 4u, *((_DWORD *)data + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x523d27*/
      FormHeapFree(v23); /*0x523d2d*/
    }
  }
}
