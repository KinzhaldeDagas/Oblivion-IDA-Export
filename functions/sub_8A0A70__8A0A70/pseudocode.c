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
  _DWORD v13[4]; // [esp+18h] [ebp-220h] BYREF
  char v14[512]; // [esp+28h] [ebp-210h] BYREF
  unsigned int v15; // [esp+234h] [ebp-4h]

  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x8C))(this);
  v5 = v4;
  if ( !a3 )
  {
    if ( a2 && (v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x58))(a2)) != 0 )
      v11 = *(_DWORD *)(v10 + 0x34);
    else
      v11 = 0;
    if ( v5 == v11 )
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x84))(this, 0);
    return 0;
  }
  if ( v4 )
    v6 = *(_DWORD **)(v4 + 0xC);
  else
    v6 = 0;
  if ( v6 )
  {
    if ( !sub_607840(v6) )
      *(_DWORD *)(v5 + 0x30) = *(unsigned __int16 *)(v5 + 0x30)
                             | *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x88))(this) + 0x30)
                             & 0xFFFF0000;
    if ( !a2[7] )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 0x5C))(v6, a2);
      if ( !(*(int (__thiscall **)(_DWORD *))(*v6 + 0x58))(v6) )
      {
        v13[3] = &v12;
        sub_8BBFB0((int)v13, v5, v14, 0x200u, 1);
        v15 = 0;
        sub_8BBDB0(
          v13,
          "A Constraint is being added to the world before its target bodies have been added. Did an bad actor skeleton j"
          "ust switch from keyframed?\n");
        (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
          dword_BA7FB0,
          1,
          0x234F24FC,
          v14,
          ".\\bhkConstraint.cpp",
          0x2B0);
        v15 = 0xFFFFFFFF;
        sub_8BC000(v13);
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 0x84))(v6, a2);
      }
    }
    return 0;
  }
  if ( a2 && (v7 = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x58))(a2)) != 0 )
    v8 = *(_DWORD *)(v7 + 0x34);
  else
    v8 = 0;
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x84))(this, v8);
  return 1;
}
