LONG __thiscall sub_7EC5E0(_DWORD *this)
{
  LONG result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebx
  int v8; // ebp
  int v9; // edi
  _DWORD *v10; // ebx
  int v11; // ebx
  int v12; // ebp
  int v13; // edi
  _DWORD *v14; // ebx
  int v15; // ebx
  int v16; // ebp
  int v17; // edi
  _DWORD *v18; // ebx
  int v19; // ebx
  int v20; // ebp
  int v21; // edi
  _DWORD *v22; // ebx
  int v23; // ebx
  int v24; // esi
  int v25; // edi
  _DWORD *v26; // esi

  result = (*(int (__thiscall **)(_DWORD *))(*this + 0xB0))(this); /*0x7ec5ee*/
  v3 = *(this + 0x1C); /*0x7ec5f0*/
  v4 = *(this + 0x27); /*0x7ec5f3*/
  v5 = *(_DWORD *)(v3 + 0x58); /*0x7ec5f9*/
  v6 = (_DWORD *)(v3 + 0x58); /*0x7ec5fc*/
  if ( v5 != v4 ) /*0x7ec601*/
  {
    if ( v5 ) /*0x7ec605*/
    {
      result = InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x7ec60b*/
      if ( !result ) /*0x7ec613*/
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x7ec621*/
    }
    *v6 = v4; /*0x7ec625*/
    if ( v4 ) /*0x7ec627*/
      result = InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x7ec62d*/
  }
  v7 = *(this + 0x1C); /*0x7ec633*/
  v8 = *(this + 0x2A); /*0x7ec636*/
  v9 = *(_DWORD *)(v7 + 0x44); /*0x7ec63c*/
  v10 = (_DWORD *)(v7 + 0x44); /*0x7ec63f*/
  if ( v9 != v8 ) /*0x7ec644*/
  {
    if ( v9 ) /*0x7ec648*/
    {
      result = InterlockedDecrement((volatile LONG *)(v9 + 4)); /*0x7ec64e*/
      if ( !result ) /*0x7ec656*/
        result = (**(int (__thiscall ***)(int, int))v9)(v9, 1); /*0x7ec664*/
    }
    *v10 = v8; /*0x7ec668*/
    if ( v8 ) /*0x7ec66a*/
      result = InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x7ec670*/
  }
  v11 = *(this + 0x2B); /*0x7ec676*/
  v12 = *(this + 0x26); /*0x7ec67c*/
  v13 = *(_DWORD *)(v11 + 0x58); /*0x7ec682*/
  v14 = (_DWORD *)(v11 + 0x58); /*0x7ec685*/
  if ( v13 != v12 ) /*0x7ec68a*/
  {
    if ( v13 ) /*0x7ec68e*/
    {
      result = InterlockedDecrement((volatile LONG *)(v13 + 4)); /*0x7ec694*/
      if ( !result ) /*0x7ec69c*/
        result = (**(int (__thiscall ***)(int, int))v13)(v13, 1); /*0x7ec6aa*/
    }
    *v14 = v12; /*0x7ec6ae*/
    if ( v12 ) /*0x7ec6b0*/
      result = InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x7ec6b6*/
  }
  v15 = *(this + 0x2B); /*0x7ec6bc*/
  v16 = *(this + 0x29); /*0x7ec6c2*/
  v17 = *(_DWORD *)(v15 + 0x44); /*0x7ec6c8*/
  v18 = (_DWORD *)(v15 + 0x44); /*0x7ec6cb*/
  if ( v17 != v16 ) /*0x7ec6d0*/
  {
    if ( v17 ) /*0x7ec6d4*/
    {
      result = InterlockedDecrement((volatile LONG *)(v17 + 4)); /*0x7ec6da*/
      if ( !result ) /*0x7ec6e2*/
        result = (**(int (__thiscall ***)(int, int))v17)(v17, 1); /*0x7ec6f0*/
    }
    *v18 = v16; /*0x7ec6f4*/
    if ( v16 ) /*0x7ec6f6*/
      result = InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x7ec6fc*/
  }
  v19 = *(this + 0x2C); /*0x7ec702*/
  v20 = *(this + 0x25); /*0x7ec708*/
  v21 = *(_DWORD *)(v19 + 0x58); /*0x7ec70e*/
  v22 = (_DWORD *)(v19 + 0x58); /*0x7ec711*/
  if ( v21 != v20 ) /*0x7ec716*/
  {
    if ( v21 ) /*0x7ec71a*/
    {
      result = InterlockedDecrement((volatile LONG *)(v21 + 4)); /*0x7ec720*/
      if ( !result ) /*0x7ec728*/
        result = (**(int (__thiscall ***)(int, int))v21)(v21, 1); /*0x7ec736*/
    }
    *v22 = v20; /*0x7ec73a*/
    if ( v20 ) /*0x7ec73c*/
      result = InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x7ec742*/
  }
  v23 = *(this + 0x28); /*0x7ec748*/
  v24 = *(this + 0x2C); /*0x7ec74e*/
  v25 = *(_DWORD *)(v24 + 0x44); /*0x7ec754*/
  v26 = (_DWORD *)(v24 + 0x44); /*0x7ec757*/
  if ( v25 != v23 ) /*0x7ec75c*/
  {
    if ( v25 ) /*0x7ec760*/
    {
      result = InterlockedDecrement((volatile LONG *)(v25 + 4)); /*0x7ec766*/
      if ( !result ) /*0x7ec76e*/
        result = (**(int (__thiscall ***)(int, int))v25)(v25, 1); /*0x7ec77c*/
    }
    *v26 = v23; /*0x7ec780*/
    if ( v23 ) /*0x7ec782*/
      return InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x7ec788*/
  }
  return result; /*0x7ec78e*/
}
