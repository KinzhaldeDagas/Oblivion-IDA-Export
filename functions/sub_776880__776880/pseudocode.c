int __userpurge sub_776880@<eax>(int a1@<ecx>, int a2@<edi>, unsigned int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // edi
  bool v10; // zf
  int result; // eax
  char v12; // dl

  v6 = (*(unsigned __int8 *)(a4 + 0x18) >> 1) & 7;
  *(_DWORD *)(a1 + 0x34) = v6;
  v7 = **(_DWORD **)(a4 + 0x20);
  if ( v7 && *(_DWORD *)(v7 + 8) && !v6 )
    return (*(int (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
             *(_DWORD *)(a1 + 0x24),
             0x89,
             0,
             0);
  v8 = *(unsigned __int16 *)(a5 + 0x18);
  v9 = (v8 >> 4) & 3;
  if ( (v8 & 8) == 0 )
  {
    if ( !v9 || v9 == 2 )
    {
      v10 = *(_DWORD *)(a1 + 0x38) == 1;
      *(_BYTE *)(a1 + 0x31) = 0;
      if ( v10 )
      {
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
          *(_DWORD *)(a1 + 0x24),
          0x94,
          0,
          0);
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
          *(_DWORD *)(a1 + 0x24),
          0x93,
          0,
          0);
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
          *(_DWORD *)(a1 + 0x24),
          0x91,
          0,
          0);
        *(_DWORD *)(a1 + 0x38) = 0;
      }
      goto LABEL_20;
    }
    return (*(int (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
             *(_DWORD *)(a1 + 0x24),
             0x89,
             0,
             0);
  }
  if ( v9 != *(_DWORD *)(a1 + 0x38) )
  {
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        if ( v9 != 2 )
        {
LABEL_18:
          *(_DWORD *)(a1 + 0x38) = v9;
          goto LABEL_19;
        }
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))(
          *(_DWORD *)(a1 + 0x24),
          0x94,
          0,
          0,
          a2);
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
          *(_DWORD *)(a1 + 0x24),
          0x93,
          1,
          0);
LABEL_17:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))(*(_DWORD *)(a1 + 0x24), 0x91);
        goto LABEL_18;
      }
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))(
        *(_DWORD *)(a1 + 0x24),
        0x94,
        1,
        0,
        a2);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x24) + 0x64))(
        *(_DWORD *)(a1 + 0x24),
        0x94,
        0,
        0,
        a2);
    }
    (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
      *(_DWORD *)(a1 + 0x24),
      0x93,
      0,
      0);
    goto LABEL_17;
  }
LABEL_19:
  *(_BYTE *)(a1 + 0x31) = 1;
LABEL_20:
  (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(a1 + 0x24) + 0x64))(
    *(_DWORD *)(a1 + 0x24),
    0x89,
    1,
    0);
  result = *(_DWORD *)(a1 + 0x2C);
  if ( result == *(_DWORD *)(a1 + 0x28) || a3 != result || *(_BYTE *)(a1 + 0x31) != *(_BYTE *)(a1 + 0x30) )
  {
    result = sub_7763A0((_DWORD *)a1, a3);
    v12 = *(_BYTE *)(a1 + 0x31);
    *(_DWORD *)(a1 + 0x2C) = a3;
    *(_BYTE *)(a1 + 0x30) = v12;
  }
  return result;
}
