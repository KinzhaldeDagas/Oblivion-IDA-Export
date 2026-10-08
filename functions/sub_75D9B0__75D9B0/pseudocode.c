int __thiscall sub_75D9B0(int this, int a2)
{
  __int16 v2; // bp
  int v4; // edi
  unsigned __int16 v5; // bx
  int v6; // ecx
  bool v7; // zf
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  int *v9; // eax
  void (__thiscall ***v10)(_DWORD, int); // edi
  int *v11; // eax
  void (__thiscall ***v12)(_DWORD, int); // ebx
  void (__thiscall ***v13)(_DWORD, int); // edi
  int v14; // edi
  int result; // eax
  int v16; // [esp+10h] [ebp-20h]
  int v17; // [esp+24h] [ebp-Ch] BYREF
  int v18; // [esp+28h] [ebp-8h] BYREF
  int v19; // [esp+2Ch] [ebp-4h]

  v2 = a2; /*0x75d9b5*/
  v4 = (unsigned __int16)a2; /*0x75d9c4*/
  v5 = *(_WORD *)(this + 0x48) - 1; /*0x75d9d4*/
  v19 = *(unsigned __int16 *)(*(_DWORD *)(this + 0x5C) + 0x1C * (unsigned __int16)a2 + 0x18); /*0x75d9df*/
  sub_759860((_WORD *)this, a2); /*0x75d9e3*/
  v6 = *(_DWORD *)(this + 0x68); /*0x75d9e8*/
  v7 = v2 == (__int16)v5; /*0x75d9eb*/
  v8 = InterlockedDecrement; /*0x75d9ee*/
  a2 = 0; /*0x75d9f4*/
  if ( v7 ) /*0x75d9fc*/
  {
    v9 = (int *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 0x8C))(v6, &v17, v5); /*0x75da0f*/
    OB_NiSmartPointer_Assign_010201A0(&a2, v9); /*0x75da16*/
    if ( v17 ) /*0x75da21*/
    {
      v10 = (void (__thiscall ***)(_DWORD, int))v17; /*0x75da27*/
      if ( !v8((volatile LONG *)(v17 + 4)) ) /*0x75da2d*/
LABEL_14:
        (**v10)(v10, 1); /*0x75daf0*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 0x8C))(v6, &v17, v5); /*0x75da5f*/
    v11 = (int *)(*(int (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(this + 0x68) + 0x8C))( /*0x75da72*/
                   *(_DWORD *)(this + 0x68),
                   &v18,
                   v4);
    OB_NiSmartPointer_Assign_010201A0(&a2, v11); /*0x75da79*/
    if ( v18 ) /*0x75da84*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))v18; /*0x75da86*/
      if ( !v8((volatile LONG *)(v18 + 4)) ) /*0x75da8c*/
        (**v12)(v12, 1); /*0x75da9e*/
    }
    (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(this + 0x68) + 0x90))( /*0x75dab6*/
      *(_DWORD *)(this + 0x68),
      &v18,
      v4,
      v17);
    if ( v18 ) /*0x75dabe*/
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v18; /*0x75dac0*/
      if ( !v8((volatile LONG *)(v18 + 4)) ) /*0x75dac6*/
        (**v13)(v13, 1); /*0x75dad8*/
    }
    v10 = (void (__thiscall ***)(_DWORD, int))v17; /*0x75dada*/
    if ( v17 && !v8((volatile LONG *)(v17 + 4)) && v10 ) /*0x75daee*/
      goto LABEL_14; /*0x75daee*/
  }
  v14 = a2; /*0x75dafa*/
  v16 = a2; /*0x75db03*/
  if ( a2 ) /*0x75db05*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x75db0b*/
  result = sub_75D910(this, (unsigned __int16)v19, v16); /*0x75db19*/
  if ( v14 ) /*0x75db20*/
  {
    result = v8((volatile LONG *)(v14 + 4)); /*0x75db26*/
    if ( !result ) /*0x75db2a*/
      return (**(int (__thiscall ***)(int, int))v14)(v14, 1); /*0x75db34*/
  }
  return result; /*0x75db36*/
}
