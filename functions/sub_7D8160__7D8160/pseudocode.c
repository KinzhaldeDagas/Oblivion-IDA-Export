int __thiscall sub_7D8160(int **this, const char *a2, char a3, const char *a4)
{
  int *v5; // eax
  int *v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // ebp
  int *v8; // eax
  int *v9; // ecx
  LONG (__stdcall *v10)(volatile LONG *); // ebx
  void (__thiscall ***v11)(_DWORD, int); // ebp
  void (__thiscall *v12)(int **, _DWORD, int); // edx
  void (__thiscall ***v13)(_DWORD, int); // ebp
  void (__thiscall *v14)(int **, int, int); // edx
  void (__thiscall ***v15)(_DWORD, int); // edi
  int v16; // edi
  char v17; // bl
  int v18; // eax
  int v19; // eax
  bool v20; // al
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  char v25; // al
  int v26; // ebx
  bool v27; // zf
  int v28; // edi
  int v29; // eax
  int v30; // eax
  bool v31; // al
  int result; // eax
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // [esp+14h] [ebp-120h] BYREF
  const char *v38; // [esp+18h] [ebp-11Ch]
  int v39; // [esp+1Ch] [ebp-118h] BYREF
  char Src[260]; // [esp+20h] [ebp-114h] BYREF
  int v41; // [esp+130h] [ebp-4h]

  v38 = a2;
  sub_7B4160(Src, a2, (int)"_n");
  if ( Src[0] )
  {
    v5 = sub_7B8200(&v37, Src, a3, 1);
    v6 = *(this + 0x30);
    v41 = 0;
    sub_55E2A0(v6, v5);
    v41 = 0xFFFFFFFF;
    if ( v37 )
    {
      v7 = (void (__thiscall ***)(_DWORD, int))v37;
      if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) )
        (**v7)(v7, 1);
    }
  }
  if ( a4
    && (sub_7B4160(Src, a4, (int)"_n"), Src[0])
    && (v8 = sub_7B8200(&v37, Src, a3, 1), v9 = *(this + 0x30) + 1, v41 = 1, sub_55E2A0(v9, v8), v41 = 0xFFFFFFFF, v37) )
  {
    v10 = InterlockedDecrement;
    v11 = (void (__thiscall ***)(_DWORD, int))v37;
    if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) )
      (**v11)(v11, 1);
  }
  else
  {
    v10 = InterlockedDecrement;
  }
  sub_7B4160(Src, v38, (int)"_g");
  if ( Src[0] )
  {
    sub_7B8200(&v37, Src, a3, 1);
    v12 = (void (__thiscall *)(int **, _DWORD, int))(*this)[0x25];
    v41 = 2;
    v12(this, 0, v37);
    v41 = 0xFFFFFFFF;
    if ( v37 )
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v37;
      if ( !v10((volatile LONG *)(v37 + 4)) )
        (**v13)(v13, 1);
    }
  }
  if ( ((unsigned int)*(this + 7) & 0x40000) != 0 )
  {
    sub_7B4160(Src, v38, (int)&off_A7D0E8);
    if ( Src[0] )
    {
      sub_7B8200(&v39, Src, a3, 1);
      v14 = (void (__thiscall *)(int **, int, int))(*this)[0x20];
      v41 = 3;
      v14(this, 1, v39);
      v41 = 0xFFFFFFFF;
      if ( v39 )
      {
        v15 = (void (__thiscall ***)(_DWORD, int))v39;
        if ( !v10((volatile LONG *)(v39 + 4)) )
          (**v15)(v15, 1);
      }
    }
  }
  if ( ((unsigned int)*(this + 7) & 0x20000) == 0 )
  {
    v16 = **(this + 0x30);
    v17 = ((unsigned int)*(this + 7) & 0x80) != 0;
    if ( v16 )
    {
      if ( *(_DWORD *)(v16 + 0x24) )
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 0x24) + 0xC))(*(_DWORD *)(v16 + 0x24)) )
        {
          if ( *(_DWORD *)(v16 + 0x24) )
            v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 0x24) + 0xC))(*(_DWORD *)(v16 + 0x24));
          else
            v18 = 0;
          v19 = *(_DWORD *)(v18 + 4);
          v20 = v19 == 5 || v19 == 6 || v19 == 1;
          v17 |= v20;
        }
      }
    }
    if ( v17 )
      *(this + 7) = (int *)((unsigned int)*(this + 7) | 1);
    else
      *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFFFE);
    v21 = (int)*(this + 0x30);
    *(this + 9) = 0;
    v22 = *(_DWORD *)(v21 + 4);
    if ( v22
      && *(_DWORD *)(v22 + 0x24)
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x24) + 0xC))(*(_DWORD *)(v22 + 0x24))
      && (!*(_DWORD *)(v22 + 0x24)
        ? (v23 = 0)
        : (v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x24) + 0xC))(*(_DWORD *)(v22 + 0x24))),
          (v24 = *(_DWORD *)(v23 + 4), v24 == 5) || v24 == 6 || v24 == 1 ? (v25 = 1) : (v25 = 0),
          v25) )
    {
      *(this + 7) = (int *)((unsigned int)*(this + 7) | 0x10);
    }
    else
    {
      *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFFEF);
    }
    v26 = 0;
    v27 = *((_WORD *)this + 0x5C) == 0;
    *(this + 9) = 0;
    if ( !v27 )
    {
      do
      {
        v28 = (*(this + 0x30))[v26];
        if ( v28 )
        {
          if ( *(_DWORD *)(v28 + 0x24) )
          {
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 0x24) + 0xC))(*(_DWORD *)(v28 + 0x24)) )
            {
              if ( *(_DWORD *)(v28 + 0x24) )
                v29 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 0x24) + 0xC))(*(_DWORD *)(v28 + 0x24));
              else
                v29 = 0;
              v30 = *(_DWORD *)(v29 + 4);
              v31 = v30 == 5 || v30 == 6 || v30 == 1;
              *((_BYTE *)*(this + 0x34) + v26) = v31;
            }
          }
        }
        ++v26;
      }
      while ( v26 < *((unsigned __int16 *)this + 0x5C) );
    }
  }
  result = (int)*(this + 0x2F);
  v33 = *(_DWORD *)result;
  if ( *(_DWORD *)result
    && *(_DWORD *)(v33 + 0x24)
    && (result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v33 + 0x24) + 0xC))(*(_DWORD *)(v33 + 0x24))) != 0
    && (!*(_DWORD *)(v33 + 0x24)
      ? (v34 = 0)
      : (v34 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v33 + 0x24) + 0xC))(*(_DWORD *)(v33 + 0x24))),
        (v35 = *(_DWORD *)(v34 + 4), v35 == 5) || v35 == 6 || v35 == 1 ? (result = 1) : (result = 0),
        (_BYTE)result && (result = (int)*(this + 7), (result & 0x800) == 0)) )
  {
    result |= 0x100u;
    *(this + 7) = (int *)result;
  }
  else
  {
    *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFEFF);
  }
  v36 = (int)*(this + 0x2F);
  *(this + 9) = 0;
  v27 = *(_DWORD *)(v36 + 4) == 0;
  *(this + 9) = 0;
  if ( v27 )
    *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFFF7);
  else
    *(this + 7) = (int *)((unsigned int)*(this + 7) | 8);
  return result;
}
