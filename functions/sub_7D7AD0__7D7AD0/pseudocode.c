int __thiscall sub_7D7AD0(_WORD *this, int a2, int a3)
{
  int *v5; // eax
  unsigned int v6; // ebx
  int *v7; // eax
  unsigned int v8; // ebx
  int *v9; // eax
  unsigned int v10; // ebx
  int v11; // ebp
  unsigned int v12; // ecx
  int *v13; // eax
  _DWORD *v14; // ebx
  int v15; // ebp
  int v16; // ecx
  int *v17; // eax
  _DWORD *v18; // ebx
  int v19; // ebp
  int v20; // ecx
  int *v21; // eax
  _DWORD *v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ecx
  _DWORD *v27; // eax
  int *v28; // ebp
  int v29; // ebp
  int v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  int *v33; // ebp
  int v34; // ebp
  _DWORD *v35; // eax
  int *v36; // ebp
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int result; // eax
  void (__thiscall ***v44)(_DWORD, int); // [esp+14h] [ebp-10h]
  void (__thiscall ***v45)(_DWORD, int); // [esp+14h] [ebp-10h]
  int v46; // [esp+28h] [ebp+4h]
  _DWORD *v47; // [esp+2Ch] [ebp+8h]
  _DWORD *v48; // [esp+2Ch] [ebp+8h]
  _DWORD *v49; // [esp+2Ch] [ebp+8h]

  sub_7ECB10(a2, a3);
  if ( *(_WORD *)(a2 + 0xB8) != *(this + 0x5C) )
  {
    v5 = *(int **)(a2 + 0xBC);
    if ( v5 )
    {
      v6 = (unsigned int)(v5 + 0xFFFFFFFF);
      _LN21(v5, 4u, v5[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v6);
    }
    v7 = *(int **)(a2 + 0xC0);
    if ( v7 )
    {
      v8 = (unsigned int)(v7 + 0xFFFFFFFF);
      _LN21(v7, 4u, v7[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v8);
    }
    v9 = *(int **)(a2 + 0xC4);
    if ( v9 )
    {
      v10 = (unsigned int)(v9 + 0xFFFFFFFF);
      _LN21(v9, 4u, v9[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v10);
    }
    FormHeapFree(*(_DWORD *)(a2 + 0xD0));
    FormHeapFree(*(_DWORD *)(a2 + 0xC8));
    v11 = (unsigned __int16)*(this + 0x5C);
    v12 = (unsigned __int64)(unsigned __int16)*(this + 0x5C) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v11;
    v13 = (int *)FormHeapAlloc(__CFADD__(v12, 4) ? 0xFFFFFFFF : v12 + 4);
    v14 = 0;
    if ( v13 )
    {
      v14 = v13 + 1;
      *v13 = v11;
      ArrayConstructor(
        v13 + 1,
        4u,
        v11,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    *(_DWORD *)(a2 + 0xBC) = v14;
    v15 = (unsigned __int16)*(this + 0x5C);
    v16 = (unsigned __int64)(unsigned __int16)*(this + 0x5C) >> 0x1E != 0;
    v17 = (int *)FormHeapAlloc(__CFADD__((4 * v15) | -v16, 4) ? 0xFFFFFFFF : ((4 * v15) | -v16) + 4);
    if ( v17 )
    {
      v18 = v17 + 1;
      *v17 = v15;
      ArrayConstructor(
        v17 + 1,
        4u,
        v15,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      v18 = 0;
    }
    *(_DWORD *)(a2 + 0xC0) = v18;
    v19 = (unsigned __int16)*(this + 0x5C);
    v20 = (unsigned __int64)(unsigned __int16)*(this + 0x5C) >> 0x1E != 0;
    v21 = (int *)FormHeapAlloc(__CFADD__((4 * v19) | -v20, 4) ? 0xFFFFFFFF : ((4 * v19) | -v20) + 4);
    if ( v21 )
    {
      v22 = v21 + 1;
      *v21 = v19;
      ArrayConstructor(
        v21 + 1,
        4u,
        v19,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      v22 = 0;
    }
    *(_DWORD *)(a2 + 0xC4) = v22;
    *(_DWORD *)(a2 + 0xD0) = FormHeapAlloc((unsigned __int16)*(this + 0x5C));
    *(_DWORD *)(a2 + 0xC8) = FormHeapAlloc((unsigned __int16)*(this + 0x5C));
    *(_WORD *)(a2 + 0xB8) = *(this + 0x5C);
  }
  v23 = 0;
  v46 = 0;
  if ( *(this + 0x5C) )
  {
    do
    {
      v24 = 4 * v23;
      v25 = *(_DWORD *)(a2 + 0xBC);
      v26 = *(_DWORD *)(v25 + v24);
      v27 = (_DWORD *)(v24 + v25);
      v28 = (int *)(v24 + *((_DWORD *)this + 0x2F));
      v47 = v27;
      v44 = (void (__thiscall ***)(_DWORD, int))v26;
      if ( v26 != *v28 )
      {
        if ( v26 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
          {
            if ( v44 )
              (**v44)(v44, 1);
          }
          v27 = v47;
        }
        v29 = *v28;
        *v27 = v29;
        if ( v29 )
          InterlockedIncrement((volatile LONG *)(v29 + 4));
      }
      v30 = *(_DWORD *)(a2 + 0xC0);
      v31 = *(_DWORD *)(v30 + v24);
      v32 = (_DWORD *)(v24 + v30);
      v33 = (int *)(v24 + *((_DWORD *)this + 0x30));
      v48 = v32;
      v45 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( v31 != *v33 )
      {
        if ( v31 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
          {
            if ( v45 )
              (**v45)(v45, 1);
          }
          v32 = v48;
        }
        v34 = *v33;
        *v32 = v34;
        if ( v34 )
          InterlockedIncrement((volatile LONG *)(v34 + 4));
      }
      v35 = (_DWORD *)(v24 + *(_DWORD *)(a2 + 0xC4));
      v36 = (int *)(v24 + *((_DWORD *)this + 0x31));
      v37 = *v35;
      v49 = v35;
      if ( *v35 != *v36 )
      {
        if ( v37 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) )
            (**(void (__thiscall ***)(int, int))v37)(v37, 1);
          v35 = v49;
        }
        v38 = *v36;
        *v35 = v38;
        if ( v38 )
          InterlockedIncrement((volatile LONG *)(v38 + 4));
      }
      *(_BYTE *)(v46 + *(_DWORD *)(a2 + 0xD0)) = *(_BYTE *)(v46 + *((_DWORD *)this + 0x34));
      *(_BYTE *)(v46 + *(_DWORD *)(a2 + 0xC8)) = *(_BYTE *)(v46 + *((_DWORD *)this + 0x32));
      v23 = v46 + 1;
      v46 = v23;
    }
    while ( v23 < (unsigned __int16)*(this + 0x5C) );
  }
  v39 = *(_DWORD *)(a2 + 0xD4);
  if ( v39 != *((_DWORD *)this + 0x35) )
  {
    if ( v39 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v39 + 4)) )
        (**(void (__thiscall ***)(int, int))v39)(v39, 1);
    }
    v40 = *((_DWORD *)this + 0x35);
    *(_DWORD *)(a2 + 0xD4) = v40;
    if ( v40 )
      InterlockedIncrement((volatile LONG *)(v40 + 4));
  }
  *(_WORD *)(a2 + 0xCC) = *(this + 0x66);
  *(_DWORD *)(a2 + 0xDC) = *((_DWORD *)this + 0x37);
  v41 = *(_DWORD *)(a2 + 0xE0);
  if ( v41 != *((_DWORD *)this + 0x38) )
  {
    if ( v41 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) )
        (**(void (__thiscall ***)(int, int))v41)(v41, 1);
    }
    v42 = *((_DWORD *)this + 0x38);
    *(_DWORD *)(a2 + 0xE0) = v42;
    if ( v42 )
      InterlockedIncrement((volatile LONG *)(v42 + 4));
  }
  *(_BYTE *)(a2 + 0xE4) = *((_BYTE *)this + 0xE4);
  *(float *)(a2 + 0xE8) = *((float *)this + 0x3A);
  *(_DWORD *)(a2 + 0xEC) = *((_DWORD *)this + 0x3B);
  *(_DWORD *)(a2 + 0xD8) = *((_DWORD *)this + 0x36);
  *(_DWORD *)(a2 + 0xA8) = *((_DWORD *)this + 0x2A);
  *(_DWORD *)(a2 + 0xAC) = *((_DWORD *)this + 0x2B);
  *(_DWORD *)(a2 + 0xB0) = *((_DWORD *)this + 0x2C);
  result = *((_DWORD *)this + 0x2D);
  *(_DWORD *)(a2 + 0xB4) = result;
  return result;
}
