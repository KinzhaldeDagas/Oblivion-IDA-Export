bool __thiscall sub_7687D0(int *this, int a2, int a3)
{
  int v3; // esi
  int v5; // edi
  int v6; // eax
  int v8; // [esp-Ch] [ebp-18h]

  v3 = a2;
  if ( !a2 )
    return 0;
  v5 = a3;
  if ( !a3 )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( !v6 )
    return 0;
  while ( (_UNKNOWN *)v6 != &unk_B3FAC0 )
  {
    v6 = *(_DWORD *)(v6 + 4);
    if ( !v6 )
      return 0;
  }
  v8 = *(this + 0xA0);
  a2 = v3;
  return sub_76DE00(v8, (_DWORD **)&a2, v5) != 0;
}
