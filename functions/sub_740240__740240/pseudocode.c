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

  v3 = *(void (__stdcall **)(int *, _DWORD))(**(_DWORD **)(this + 0x5C) + 0x8C);
  v4 = *(_WORD *)(this + 0x48) - 1;
  if ( a2 == v4 )
  {
    v3(&v16, v4);
    if ( !v16 )
      return sub_73EFB0(this, a2);
    v5 = (void (__thiscall ***)(_DWORD, int))v16;
    v6 = InterlockedDecrement((volatile LONG *)(v16 + 4));
    goto LABEL_16;
  }
  v3(&v15, v4);
  v7 = *(_DWORD *)(this + 0x5C);
  v8 = *(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v7 + 0x8C);
  v18 = 0;
  v8(v7, &v16, a2);
  v9 = InterlockedDecrement;
  if ( v16 )
  {
    v10 = (void (__thiscall ***)(_DWORD, int))v16;
    if ( !v9((volatile LONG *)(v16 + 4)) )
      (**v10)(v10, 1);
  }
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(**(_DWORD **)(this + 0x5C) + 0x90))(
    *(_DWORD *)(this + 0x5C),
    &v17,
    a2,
    v15);
  if ( v17 )
  {
    v11 = (void (__thiscall ***)(_DWORD, int))v17;
    if ( !v9((volatile LONG *)(v17 + 4)) )
      (**v11)(v11, 1);
  }
  v12 = v15;
  if ( v15 )
  {
    v13 = (void (__thiscall ***)(_DWORD, int))v15;
    if ( !v9((volatile LONG *)(v15 + 4)) )
      (**v13)(v13, 1);
    v12 = 0;
    v15 = 0;
  }
  v18 = 0xFFFFFFFF;
  if ( v12 )
  {
    v5 = (void (__thiscall ***)(_DWORD, int))v12;
    v6 = v9((volatile LONG *)(v12 + 4));
LABEL_16:
    if ( !v6 )
      (**v5)(v5, 1);
  }
  return sub_73EFB0(this, a2);
}
