int __thiscall sub_89AD80(_DWORD *this)
{
  int v2; // ecx
  _RTL_CRITICAL_SECTION_0 *v3; // edi
  int v4; // ecx
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int v7; // edx
  int v8; // eax
  int (__thiscall ***v9)(_DWORD, int); // ecx
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // edi
  int v13; // ecx
  void (__thiscall ***v14)(_DWORD, int); // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // edi
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int result; // eax
  int v52; // ecx
  char v53; // [esp+19h] [ebp-1h] BYREF

  v2 = *(this + 0x17);
  *this = &off_A96D6C;
  if ( *(_WORD *)(v2 + 4) )
  {
    if ( !--*(_WORD *)(v2 + 6) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = (_RTL_CRITICAL_SECTION_0 *)*(this + 0x28);
  *(this + 0x17) = 0;
  if ( v3 )
  {
    DeleteCriticalSection(v3);
    (*(void (__thiscall **)(int, _RTL_CRITICAL_SECTION_0 *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      v3,
      0x18,
      0x12);
    *(this + 0x28) = 0;
  }
  v4 = *(this + 0x18);
  if ( v4 )
  {
    if ( *(_WORD *)(v4 + 4) )
    {
      if ( !--*(_WORD *)(v4 + 6) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 0x18) = 0;
  }
  while ( (int)*(this + 0x2F) > 0 )
    sub_899B30(this, *(int (__stdcall ****)(signed int))*(this + 0x2E));
  while ( (int)*(this + 0xF) > 0 )
  {
    v5 = *(_DWORD *)*(this + 0xE);
    if ( !*(_DWORD *)(v5 + 0x38) )
      break;
    sub_8996C0(this, &v53, **(int (__stdcall *****)(signed int))(v5 + 0x34));
  }
  while ( (int)*(this + 0x12) > 0 )
    sub_8996C0(this, &v53, **(int (__stdcall *****)(signed int))(*(_DWORD *)*(this + 0x11) + 0x34));
  if ( !*((_BYTE *)this + 0xA4) )
  {
    sub_8CB610((int)this, *(_DWORD *)(*(this + 0xE) + 4 * *(this + 0xF) - 4));
    v6 = *(void (__thiscall ****)(_DWORD, int))(*(this + 0xE) + 4 * *(this + 0xF) - 4);
    if ( v6 )
      (**v6)(v6, 1);
    --*(this + 0xF);
  }
  sub_8996C0(this, &v53, (int (__stdcall ***)(signed int))*(this + 0xD));
  v7 = *(this + 0xC);
  *(this + 0xD) = 0;
  if ( *(int *)(v7 + 0x38) > 0 )
  {
    do
      sub_8996C0(this, &v53, **(int (__stdcall *****)(signed int))(*(this + 0xC) + 0x34));
    while ( *(int *)(*(this + 0xC) + 0x38) > 0 );
  }
  LOWORD(v8) = sub_8CB610((int)this, *(this + 0xC));
  v9 = (int (__thiscall ***)(_DWORD, int))*(this + 0xC);
  if ( v9 )
    v8 = (**v9)(v9, 1);
  *(this + 0xC) = 0;
  sub_8DCA40(v8, (int)this);
  v10 = *(this + 0x19);
  if ( *(_WORD *)(v10 + 4) )
  {
    if ( !--*(_WORD *)(v10 + 6) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *(this + 0x1F);
  *(this + 0x19) = 0;
  if ( *(_WORD *)(v11 + 4) )
  {
    if ( !--*(_WORD *)(v11 + 6) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  v12 = (_DWORD *)*(this + 0x1A);
  *(this + 0x1F) = 0;
  if ( v12 )
  {
    sub_8D8350(v12);
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v12, 0x104, 0x24);
  }
  v13 = *(this + 0x55);
  if ( v13 )
  {
    if ( *(_WORD *)(v13 + 4) )
    {
      if ( !--*(_WORD *)(v13 + 6) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
  }
  v14 = (void (__thiscall ***)(_DWORD, int))*(this + 0x1B);
  if ( v14 )
    (**v14)(v14, 1);
  v15 = (void (__thiscall ***)(_DWORD, int))*(this + 0x1C);
  if ( v15 )
    (**v15)(v15, 1);
  v16 = *(this + 0x1E);
  if ( *(_WORD *)(v16 + 4) )
  {
    if ( !--*(_WORD *)(v16 + 6) )
      (**(void (__thiscall ***)(int, int))v16)(v16, 1);
  }
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
    dword_BA7D98,
    *(_DWORD *)(*(this + 0x1D) + 0x20),
    8,
    0x1C);
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
    dword_BA7D98,
    *(this + 0x1D),
    0x2C,
    0x1C);
  v17 = *(this + 2);
  if ( *(_WORD *)(v17 + 4) )
  {
    if ( !--*(_WORD *)(v17 + 6) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
  }
  v18 = *(this + 0x20);
  if ( v18 )
  {
    sub_8D87E0(*(this + 0x20));
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v18, 0x28, 0x2C);
  }
  v19 = *(this + 0x54);
  v20 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v19 >= 0 )
  {
    v22 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v22 )
      v22 = dword_BA7D9C;
    sub_8A75D0(v22, (_DWORD *)*(this + 0x52), 4 * v19, 0x14);
  }
  v23 = *(this + 0x51);
  if ( v23 >= 0 )
  {
    v24 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v24 )
      v24 = dword_BA7D9C;
    sub_8A75D0(v24, (_DWORD *)*(this + 0x4F), 4 * v23, 0x14);
  }
  v25 = *(this + 0x4E);
  if ( v25 >= 0 )
  {
    v26 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v26 )
      v26 = dword_BA7D9C;
    sub_8A75D0(v26, (_DWORD *)*(this + 0x4C), 4 * v25, 0x14);
  }
  v27 = *(this + 0x4B);
  if ( v27 >= 0 )
  {
    v28 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v28 )
      v28 = dword_BA7D9C;
    sub_8A75D0(v28, (_DWORD *)*(this + 0x49), 4 * v27, 0x14);
  }
  v29 = *(this + 0x48);
  if ( v29 >= 0 )
  {
    v30 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v30 )
      v30 = dword_BA7D9C;
    sub_8A75D0(v30, (_DWORD *)*(this + 0x46), 4 * v29, 0x14);
  }
  v31 = *(this + 0x45);
  if ( v31 >= 0 )
  {
    v32 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v32 )
      v32 = dword_BA7D9C;
    sub_8A75D0(v32, (_DWORD *)*(this + 0x43), 4 * v31, 0x14);
  }
  v33 = *(this + 0x42);
  if ( v33 >= 0 )
  {
    v34 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v34 )
      v34 = dword_BA7D9C;
    sub_8A75D0(v34, (_DWORD *)*(this + 0x40), 4 * v33, 0x14);
  }
  v35 = *(this + 0x3F);
  if ( v35 >= 0 )
  {
    v36 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v36 )
      v36 = dword_BA7D9C;
    sub_8A75D0(v36, (_DWORD *)*(this + 0x3D), 4 * v35, 0x14);
  }
  v37 = *(this + 0x3C);
  if ( v37 >= 0 )
  {
    v38 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v38 )
      v38 = dword_BA7D9C;
    sub_8A75D0(v38, (_DWORD *)*(this + 0x3A), 4 * v37, 0x14);
  }
  v39 = *(this + 0x39);
  if ( v39 >= 0 )
  {
    v40 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v40 )
      v40 = dword_BA7D9C;
    sub_8A75D0(v40, (_DWORD *)*(this + 0x37), 4 * v39, 0x14);
  }
  v41 = *(this + 0x36);
  if ( v41 >= 0 )
  {
    v42 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v42 )
      v42 = dword_BA7D9C;
    sub_8A75D0(v42, (_DWORD *)*(this + 0x34), 4 * v41, 0x14);
  }
  v43 = *(this + 0x33);
  if ( v43 >= 0 )
  {
    v44 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v44 )
      v44 = dword_BA7D9C;
    sub_8A75D0(v44, (_DWORD *)*(this + 0x31), 4 * v43, 0x14);
  }
  v45 = *(this + 0x30);
  if ( v45 >= 0 )
  {
    v46 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v46 )
      v46 = dword_BA7D9C;
    sub_8A75D0(v46, (_DWORD *)*(this + 0x2E), 4 * v45, 0x14);
  }
  v47 = *(this + 0x16);
  if ( v47 >= 0 )
  {
    v48 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v48 )
      v48 = dword_BA7D9C;
    sub_8A75D0(v48, (_DWORD *)*(this + 0x14), 4 * v47, 0x14);
  }
  v49 = *(this + 0x13);
  if ( v49 >= 0 )
  {
    v50 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v50 )
      v50 = dword_BA7D9C;
    sub_8A75D0(v50, (_DWORD *)*(this + 0x11), 4 * v49, 0x14);
  }
  result = *(this + 0x10);
  if ( result >= 0 )
  {
    v52 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v52 )
      v52 = dword_BA7D9C;
    result = sub_8A75D0(v52, (_DWORD *)*(this + 0xE), 4 * result, 0x14);
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
