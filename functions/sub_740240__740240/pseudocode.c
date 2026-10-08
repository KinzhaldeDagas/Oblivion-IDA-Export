_DWORD *__thiscall sub_740240(int this, unsigned __int16 a2)
{
  void (__stdcall *v3)(int *, _DWORD); // edx
  unsigned __int16 v4; // ax
  void (__thiscall ***v5)(_DWORD, int); // esi
  LONG v6; // eax
  int v7; // ecx
  void (__thiscall *v8)(int, int *, _DWORD); // eax
  LONG (__stdcall *v9)(volatile LONG *); // ebp
  void (__thiscall ***v10)(_DWORD, int); // ebx
  void (__thiscall ***v11)(_DWORD, int); // esi
  int v12; // eax
  void (__thiscall ***v13)(_DWORD, int); // esi
  int v15; // [esp+28h] [ebp-18h] BYREF
  int v16; // [esp+2Ch] [ebp-14h] BYREF
  int v17; // [esp+30h] [ebp-10h] BYREF
  unsigned int v18; // [esp+3Ch] [ebp-4h]

  v3 = *(void (__stdcall **)(int *, _DWORD))(**(_DWORD **)(this + 0x5C) + 0x8C); /*0x740276*/
  v4 = *(_WORD *)(this + 0x48) - 1; /*0x74027c*/
  if ( a2 == v4 ) /*0x74028a*/
  {
    v3(&v16, v4); /*0x740291*/
    if ( !v16 ) /*0x740299*/
      return sub_73EFB0(this, a2); /*0x740299*/
    v5 = (void (__thiscall ***)(_DWORD, int))v16; /*0x74029f*/
    v6 = InterlockedDecrement((volatile LONG *)(v16 + 4)); /*0x7402a5*/
    goto LABEL_16; /*0x7402ab*/
  }
  v3(&v15, v4); /*0x7402b5*/
  v7 = *(_DWORD *)(this + 0x5C); /*0x7402b7*/
  v8 = *(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v7 + 0x8C); /*0x7402bc*/
  v18 = 0; /*0x7402cb*/
  v8(v7, &v16, a2); /*0x7402d3*/
  v9 = InterlockedDecrement; /*0x7402db*/
  if ( v16 ) /*0x7402e1*/
  {
    v10 = (void (__thiscall ***)(_DWORD, int))v16; /*0x7402e3*/
    if ( !v9((volatile LONG *)(v16 + 4)) ) /*0x7402e9*/
      (**v10)(v10, 1); /*0x7402fb*/
  }
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(**(_DWORD **)(this + 0x5C) + 0x90))( /*0x740313*/
    *(_DWORD *)(this + 0x5C),
    &v17,
    a2,
    v15);
  if ( v17 ) /*0x74031b*/
  {
    v11 = (void (__thiscall ***)(_DWORD, int))v17; /*0x74031d*/
    if ( !v9((volatile LONG *)(v17 + 4)) ) /*0x740323*/
      (**v11)(v11, 1); /*0x740335*/
  }
  v12 = v15; /*0x740337*/
  if ( v15 ) /*0x74033d*/
  {
    v13 = (void (__thiscall ***)(_DWORD, int))v15; /*0x74033f*/
    if ( !v9((volatile LONG *)(v15 + 4)) ) /*0x740345*/
      (**v13)(v13, 1); /*0x740357*/
    v12 = 0; /*0x740359*/
    v15 = 0; /*0x74035b*/
  }
  v18 = 0xFFFFFFFF; /*0x740361*/
  if ( v12 ) /*0x740369*/
  {
    v5 = (void (__thiscall ***)(_DWORD, int))v12; /*0x74036b*/
    v6 = v9((volatile LONG *)(v12 + 4)); /*0x740371*/
LABEL_16:
    if ( !v6 ) /*0x740375*/
      (**v5)(v5, 1); /*0x740383*/
  }
  return sub_73EFB0(this, a2); /*0x740391*/
}
