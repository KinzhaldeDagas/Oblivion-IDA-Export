int __thiscall sub_7FB470(_DWORD **this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // eax
  char v13; // cl
  char v14; // bl
  int v15; // ebp
  void (__stdcall *v16)(int, int, _DWORD); // eax
  void (__stdcall *v17)(int, int, _DWORD); // eax
  void (__stdcall *v18)(int, int, _DWORD); // eax
  int v20; // [esp+Ch] [ebp-18h]

  v9 = a5[6];
  v10 = a5[2];
  if ( v9 && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x54))(v9) == 0xA )
    v11 = a5[6];
  else
    v11 = 0;
  v12 = dword_B42E90;
  if ( dword_B42E90 >= 0x156 && v12 <= 0x15A )
    goto LABEL_37;
  v13 = 0;
  v14 = 0;
  v15 = dword_B42EAC;
  if ( !v10 )
  {
LABEL_25:
    if ( (v12 < 0x14E || v12 > 0x151) && (_WORD)v15 != 5 )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0xF, 0, 0);
      (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))(0x1B, 0, 0);
      goto LABEL_37;
    }
    if ( (*(_WORD *)(v10 + 0x18) & 0x200) != 0 )
      goto LABEL_32;
    if ( (*(_BYTE *)(v10 + 0x18) & 1) != 0 )
    {
      if ( (_WORD)v15 == 5 )
      {
LABEL_32:
        (*(void (__thiscall **)(_DWORD, int))(**(this + 6) + 8))(*(this + 6), v10);
        if ( (*(_BYTE *)(v10 + 0x18) & 1) == 0 )
          goto LABEL_37;
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0x1B, 0, 0);
        if ( (*(_WORD *)(v10 + 0x18) & 0x200) != 0 )
          goto LABEL_37;
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0xF, 1, 0);
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0x19, 5, 0);
        v20 = 0x80;
LABEL_35:
        v18 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64);
        goto LABEL_36;
      }
    }
    else if ( (_WORD)v15 == 5 )
    {
      (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))(0xF, 0, 0);
      goto LABEL_37;
    }
    (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0xF, 1, 0);
    (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 6) + 0x64))(*(this + 6), 0x19, 5, 0);
    v20 = 0;
    goto LABEL_35;
  }
  if ( (*(_WORD *)(v10 + 0x18) & 0x200) != 0 && ((*(_DWORD *)(v11 + 0x1C) & 0x800) == 0 || *(float *)(v11 + 0x20) < 1.0) )
    v14 = 1;
  if ( (*(_BYTE *)(v10 + 0x18) & 1) != 0 && (*(float *)(v11 + 0x20) < 1.0 || (*(_DWORD *)(v11 + 0x1C) & 0x100) != 0) )
  {
    v13 = 1;
  }
  else if ( !v14 )
  {
LABEL_24:
    v12 = dword_B42E90;
    goto LABEL_25;
  }
  if ( (_WORD)v15 == 5 )
    goto LABEL_24;
  v16 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64);
  if ( v13 )
  {
    v16(0x1B, 1, 0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))(
      0x13,
      (*(this + 6))[((*(unsigned __int8 *)(v10 + 0x18) >> 1) & 0xF) + 8],
      0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))(
      0x14,
      (*(this + 6))[((*(unsigned __int16 *)(v10 + 0x18) >> 5) & 0xF) + 8],
      0);
  }
  else
  {
    v16(0x1B, 0, 0);
  }
  v17 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64);
  if ( v14 )
  {
    v17(0xF, 1, 0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(**(this + 6) + 0x64))(
      0x19,
      (*(this + 6))[((*(unsigned __int16 *)(v10 + 0x18) >> 0xA) & 7) + 0x13],
      0);
    v18 = *(void (__stdcall **)(int, int, _DWORD))(**(this + 6) + 0x64);
    v20 = *(unsigned __int8 *)(v10 + 0x1A);
LABEL_36:
    v18(0x18, v20, 0);
    goto LABEL_37;
  }
  v17(0xF, 0, 0);
LABEL_37:
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x20))(*(this + 6), a5[7]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x24))(*(this + 6), a5[0xA]);
  return 0;
}
