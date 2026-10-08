void __thiscall sub_6DC000(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax

  j_j_nullsub_3((int)a2); /*0x6dc00b*/
  v3 = sub_7124A0(a2); /*0x6dc012*/
  v4 = *(_DWORD *)(this + 0x18); /*0x6dc017*/
  v5 = v3; /*0x6dc01a*/
  if ( v4 != v3 ) /*0x6dc01e*/
  {
    if ( v4 ) /*0x6dc022*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6dc028*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6dc03e*/
    }
    *(_DWORD *)(this + 0x18) = v5; /*0x6dc042*/
    if ( v5 ) /*0x6dc045*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6dc04b*/
  }
  v6 = sub_7124A0(a2); /*0x6dc053*/
  v7 = *(_DWORD *)(this + 0x1C); /*0x6dc058*/
  v8 = v6; /*0x6dc05b*/
  if ( v7 != v6 ) /*0x6dc05f*/
  {
    if ( v7 ) /*0x6dc063*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6dc069*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6dc07f*/
    }
    *(_DWORD *)(this + 0x1C) = v8; /*0x6dc083*/
    if ( v8 ) /*0x6dc086*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x6dc08c*/
  }
  *(_WORD *)(this + 0xC) |= 1u; /*0x6dc092*/
  if ( (*(_WORD *)(this + 0xC) & 0x10) != 0 && (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6dc0a6*/
  {
    *(float *)(this + 0x24) = sub_6DBB10(this); /*0x6dc0af*/
    *(_WORD *)(this + 0xC) &= ~1u; /*0x6dc0b2*/
  }
  v9 = *(_DWORD **)(this + 0x18); /*0x6dc0b8*/
  if ( v9 ) /*0x6dc0bd*/
  {
    v10 = v9[2]; /*0x6dc0bf*/
    v11 = v9[4]; /*0x6dc0c4*/
    v12 = v9[3]; /*0x6dc0c7*/
    if ( v10 ) /*0x6dc0ca*/
      *(float *)(this + 0x34) = ((double (__cdecl *)(int, int))*(_DWORD *)(4 * v11 + 0xB3D130))(v12, v10); /*0x6dc0dd*/
  }
}
