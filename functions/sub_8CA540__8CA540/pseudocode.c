_WORD *__thiscall sub_8CA540(_WORD *this, int *a2, int a3)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  int i; // edi
  int v14; // ecx
  int v15; // eax
  int *v17[3]; // [esp+20h] [ebp-210h] BYREF
  char v18[512]; // [esp+2Ch] [ebp-204h] BYREF

  *(this + 3) = 1; /*0x8ca552*/
  *(_DWORD *)this = &off_A99AE8; /*0x8ca558*/
  *((_DWORD *)this + 2) = 0; /*0x8ca55e*/
  *((_DWORD *)this + 3) = 0; /*0x8ca568*/
  *((_DWORD *)this + 4) = 0; /*0x8ca56b*/
  *((_DWORD *)this + 5) = 0x80000000; /*0x8ca57a*/
  *((_DWORD *)this + 6) = 0; /*0x8ca57d*/
  *((_DWORD *)this + 7) = 0; /*0x8ca580*/
  *((_DWORD *)this + 8) = 0x80000000; /*0x8ca583*/
  *((_DWORD *)this + 9) = 0; /*0x8ca586*/
  *((_DWORD *)this + 0xA) = 0; /*0x8ca589*/
  *((_DWORD *)this + 0xB) = 0x80000000; /*0x8ca58c*/
  *((_DWORD *)this + 0xC) = 0; /*0x8ca58f*/
  *((_DWORD *)this + 0xD) = 0; /*0x8ca592*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x8ca595*/
  *((_DWORD *)this + 0xF) = 0; /*0x8ca598*/
  *((_DWORD *)this + 0x10) = 0; /*0x8ca59b*/
  *((_DWORD *)this + 0x11) = 0x80000000; /*0x8ca59e*/
  *((_DWORD *)this + 0x12) = a3; /*0x8ca5a1*/
  *((_DWORD *)this + 0x13) = 0; /*0x8ca5a4*/
  *((_DWORD *)this + 0x14) = 0; /*0x8ca5a7*/
  *((_DWORD *)this + 0x15) = 0x80000000; /*0x8ca5aa*/
  *((_BYTE *)this + 0x58) = 0; /*0x8ca5ad*/
  *((_DWORD *)this + 0x22) = "Frame Timer"; /*0x8ca5b0*/
  *((_DWORD *)this + 0x18) = 0; /*0x8ca5ba*/
  *((_DWORD *)this + 0x19) = 0; /*0x8ca5bd*/
  *((_DWORD *)this + 0x1A) = 0; /*0x8ca5c0*/
  *((_DWORD *)this + 0x1B) = 0; /*0x8ca5c3*/
  *((_DWORD *)this + 0x1C) = 0; /*0x8ca5c6*/
  *((_DWORD *)this + 0x1D) = 0; /*0x8ca5c9*/
  *((_DWORD *)this + 0x1E) = 0; /*0x8ca5cc*/
  *((_DWORD *)this + 0x1F) = 0; /*0x8ca5cf*/
  *((_BYTE *)this + 0x80) = 0; /*0x8ca5d2*/
  *((_DWORD *)this + 0x21) = 0; /*0x8ca5d8*/
  v4 = *((_DWORD *)this + 8); /*0x8ca5de*/
  if ( (*((_DWORD *)this + 8) & 0x3FFFFFFF) < a2[1] ) /*0x8ca5f6*/
  {
    v5 = MEMORY[0xBA9DE4]; /*0x8ca5fa*/
    if ( (v4 & 0x80000000) == 0 ) /*0x8ca600*/
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v5) + 0x19C); /*0x8ca60b*/
      if ( !v6 ) /*0x8ca613*/
        v6 = unk_BA7D9C; /*0x8ca615*/
      sub_8A75D0(v6, *((_DWORD **)this + 6), 4 * *((_DWORD *)this + 8), 0x14); /*0x8ca626*/
    }
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v5) + 0x19C); /*0x8ca635*/
    if ( !v7 ) /*0x8ca63d*/
      v7 = unk_BA7D9C; /*0x8ca63f*/
    v8 = sub_8A7560(v7, 4 * a2[1], 0x14); /*0x8ca64f*/
    v9 = *((_DWORD *)this + 8); /*0x8ca654*/
    *((_DWORD *)this + 6) = v8; /*0x8ca657*/
    *((_DWORD *)this + 8) = a2[1] | v9 & 0x40000000; /*0x8ca665*/
  }
  v10 = a2[1]; /*0x8ca668*/
  v11 = *((_DWORD **)this + 6); /*0x8ca66d*/
  *((_DWORD *)this + 7) = v10; /*0x8ca670*/
  if ( v10 > 0 ) /*0x8ca675*/
  {
    v12 = *a2 - (_DWORD)v11; /*0x8ca677*/
    do /*0x8ca689*/
    {
      *v11 = *(_DWORD *)((char *)v11 + v12); /*0x8ca683*/
      ++v11; /*0x8ca685*/
      --v10; /*0x8ca688*/
    }
    while ( v10 ); /*0x8ca689*/
  }
  for ( i = 0; i < *((_DWORD *)this + 7); ++i ) /*0x8ca692*/
  {
    v14 = *(_DWORD *)(*((_DWORD *)this + 6) + 4 * i); /*0x8ca697*/
    (*(void (__thiscall **)(int, _WORD *))(*(_DWORD *)v14 + 8))(v14, this); /*0x8ca69d*/
  }
  (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)unk_BA7FB0 + 0x18))( /*0x8ca6ba*/
    unk_BA7FB0,
    0x1293ADEF,
    "Visual Debugger");
  sub_8BBFB0((int)v17, 0, v18, 0x200u, 1); /*0x8ca6d1*/
  sub_8BBDB0(v17, "VDB Server instance has been created"); /*0x8ca6df*/
  (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8ca6fb*/
    unk_BA7FB0,
    0,
    0xFFFFFFFF,
    v18,
    ".\\hkVisualDebugger.cpp",
    0x26);
  sub_8BC000(v17); /*0x8ca702*/
  sub_9184F0(); /*0x8ca707*/
  sub_8CA3C0((const void **)this, "DebugDisplay"); /*0x8ca713*/
  sub_8CA3C0((const void **)this, "Shapes"); /*0x8ca71f*/
  sub_8CA3C0((const void **)this, "MousePicking"); /*0x8ca72b*/
  v15 = *((_DWORD *)this + 0x12); /*0x8ca730*/
  if ( v15 ) /*0x8ca735*/
  {
    if ( *(_WORD *)(v15 + 4) ) /*0x8ca737*/
      ++*(_WORD *)(v15 + 6); /*0x8ca73d*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)unk_BA7FB0 + 0x1C))(unk_BA7FB0); /*0x8ca749*/
  return this; /*0x8ca74c*/
}
