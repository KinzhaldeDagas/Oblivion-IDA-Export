void __thiscall sub_4784A0(_WORD *this)
{
  __int16 v2; // ax
  __int16 v3; // cx
  unsigned __int16 v4; // di
  unsigned __int16 v5; // bx
  int v6; // eax
  int v7; // edx
  unsigned __int16 v8; // ax
  char *v9; // ebx
  int v10; // esi
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edi
  unsigned __int16 v14; // ax
  bool v15; // zf
  int v16; // edi
  int v17; // esi
  int v18; // ebx
  _DWORD *v19; // edi
  int v20; // esi
  char *v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+18h] [ebp-10h]

  v2 = *(this + 6); /*0x4784c9*/
  v3 = *(this + 5); /*0x4784cd*/
  if ( v2 != v3 )
  {
    if ( v2 ) /*0x4784dd*/
    {
      v4 = 0; /*0x4784df*/
      v5 = 0; /*0x4784e1*/
      if ( v3 ) /*0x4784e6*/
      {
        do /*0x478520*/
        {
          v6 = *((_DWORD *)this + 1); /*0x4784f0*/
          v7 = *(_DWORD *)(v6 + 4 * v4); /*0x4784f6*/
          if ( v7 ) /*0x478503*/
          {
            if ( *(_DWORD *)(v6 + 4 * v5) != v7 ) /*0x47850e*/
              OB_NiSmartPointer_Assign_010201A0((int *)(v6 + 4 * v5), (int *)(v6 + 4 * v4)); /*0x478511*/
            ++v5; /*0x478516*/
          }
          ++v4; /*0x478519*/
        }
        while ( v4 < *(this + 5) ); /*0x478520*/
      }
    }
    v8 = *(this + 6); /*0x478522*/
    v9 = *((char **)this + 1); /*0x478529*/
    v21 = v9; /*0x47852c*/
    *(this + 5) = v8; /*0x478530*/
    *(this + 4) = v8; /*0x478534*/
    if ( v8 )
    {
      v10 = v8; /*0x47853e*/
      v11 = (unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8;
      v12 = FormHeapAlloc(__CFADD__(v11, 4) ? 0xFFFFFFFF : v11 + 4);
      v13 = 0; /*0x47856c*/
      if ( v12 ) /*0x478574*/
      {
        v13 = v12 + 4; /*0x478581*/
        *(_DWORD *)v12 = v10; /*0x478587*/
        ArrayConstructor( /*0x478589*/
          (char *)(v12 + 4),
          4u,
          v10,
          (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
          (void (__thiscall *)(void *))NiPointerSlot_Release);
      }
      v14 = 0; /*0x47858e*/
      v15 = *(this + 5) == 0; /*0x478590*/
      *((_DWORD *)this + 1) = v13; /*0x47859c*/
      v22 = 0; /*0x47859f*/
      if ( !v15 ) /*0x4785a3*/
      {
        do /*0x478603*/
        {
          v16 = *((_DWORD *)this + 1); /*0x4785a5*/
          v17 = 4 * v14; /*0x4785b1*/
          v18 = *(_DWORD *)(v16 + v17); /*0x4785b3*/
          v19 = (_DWORD *)(v17 + v16); /*0x4785b6*/
          if ( v18 != *(_DWORD *)&v21[v17] ) /*0x4785bb*/
          {
            if ( v18 ) /*0x4785bf*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x4785c5*/
                (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x4785db*/
            }
            v20 = *(_DWORD *)&v21[v17]; /*0x4785e1*/
            *v19 = v20; /*0x4785e6*/
            if ( v20 ) /*0x4785e8*/
              InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x4785ee*/
          }
          v14 = ++v22; /*0x4785f8*/
        }
        while ( (unsigned __int16)v22 < *(this + 5) ); /*0x478603*/
        v9 = v21; /*0x478605*/
      }
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x47860b*/
    }
    if ( v9 ) /*0x478614*/
    {
      _LN21(v9, 4u, *((_DWORD *)v9 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x478625*/
      FormHeapFree((unsigned int)(v9 + 0xFFFFFFFC)); /*0x47862b*/
    }
  }
}
