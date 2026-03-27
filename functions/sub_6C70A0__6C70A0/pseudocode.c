void __thiscall sub_6C70A0(unsigned int *this, unsigned int *a2, _DWORD **a3)
{
  const char *v5; // ebx
  unsigned int v6; // kr00_4
  char *v7; // eax
  int v8; // edi
  unsigned int v9; // ecx
  int *v10; // eax
  _DWORD *v11; // ebx
  unsigned int v12; // eax
  int v13; // edi
  int v14; // ecx
  int *v15; // eax
  _DWORD *v16; // ebx
  unsigned int v17; // eax
  int v18; // edi
  void **v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // ecx
  int *v23; // ebx
  int v24; // eax
  bool v25; // zf
  _DWORD *v26; // eax
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // ebx
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // ecx
  int *v33; // ebx
  unsigned int v34; // edi
  unsigned int v35; // eax
  unsigned int v36; // edx
  const char *v37; // ebx
  unsigned int v38; // kr04_4
  char *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // ebp
  unsigned int i; // [esp+14h] [ebp-14h]
  void (__thiscall ***v43)(_DWORD, int); // [esp+18h] [ebp-10h]
  int *v44; // [esp+18h] [ebp-10h]
  void (__thiscall ***v45)(_DWORD, int); // [esp+18h] [ebp-10h]
  int v46; // [esp+2Ch] [ebp+4h]
  int v47; // [esp+2Ch] [ebp+4h]
  int v48; // [esp+2Ch] [ebp+4h]

  sub_700770(this, (int)a2, a3);
  v5 = (const char *)*(this + 2);
  FormHeapFree(a2[2]);
  v6 = strlen(v5);
  v7 = (char *)FormHeapAlloc(v6 + 1);
  a2[2] = (unsigned int)v7;
  strcpy_s(v7, v6 + 1, v5);
  a2[3] = *(this + 3);
  a2[4] = *(this + 4);
  v8 = *(this + 3);
  v9 = (unsigned __int64)(unsigned int)v8 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v8;
  v10 = (int *)FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
  if ( v10 )
  {
    v11 = v10 + 1;
    *v10 = v8;
    ArrayConstructor(v10 + 1, 0x10u, v8, (int)sub_6C62E0, (void (__thiscall *)(void *))sub_6C64C0);
    v12 = (unsigned int)v11;
  }
  else
  {
    v12 = 0;
  }
  a2[5] = v12;
  v13 = *(this + 3);
  v14 = (unsigned __int64)(unsigned int)v13 >> 0x1C != 0;
  v15 = (int *)FormHeapAlloc(__CFADD__((0x10 * v13) | -v14, 4) ? 0xFFFFFFFF : ((0x10 * v13) | -v14) + 4);
  if ( v15 )
  {
    v16 = v15 + 1;
    *v15 = v13;
    ArrayConstructor(v15 + 1, 0x10u, v13, (int)sub_6C6370, (void (__thiscall *)(void *))sub_7016A0);
    v17 = (unsigned int)v16;
  }
  else
  {
    v17 = 0;
  }
  v18 = 0;
  a2[6] = v17;
  for ( i = 0; i < *(this + 3); ++i )
  {
    v19 = (void **)(v18 + *(this + 5));
    if ( *v19 )
    {
      if ( *(this + 0x10) )
      {
        v30 = sub_700710(*v19, a3);
        v31 = a2[5];
        v32 = *(_DWORD *)(v31 + v18);
        v33 = (int *)(v18 + v31);
        v48 = v30;
        v45 = (void (__thiscall ***)(_DWORD, int))v32;
        if ( v32 != v30 )
        {
          if ( v32 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) )
            {
              if ( v45 )
                (**v45)(v45, 1);
            }
            v30 = v48;
          }
          *v33 = v30;
          if ( v30 )
            InterlockedIncrement((volatile LONG *)(v30 + 4));
        }
        *(_BYTE *)(v18 + a2[5] + 0xC) = *(_BYTE *)(v18 + *(this + 5) + 0xC);
      }
      else
      {
        v20 = (*(int (__thiscall **)(void *, _DWORD **))(*(_DWORD *)*v19 + 0x18))(*v19, a3);
        v21 = a2[5];
        v22 = *(_DWORD *)(v21 + v18);
        v23 = (int *)(v18 + v21);
        v46 = v20;
        v43 = (void (__thiscall ***)(_DWORD, int))v22;
        if ( v22 != v20 )
        {
          if ( v22 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
            {
              if ( v43 )
                (**v43)(v43, 1);
            }
            v20 = v46;
          }
          *v23 = v20;
          if ( v20 )
            InterlockedIncrement((volatile LONG *)(v20 + 4));
        }
        v24 = *(this + 5);
        v25 = *(_DWORD *)(v18 + v24 + 4) == 0;
        v26 = (_DWORD *)(v18 + v24 + 4);
        if ( !v25 )
        {
          v27 = (*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)*v26 + 0x18))(*v26, a3);
          v28 = a2[5];
          v29 = *(_DWORD *)(v18 + v28 + 4);
          v47 = v27;
          v44 = (int *)(v18 + v28 + 4);
          if ( v29 != v27 )
          {
            if ( v29 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) )
                (**(void (__thiscall ***)(int, int))v29)(v29, 1);
              v27 = v47;
            }
            *v44 = v27;
            if ( v27 )
              InterlockedIncrement((volatile LONG *)(v27 + 4));
          }
        }
      }
    }
    *(_BYTE *)(v18 + a2[5] + 0xD) = *(_BYTE *)(v18 + *(this + 5) + 0xD);
    sub_6C67F0((_DWORD *)(v18 + a2[6]), (int *)(v18 + *(this + 6)));
    v18 += 0x10;
  }
  a2[7] = *(this + 7);
  v34 = a2[8];
  if ( v34 != *(this + 8) )
  {
    if ( v34 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v34 + 4)) )
        (**(void (__thiscall ***)(unsigned int, int))v34)(v34, 1);
    }
    v35 = *(this + 8);
    a2[8] = v35;
    if ( v35 )
      InterlockedIncrement((volatile LONG *)(v35 + 4));
  }
  v36 = a2[0x17];
  a2[9] = *(this + 9);
  a2[0xA] = *(this + 0xA);
  a2[0xB] = *(this + 0xB);
  a2[0xC] = *(this + 0xC);
  v37 = (const char *)*(this + 0x17);
  FormHeapFree(v36);
  a2[0x17] = 0;
  if ( v37 )
  {
    v38 = strlen(v37);
    v39 = (char *)FormHeapAlloc(v38 + 1);
    a2[0x17] = (unsigned int)v39;
    strcpy_s(v39, v38 + 1, v37);
  }
  v40 = a2[0x19];
  if ( v40 != *(this + 0x19) )
  {
    if ( v40 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) )
        (**(void (__thiscall ***)(unsigned int, int))v40)(v40, 1);
    }
    v41 = *(this + 0x19);
    a2[0x19] = v41;
    if ( v41 )
      InterlockedIncrement((volatile LONG *)(v41 + 4));
  }
}
