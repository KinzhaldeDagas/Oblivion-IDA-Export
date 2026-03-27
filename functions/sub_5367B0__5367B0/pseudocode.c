void __cdecl sub_5367B0(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // esi
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int i; // esi
  int v15; // [esp+4h] [ebp-8h] BYREF

  if ( a1 )
  {
    v3 = sub_47FAC0(a1);
    if ( !v3 )
      goto LABEL_19;
    v4 = *(_DWORD *)(v3 + 0x10);
    if ( !v4 )
      goto LABEL_19;
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 && (v6 = (int *)(v5 + 0x14)) != 0 && (v7 = *v6) != 0 )
      v8 = *(_DWORD *)(v7 + 8);
    else
      v8 = 0;
    if ( !v8 )
      goto LABEL_19;
    v9 = *(_DWORD **)(v8 + 8);
    if ( !v9 )
      goto LABEL_19;
    v10 = (*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9) == 0x10;
    v11 = *v9;
    if ( v10 )
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(v11 + 0x1C))(v9);
    }
    else
    {
      if ( (*(int (__thiscall **)(_DWORD *))(v11 + 8))(v9) == 9 )
      {
        (*(void (__thiscall **)(_DWORD *, int *))(*v9 + 0x1C))(v9, &v15);
        *a2 += v15;
        goto LABEL_19;
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9) != 0x18 )
        goto LABEL_19;
      v13 = v9[3];
      if ( !v13 )
        goto LABEL_19;
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x1C))(v13);
    }
    *a3 += v12;
LABEL_19:
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1) )
    {
      for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; sub_5367B0(
                                                           *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i++),
                                                           a2,
                                                           a3) )
        ;
    }
  }
}
