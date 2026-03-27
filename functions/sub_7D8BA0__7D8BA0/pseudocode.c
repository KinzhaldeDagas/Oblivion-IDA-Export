int __thiscall sub_7D8BA0(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // ebp
  char *v11; // edi
  bool v12; // cf
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  _DWORD *v15; // eax
  int v16; // esi
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // ebx
  int *v20; // eax
  unsigned int v21; // ebp
  int *v22; // eax
  unsigned int v23; // ebp
  int *v24; // eax
  unsigned int v25; // ebp
  int v26; // ecx
  int v27; // esi
  LONG (__stdcall *v28)(volatile LONG *); // ebx
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // ecx
  int v39; // ecx
  char *v40; // edi
  int *v41; // ebp
  int v42; // esi
  int v43; // eax
  char v44; // al
  int v45; // eax
  const char *v46; // ebx
  int *v47; // edi
  int v48; // esi
  bool v49; // zf
  int v50; // eax
  void (__thiscall ***v51)(_DWORD, int); // esi
  int v52; // esi
  int v53; // eax
  int v54; // eax
  bool v55; // al
  int *v56; // edi
  int v57; // esi
  int v58; // eax
  void (__thiscall ***v59)(_DWORD, int); // esi
  _DWORD *v61; // [esp+38h] [ebp-12Ch]
  int v62; // [esp+38h] [ebp-12Ch]
  int v64; // [esp+40h] [ebp-124h]
  char *v65; // [esp+40h] [ebp-124h]
  char *v66; // [esp+44h] [ebp-120h]
  int v67; // [esp+44h] [ebp-120h]
  int v68; // [esp+48h] [ebp-11Ch] BYREF
  int v69; // [esp+4Ch] [ebp-118h] BYREF
  char Src[260]; // [esp+50h] [ebp-114h] BYREF
  int v71; // [esp+160h] [ebp-4h]

  v10 = this;
  v11 = *(char **)(this + 0xBC);
  v12 = *(_WORD *)(this + 0xB8) < 0xAu;
  v66 = *(char **)(this + 0xC0);
  v69 = *(_DWORD *)(this + 0xC4);
  if ( v12 )
  {
    v13 = (_DWORD *)FormHeapAlloc(0x2Cu);
    v71 = 0;
    if ( v13 )
    {
      v14 = v13 + 1;
      *v13 = 0xA;
      ArrayConstructor(
        v13 + 1,
        4u,
        0xA,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      v14 = 0;
    }
    v61 = v14;
    v11 = (char *)v14;
    v15 = (_DWORD *)FormHeapAlloc(0x2Cu);
    v71 = 1;
    if ( v15 )
    {
      v16 = (int)(v15 + 1);
      *v15 = 0xA;
      ArrayConstructor(
        v15 + 1,
        4u,
        0xA,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      v16 = 0;
    }
    v68 = v16;
    v66 = (char *)v16;
    v17 = (_DWORD *)FormHeapAlloc(0x2Cu);
    v71 = 2;
    if ( v17 )
    {
      v18 = (int)(v17 + 1);
      *v17 = 0xA;
      ArrayConstructor(
        v17 + 1,
        4u,
        0xA,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      v18 = 0;
    }
    v71 = 0xFFFFFFFF;
    v69 = v18;
    v19 = FormHeapAlloc(0xAu);
    v64 = FormHeapAlloc(0xAu);
    v20 = *(int **)(v10 + 0xBC);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 + 0xFFFFFFFF);
      _LN21(v20, 4u, v20[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v21);
      v10 = this;
    }
    v22 = *(int **)(v10 + 0xC0);
    if ( v22 )
    {
      v23 = (unsigned int)(v22 + 0xFFFFFFFF);
      _LN21(v22, 4u, v22[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v23);
      v10 = this;
    }
    v24 = *(int **)(v10 + 0xC4);
    if ( v24 )
    {
      v25 = (unsigned int)(v24 + 0xFFFFFFFF);
      _LN21(v24, 4u, v24[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v25);
      v10 = this;
    }
    FormHeapFree(*(_DWORD *)(v10 + 0xD0));
    FormHeapFree(*(_DWORD *)(v10 + 0xC8));
    v26 = v68;
    *(_DWORD *)(v10 + 0xBC) = v61;
    *(_DWORD *)(v10 + 0xC0) = v26;
    *(_DWORD *)(v10 + 0xC4) = v18;
    *(_DWORD *)(v10 + 0xD0) = v19;
    *(_DWORD *)(v10 + 0xC8) = v64;
    *(_WORD *)(v10 + 0xB8) = 0xA;
  }
  v27 = *(_DWORD *)v11;
  v28 = InterlockedDecrement;
  if ( *(_DWORD *)v11 != a2 )
  {
    if ( v27 )
    {
      if ( !v28((volatile LONG *)(v27 + 4)) )
        (**(void (__thiscall ***)(int, int))v27)(v27, 1);
    }
    *(_DWORD *)v11 = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v29 = *((_DWORD *)v11 + 1);
  if ( v29 != a3 )
  {
    if ( v29 )
    {
      if ( !v28((volatile LONG *)(v29 + 4)) )
        (**(void (__thiscall ***)(int, int))v29)(v29, 1);
    }
    *((_DWORD *)v11 + 1) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  v30 = *((_DWORD *)v11 + 2);
  if ( v30 != a4 )
  {
    if ( v30 )
    {
      if ( !v28((volatile LONG *)(v30 + 4)) )
        (**(void (__thiscall ***)(int, int))v30)(v30, 1);
    }
    *((_DWORD *)v11 + 2) = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
  }
  v31 = *((_DWORD *)v11 + 3);
  if ( v31 != a5 )
  {
    if ( v31 )
    {
      if ( !v28((volatile LONG *)(v31 + 4)) )
        (**(void (__thiscall ***)(int, int))v31)(v31, 1);
    }
    *((_DWORD *)v11 + 3) = a5;
    if ( a5 )
      InterlockedIncrement((volatile LONG *)(a5 + 4));
  }
  v32 = *((_DWORD *)v11 + 4);
  if ( v32 != a6 )
  {
    if ( v32 )
    {
      if ( !v28((volatile LONG *)(v32 + 4)) )
        (**(void (__thiscall ***)(int, int))v32)(v32, 1);
    }
    *((_DWORD *)v11 + 4) = a6;
    if ( a6 )
      InterlockedIncrement((volatile LONG *)(a6 + 4));
  }
  v33 = *((_DWORD *)v11 + 5);
  if ( v33 != a7 )
  {
    if ( v33 )
    {
      if ( !v28((volatile LONG *)(v33 + 4)) )
        (**(void (__thiscall ***)(int, int))v33)(v33, 1);
    }
    *((_DWORD *)v11 + 5) = a7;
    if ( a7 )
      InterlockedIncrement((volatile LONG *)(a7 + 4));
  }
  v34 = *((_DWORD *)v11 + 6);
  if ( v34 != a8 )
  {
    if ( v34 )
    {
      if ( !v28((volatile LONG *)(v34 + 4)) )
        (**(void (__thiscall ***)(int, int))v34)(v34, 1);
    }
    *((_DWORD *)v11 + 6) = a8;
    if ( a8 )
      InterlockedIncrement((volatile LONG *)(a8 + 4));
  }
  v35 = *((_DWORD *)v11 + 7);
  if ( v35 != a9 )
  {
    if ( v35 )
    {
      if ( !v28((volatile LONG *)(v35 + 4)) )
        (**(void (__thiscall ***)(int, int))v35)(v35, 1);
    }
    *((_DWORD *)v11 + 7) = a9;
    if ( a9 )
      InterlockedIncrement((volatile LONG *)(a9 + 4));
  }
  v36 = *((_DWORD *)v11 + 8);
  if ( v36 != a10 )
  {
    if ( v36 )
    {
      if ( !v28((volatile LONG *)(v36 + 4)) )
        (**(void (__thiscall ***)(int, int))v36)(v36, 1);
    }
    *((_DWORD *)v11 + 8) = a10;
    if ( a10 )
      InterlockedIncrement((volatile LONG *)(a10 + 4));
  }
  v37 = *((_DWORD *)v11 + 9);
  if ( v37 )
  {
    if ( !v28((volatile LONG *)(v37 + 4)) )
      (**(void (__thiscall ***)(int, int))v37)(v37, 1);
    *((_DWORD *)v11 + 9) = 0;
  }
  v38 = *(_DWORD *)(this + 0xC8);
  *(_DWORD *)v38 = 0;
  *(_DWORD *)(v38 + 4) = 0;
  *(_BYTE *)(v38 + 8) = 0;
  v39 = *(_DWORD *)(this + 0xD0);
  *(_DWORD *)v39 = 0;
  *(_DWORD *)(v39 + 4) = 0;
  *(_BYTE *)(v39 + 8) = 0;
  v62 = 0;
  v40 = (char *)(v11 - v66);
  v41 = (int *)v66;
  v65 = v40;
  v67 = v69 - (_DWORD)v66;
  while ( 1 )
  {
    v42 = *(int *)((char *)v41 + (_DWORD)v40);
    if ( !v42 )
      break;
    v43 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v42 + 4))(*(int *)((char *)v41 + (_DWORD)v40));
    if ( v43 )
    {
      while ( (char *)v43 != dword_B3F95C )
      {
        v43 = *(_DWORD *)(v43 + 4);
        if ( !v43 )
          goto LABEL_82;
      }
      v44 = 1;
    }
    else
    {
LABEL_82:
      v44 = 0;
    }
    v45 = v44 != 0 ? v42 : 0;
    if ( v45 )
    {
      v46 = *(const char **)(v45 + 0x38);
      sub_7B4160(Src, v46, (int)"_n");
      if ( Src[0] )
      {
        v47 = sub_7B8200(&v69, Src, 1, 1);
        v48 = *v41;
        v49 = *v41 == *v47;
        v71 = 3;
        if ( !v49 )
        {
          if ( v48 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v48 + 4)) )
              (**(void (__thiscall ***)(int, int))v48)(v48, 1);
          }
          v50 = *v47;
          v49 = *v47 == 0;
          *v41 = *v47;
          if ( !v49 )
            InterlockedIncrement((volatile LONG *)(v50 + 4));
        }
        v51 = (void (__thiscall ***)(_DWORD, int))v69;
        v71 = 0xFFFFFFFF;
        if ( v69 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v69 + 4)) )
          {
            if ( v51 )
              (**v51)(v51, 1);
          }
        }
        v52 = *v41;
        if ( *v41 )
        {
          if ( *(_DWORD *)(v52 + 0x24) )
          {
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v52 + 0x24) + 0xC))(*(_DWORD *)(v52 + 0x24)) )
            {
              if ( *(_DWORD *)(v52 + 0x24) )
                v53 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v52 + 0x24) + 0xC))(*(_DWORD *)(v52 + 0x24));
              else
                v53 = 0;
              v54 = *(_DWORD *)(v53 + 4);
              v55 = v54 == 5 || v54 == 6 || v54 == 1;
              *(_BYTE *)(v62 + *(_DWORD *)(this + 0xD0)) = v55;
            }
          }
        }
      }
      sub_7B4160(Src, v46, (int)"_g");
      if ( Src[0] )
      {
        v56 = sub_7B8200(&v68, Src, 1, 1);
        v57 = *(int *)((char *)v41 + v67);
        v49 = v57 == *v56;
        v71 = 4;
        if ( !v49 )
        {
          if ( v57 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v57 + 4)) )
              (**(void (__thiscall ***)(int, int))v57)(v57, 1);
          }
          v58 = *v56;
          v49 = *v56 == 0;
          *(int *)((char *)v41 + v67) = *v56;
          if ( !v49 )
            InterlockedIncrement((volatile LONG *)(v58 + 4));
        }
        v59 = (void (__thiscall ***)(_DWORD, int))v68;
        v71 = 0xFFFFFFFF;
        if ( v68 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v68 + 4)) )
          {
            if ( v59 )
              (**v59)(v59, 1);
          }
        }
      }
    }
    ++v41;
    if ( ++v62 >= 9 )
      break;
    v40 = v65;
  }
  if ( v62 <= 0 )
  {
    *(_WORD *)(this + 0xCC) = 0;
    return 0;
  }
  else
  {
    *(_WORD *)(this + 0xCC) = v62 - 1;
    return v62 - 1;
  }
}
