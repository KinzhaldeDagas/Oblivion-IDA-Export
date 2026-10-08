char __thiscall sub_8A0A70(void *this, _DWORD *a2, char a3)
{
  int v4; // eax
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+0h] [ebp-238h] BYREF
  int *v13[4]; // [esp+18h] [ebp-220h] BYREF
  char v14[512]; // [esp+28h] [ebp-210h] BYREF
  unsigned int v15; // [esp+234h] [ebp-4h]

  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x8C))(this); /*0x8a0abd*/
  v5 = v4; /*0x8a0ac7*/
  if ( !a3 ) /*0x8a0ac9*/
  {
    if ( a2 && (v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x58))(a2)) != 0 ) /*0x8a0be7*/
      v11 = *(_DWORD *)(v10 + 0x34); /*0x8a0be9*/
    else
      v11 = 0; /*0x8a0bee*/
    if ( v5 == v11 ) /*0x8a0bf2*/
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x84))(this, 0); /*0x8a0c01*/
    return 0; /*0x8a0c01*/
  }
  if ( v4 ) /*0x8a0ad1*/
    v6 = *(_DWORD **)(v4 + 0xC); /*0x8a0ad3*/
  else
    v6 = 0; /*0x8a0ad8*/
  if ( v6 ) /*0x8a0adc*/
  {
    if ( !sub_607840(v6) ) /*0x8a0ae4*/
      *(_DWORD *)(v5 + 0x30) = *(unsigned __int16 *)(v5 + 0x30) /*0x8a0b08*/
                             | *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x88))(this) + 0x30)
                             & 0xFFFF0000;
    if ( !a2[7] ) /*0x8a0b0b*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 0x5C))(v6, a2); /*0x8a0b1d*/
      if ( !(*(int (__thiscall **)(_DWORD *))(*v6 + 0x58))(v6) ) /*0x8a0b26*/
      {
        v13[3] = &v12; /*0x8a0b33*/
        sub_8BBFB0((int)v13, v5, v14, 0x200u, 1); /*0x8a0b48*/
        v15 = 0; /*0x8a0b56*/
        sub_8BBDB0( /*0x8a0b61*/
          v13,
          "A Constraint is being added to the world before its target bodies have been added. Did an bad actor skeleton j"
          "ust switch from keyframed?\n");
        (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8a0b87*/
          unk_BA7FB0,
          1,
          0x234F24FC,
          v14,
          ".\\bhkConstraint.cpp",
          0x2B0);
        v15 = 0xFFFFFFFF; /*0x8a0b8d*/
        sub_8BC000(v13); /*0x8a0b98*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 0x84))(v6, a2); /*0x8a0ba8*/
      }
    }
    return 0; /*0x8a0c03*/
  }
  if ( a2 && (v7 = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x58))(a2)) != 0 ) /*0x8a0bbd*/
    v8 = *(_DWORD *)(v7 + 0x34); /*0x8a0bbf*/
  else
    v8 = 0; /*0x8a0bc4*/
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x84))(this, v8); /*0x8a0bd2*/
  return 1; /*0x8a0c05*/
}
