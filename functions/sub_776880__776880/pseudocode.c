int __userpurge sub_776880@<eax>(int a1@<ecx>, int a2@<edi>, unsigned int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // edi
  bool v10; // zf
  int result; // eax
  char v12; // dl

  v6 = (*(unsigned __int8 *)(a4 + 0x18) >> 1) & 7; /*0x77688d*/
  *(_DWORD *)(a1 + 0x34) = v6; /*0x776890*/
  v7 = **(_DWORD **)(a4 + 0x20); /*0x776896*/
  if ( v7 && *(_DWORD *)(v7 + 8) && !v6 ) /*0x7768a4*/
    return (*(int (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x7768a4*/
             *(_DWORD *)(a1 + 0x24),
             0x89,
             0,
             0);
  v8 = *(unsigned __int16 *)(a5 + 0x18); /*0x7768c5*/
  v9 = (v8 >> 4) & 3; /*0x7768cf*/
  if ( (v8 & 8) == 0 ) /*0x7768d4*/
  {
    if ( !v9 || v9 == 2 ) /*0x7768e0*/
    {
      v10 = *(_DWORD *)(a1 + 0x38) == 1; /*0x7768ef*/
      *(_BYTE *)(a1 + 0x31) = 0; /*0x7768f3*/
      if ( v10 ) /*0x7768f7*/
      {
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x77690e*/
          *(_DWORD *)(a1 + 0x24),
          0x94,
          0,
          0);
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x776921*/
          *(_DWORD *)(a1 + 0x24),
          0x93,
          0,
          0);
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x776934*/
          *(_DWORD *)(a1 + 0x24),
          0x91,
          0,
          0);
        *(_DWORD *)(a1 + 0x38) = 0; /*0x776936*/
      }
      goto LABEL_20; /*0x77693d*/
    }
    return (*(int (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x776a2d*/
             *(_DWORD *)(a1 + 0x24),
             0x89,
             0,
             0);
  }
  if ( v9 != *(_DWORD *)(a1 + 0x38) ) /*0x776945*/
  {
    if ( v9 ) /*0x77694c*/
    {
      if ( v9 != 1 ) /*0x776951*/
      {
        if ( v9 != 2 ) /*0x776956*/
        {
LABEL_18:
          *(_DWORD *)(a1 + 0x38) = v9; /*0x7769c3*/
          goto LABEL_19; /*0x7769c3*/
        }
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x776969*/
          *(_DWORD *)(a1 + 0x24),
          0x94,
          0,
          0,
          a2);
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x77697c*/
          *(_DWORD *)(a1 + 0x24),
          0x93,
          1,
          0);
LABEL_17:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))(*(_DWORD *)(a1 + 0x24), 0x91); /*0x7769b4*/
        goto LABEL_18; /*0x7769c1*/
      }
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x776988*/
        *(_DWORD *)(a1 + 0x24),
        0x94,
        1,
        0,
        a2);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x77699b*/
        *(_DWORD *)(a1 + 0x24),
        0x94,
        0,
        0,
        a2);
    }
    (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x7769ae*/
      *(_DWORD *)(a1 + 0x24),
      0x93,
      0,
      0);
    goto LABEL_17; /*0x7769ae*/
  }
LABEL_19:
  *(_BYTE *)(a1 + 0x31) = 1; /*0x7769c6*/
LABEL_20:
  (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))( /*0x7769ca*/
    *(_DWORD *)(a1 + 0x24),
    0x89,
    1,
    0);
  result = *(_DWORD *)(a1 + 0x2C); /*0x7769dd*/
  if ( result == *(_DWORD *)(a1 + 0x28) || a3 != result || *(_BYTE *)(a1 + 0x31) != *(_BYTE *)(a1 + 0x30) ) /*0x7769f3*/
  {
    result = sub_7763A0((_DWORD *)a1, a3); /*0x7769f8*/
    v12 = *(_BYTE *)(a1 + 0x31); /*0x7769fd*/
    *(_DWORD *)(a1 + 0x2C) = a3; /*0x776a00*/
    *(_BYTE *)(a1 + 0x30) = v12; /*0x776a03*/
  }
  return result; /*0x776a07*/
}
