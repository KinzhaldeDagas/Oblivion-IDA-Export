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

  v2 = *(this + 0x17); /*0x89ad86*/
  *this = &off_A96D6C; /*0x89ad8b*/
  if ( *(_WORD *)(v2 + 4) ) /*0x89ad91*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x89ad9c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x89ada6*/
  }
  v3 = (_RTL_CRITICAL_SECTION_0 *)*(this + 0x28); /*0x89ada8*/
  *(this + 0x17) = 0; /*0x89adb0*/
  if ( v3 ) /*0x89adb3*/
  {
    DeleteCriticalSection(v3); /*0x89adb6*/
    (*(void (__thiscall **)(int, _RTL_CRITICAL_SECTION_0 *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x89adc9*/
      unk_BA7D98,
      v3,
      0x18,
      0x12);
    *(this + 0x28) = 0; /*0x89adcc*/
  }
  v4 = *(this + 0x18); /*0x89add2*/
  if ( v4 ) /*0x89add7*/
  {
    if ( *(_WORD *)(v4 + 4) ) /*0x89add9*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x89ade3*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x89aded*/
    }
    *(this + 0x18) = 0; /*0x89adef*/
  }
  while ( (int)*(this + 0x2F) > 0 ) /*0x89adf8*/
    sub_899B30(this, *(int (__stdcall ****)(signed int))*(this + 0x2E)); /*0x89ae0b*/
  while ( (int)*(this + 0xF) > 0 ) /*0x89ae1b*/
  {
    v5 = *(_DWORD *)*(this + 0xE); /*0x89ae23*/
    if ( !*(_DWORD *)(v5 + 0x38) ) /*0x89ae25*/
      break; /*0x89ae28*/
    sub_8996C0(this, &v53, **(int (__stdcall *****)(signed int))(v5 + 0x34)); /*0x89ae37*/
  }
  while ( (int)*(this + 0x12) > 0 ) /*0x89ae44*/
    sub_8996C0(this, &v53, **(int (__stdcall *****)(signed int))(*(_DWORD *)*(this + 0x11) + 0x34)); /*0x89ae58*/
  if ( !*((_BYTE *)this + 0xA4) ) /*0x89ae62*/
  {
    sub_8CB610((int)this, *(_DWORD *)(*(this + 0xE) + 4 * *(this + 0xF) - 4)); /*0x89ae76*/
    v6 = *(void (__thiscall ****)(_DWORD, int))(*(this + 0xE) + 4 * *(this + 0xF) - 4); /*0x89ae81*/
    if ( v6 ) /*0x89ae8a*/
      (**v6)(v6, 1); /*0x89ae90*/
    --*(this + 0xF); /*0x89ae92*/
  }
  sub_8996C0(this, &v53, (int (__stdcall ***)(signed int))*(this + 0xD)); /*0x89aea0*/
  v7 = *(this + 0xC); /*0x89aea5*/
  *(this + 0xD) = 0; /*0x89aea8*/
  if ( *(int *)(v7 + 0x38) > 0 ) /*0x89aeae*/
  {
    do /*0x89aecb*/
      sub_8996C0(this, &v53, **(int (__stdcall *****)(signed int))(*(this + 0xC) + 0x34)); /*0x89aec0*/
    while ( *(int *)(*(this + 0xC) + 0x38) > 0 ); /*0x89aecb*/
  }
  LOWORD(v8) = sub_8CB610((int)this, *(this + 0xC)); /*0x89aed2*/
  v9 = (int (__thiscall ***)(_DWORD, int))*(this + 0xC); /*0x89aed7*/
  if ( v9 ) /*0x89aedf*/
    v8 = (**v9)(v9, 1); /*0x89aee5*/
  *(this + 0xC) = 0; /*0x89aee8*/
  sub_8DCA40(v8, (int)this); /*0x89aeeb*/
  v10 = *(this + 0x19); /*0x89aef0*/
  if ( *(_WORD *)(v10 + 4) ) /*0x89aef6*/
  {
    if ( !--*(_WORD *)(v10 + 6) ) /*0x89af00*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x89af0a*/
  }
  v11 = *(this + 0x1F); /*0x89af0c*/
  *(this + 0x19) = 0; /*0x89af0f*/
  if ( *(_WORD *)(v11 + 4) ) /*0x89af12*/
  {
    if ( !--*(_WORD *)(v11 + 6) ) /*0x89af1c*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x89af26*/
  }
  v12 = (_DWORD *)*(this + 0x1A); /*0x89af28*/
  *(this + 0x1F) = 0; /*0x89af2d*/
  if ( v12 ) /*0x89af30*/
  {
    sub_8D8350(v12); /*0x89af34*/
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v12, 0x104, 0x24); /*0x89af49*/
  }
  v13 = *(this + 0x55); /*0x89af4c*/
  if ( v13 ) /*0x89af54*/
  {
    if ( *(_WORD *)(v13 + 4) ) /*0x89af56*/
    {
      if ( !--*(_WORD *)(v13 + 6) ) /*0x89af60*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x89af6a*/
    }
  }
  v14 = (void (__thiscall ***)(_DWORD, int))*(this + 0x1B); /*0x89af6c*/
  if ( v14 ) /*0x89af71*/
    (**v14)(v14, 1); /*0x89af77*/
  v15 = (void (__thiscall ***)(_DWORD, int))*(this + 0x1C); /*0x89af79*/
  if ( v15 ) /*0x89af7e*/
    (**v15)(v15, 1); /*0x89af84*/
  v16 = *(this + 0x1E); /*0x89af86*/
  if ( *(_WORD *)(v16 + 4) ) /*0x89af89*/
  {
    if ( !--*(_WORD *)(v16 + 6) ) /*0x89af93*/
      (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x89af9d*/
  }
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x89afb2*/
    unk_BA7D98,
    *(_DWORD *)(*(this + 0x1D) + 0x20),
    8,
    0x1C);
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, *(this + 0x1D), 0x2C, 0x1C); /*0x89afc5*/
  v17 = *(this + 2); /*0x89afc8*/
  if ( *(_WORD *)(v17 + 4) ) /*0x89afcb*/
  {
    if ( !--*(_WORD *)(v17 + 6) ) /*0x89afd5*/
      (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x89afdf*/
  }
  v18 = *(this + 0x20); /*0x89afe1*/
  if ( v18 ) /*0x89afe9*/
  {
    sub_8D87E0((char *)*(this + 0x20)); /*0x89afed*/
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v18, 0x28, 0x2C); /*0x89afff*/
  }
  v19 = *(this + 0x54); /*0x89b002*/
  v20 = MEMORY[0xBA9DE4]; /*0x89b00a*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89b010*/
  if ( v19 >= 0 ) /*0x89b017*/
  {
    v22 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b01d*/
    if ( !v22 ) /*0x89b025*/
      v22 = unk_BA7D9C; /*0x89b027*/
    sub_8A75D0(v22, (_DWORD *)*(this + 0x52), 4 * v19, 0x14); /*0x89b03f*/
  }
  v23 = *(this + 0x51); /*0x89b044*/
  if ( v23 >= 0 ) /*0x89b04c*/
  {
    v24 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b052*/
    if ( !v24 ) /*0x89b05a*/
      v24 = unk_BA7D9C; /*0x89b05c*/
    sub_8A75D0(v24, (_DWORD *)*(this + 0x4F), 4 * v23, 0x14); /*0x89b074*/
  }
  v25 = *(this + 0x4E); /*0x89b079*/
  if ( v25 >= 0 ) /*0x89b081*/
  {
    v26 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b087*/
    if ( !v26 ) /*0x89b08f*/
      v26 = unk_BA7D9C; /*0x89b091*/
    sub_8A75D0(v26, (_DWORD *)*(this + 0x4C), 4 * v25, 0x14); /*0x89b0a9*/
  }
  v27 = *(this + 0x4B); /*0x89b0ae*/
  if ( v27 >= 0 ) /*0x89b0b6*/
  {
    v28 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b0bc*/
    if ( !v28 ) /*0x89b0c4*/
      v28 = unk_BA7D9C; /*0x89b0c6*/
    sub_8A75D0(v28, (_DWORD *)*(this + 0x49), 4 * v27, 0x14); /*0x89b0de*/
  }
  v29 = *(this + 0x48); /*0x89b0e3*/
  if ( v29 >= 0 ) /*0x89b0eb*/
  {
    v30 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b0f1*/
    if ( !v30 ) /*0x89b0f9*/
      v30 = unk_BA7D9C; /*0x89b0fb*/
    sub_8A75D0(v30, (_DWORD *)*(this + 0x46), 4 * v29, 0x14); /*0x89b113*/
  }
  v31 = *(this + 0x45); /*0x89b118*/
  if ( v31 >= 0 ) /*0x89b120*/
  {
    v32 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b126*/
    if ( !v32 ) /*0x89b12e*/
      v32 = unk_BA7D9C; /*0x89b130*/
    sub_8A75D0(v32, (_DWORD *)*(this + 0x43), 4 * v31, 0x14); /*0x89b148*/
  }
  v33 = *(this + 0x42); /*0x89b14d*/
  if ( v33 >= 0 ) /*0x89b155*/
  {
    v34 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b15b*/
    if ( !v34 ) /*0x89b163*/
      v34 = unk_BA7D9C; /*0x89b165*/
    sub_8A75D0(v34, (_DWORD *)*(this + 0x40), 4 * v33, 0x14); /*0x89b17d*/
  }
  v35 = *(this + 0x3F); /*0x89b182*/
  if ( v35 >= 0 ) /*0x89b18a*/
  {
    v36 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b190*/
    if ( !v36 ) /*0x89b198*/
      v36 = unk_BA7D9C; /*0x89b19a*/
    sub_8A75D0(v36, (_DWORD *)*(this + 0x3D), 4 * v35, 0x14); /*0x89b1b2*/
  }
  v37 = *(this + 0x3C); /*0x89b1b7*/
  if ( v37 >= 0 ) /*0x89b1bf*/
  {
    v38 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b1c5*/
    if ( !v38 ) /*0x89b1cd*/
      v38 = unk_BA7D9C; /*0x89b1cf*/
    sub_8A75D0(v38, (_DWORD *)*(this + 0x3A), 4 * v37, 0x14); /*0x89b1e7*/
  }
  v39 = *(this + 0x39); /*0x89b1ec*/
  if ( v39 >= 0 ) /*0x89b1f4*/
  {
    v40 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b1fa*/
    if ( !v40 ) /*0x89b202*/
      v40 = unk_BA7D9C; /*0x89b204*/
    sub_8A75D0(v40, (_DWORD *)*(this + 0x37), 4 * v39, 0x14); /*0x89b21c*/
  }
  v41 = *(this + 0x36); /*0x89b221*/
  if ( v41 >= 0 ) /*0x89b229*/
  {
    v42 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b22f*/
    if ( !v42 ) /*0x89b237*/
      v42 = unk_BA7D9C; /*0x89b239*/
    sub_8A75D0(v42, (_DWORD *)*(this + 0x34), 4 * v41, 0x14); /*0x89b251*/
  }
  v43 = *(this + 0x33); /*0x89b256*/
  if ( v43 >= 0 ) /*0x89b25e*/
  {
    v44 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b264*/
    if ( !v44 ) /*0x89b26c*/
      v44 = unk_BA7D9C; /*0x89b26e*/
    sub_8A75D0(v44, (_DWORD *)*(this + 0x31), 4 * v43, 0x14); /*0x89b286*/
  }
  v45 = *(this + 0x30); /*0x89b28b*/
  if ( v45 >= 0 ) /*0x89b293*/
  {
    v46 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b299*/
    if ( !v46 ) /*0x89b2a1*/
      v46 = unk_BA7D9C; /*0x89b2a3*/
    sub_8A75D0(v46, (_DWORD *)*(this + 0x2E), 4 * v45, 0x14); /*0x89b2bb*/
  }
  v47 = *(this + 0x16); /*0x89b2c0*/
  if ( v47 >= 0 ) /*0x89b2c5*/
  {
    v48 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b2cb*/
    if ( !v48 ) /*0x89b2d3*/
      v48 = unk_BA7D9C; /*0x89b2d5*/
    sub_8A75D0(v48, (_DWORD *)*(this + 0x14), 4 * v47, 0x14); /*0x89b2ea*/
  }
  v49 = *(this + 0x13); /*0x89b2ef*/
  if ( v49 >= 0 ) /*0x89b2f4*/
  {
    v50 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b2fa*/
    if ( !v50 ) /*0x89b302*/
      v50 = unk_BA7D9C; /*0x89b304*/
    sub_8A75D0(v50, (_DWORD *)*(this + 0x11), 4 * v49, 0x14); /*0x89b319*/
  }
  result = *(this + 0x10); /*0x89b31e*/
  if ( result >= 0 ) /*0x89b323*/
  {
    v52 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C); /*0x89b329*/
    if ( !v52 ) /*0x89b331*/
      v52 = unk_BA7D9C; /*0x89b333*/
    result = sub_8A75D0(v52, (_DWORD *)*(this + 0xE), 4 * result, 0x14); /*0x89b348*/
  }
  *this = &hkBaseObject::`vftable'; /*0x89b34e*/
  return result; /*0x89b34d*/
}
