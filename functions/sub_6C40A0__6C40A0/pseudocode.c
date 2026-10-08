void __thiscall sub_6C40A0(int **this, int size)
{
  int **v2; // esi
  int v3; // edi
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int *v10; // esi
  int v11; // esi
  bool v12; // cf
  char *v13; // eax
  unsigned int v14; // ebx
  int v16; // [esp+18h] [ebp-14h]
  int *v17; // [esp+1Ch] [ebp-10h]

  v2 = this; /*0x6c40c7*/
  v3 = size; /*0x6c40cd*/
  if ( (int *)size != *(this + 1) )
  {
    if ( size )
    {
      v4 = (unsigned __int64)(unsigned int)size >> 0x1E != 0 ? 0xFFFFFFFF : 4 * size;
      v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
      if ( v5 ) /*0x6c4115*/
      {
        v6 = v5 + 4; /*0x6c4122*/
        *(_DWORD *)v5 = size; /*0x6c4128*/
        ArrayConstructor( /*0x6c412a*/
          (char *)(v5 + 4),
          4u,
          size,
          (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))NiPointerSlot_Release);
      }
      else
      {
        v6 = 0; /*0x6c4131*/
      }
      v7 = 0; /*0x6c4133*/
      v17 = (int *)v6; /*0x6c4140*/
      v16 = 0; /*0x6c4144*/
      if ( v2[2] ) /*0x6c4135*/
      {
        do /*0x6c41a9*/
        {
          v8 = 4 * v7; /*0x6c4152*/
          v9 = *(_DWORD *)(4 * v7 + v6); /*0x6c4159*/
          v10 = &(*v2)[v7]; /*0x6c415c*/
          if ( v9 != *v10 ) /*0x6c4160*/
          {
            if ( v9 ) /*0x6c4164*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x6c416a*/
                (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x6c4180*/
            }
            v11 = *v10; /*0x6c4182*/
            *(_DWORD *)(v8 + v6) = v11; /*0x6c4186*/
            if ( v11 ) /*0x6c4189*/
              InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x6c418f*/
          }
          v7 = v16 + 1; /*0x6c419d*/
          v12 = ++v16 < (unsigned int)*(this + 2); /*0x6c41a0*/
          v2 = this; /*0x6c41a7*/
        }
        while ( v12 ); /*0x6c41a9*/
        v3 = size; /*0x6c41ab*/
      }
    }
    else
    {
      v17 = 0; /*0x6c41b1*/
    }
    v13 = (char *)*v2; /*0x6c41b5*/
    if ( *v2 ) /*0x6c41b5*/
    {
      v14 = (unsigned int)(v13 + 0xFFFFFFFC); /*0x6c41be*/
      _LN21(v13, 4u, *((_DWORD *)v13 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c41ca*/
      FormHeapFree(v14); /*0x6c41d0*/
    }
    *v2 = v17; /*0x6c41dc*/
    v2[1] = (int *)v3; /*0x6c41de*/
  }
}
