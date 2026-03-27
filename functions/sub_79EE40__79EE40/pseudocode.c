_DWORD *__thiscall sub_79EE40(_DWORD *this, int a2)
{
  int v4; // eax
  unsigned int v5; // esi
  _DWORD *v6; // eax
  unsigned int v7; // esi
  bool v8; // cc
  int v9; // ecx
  _DWORD v11[9]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v12; // [esp+2Ch] [ebp+8h]

  v11[5] = v11;
  v11[4] = this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
    v5 = (*(_DWORD *)(a2 + 8) - v4) / 0x30;
  else
    v5 = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( v5 )
  {
    if ( v5 > 0x5555555 )
      sub_790B90((int)this);
    v6 = sub_799FA0((char *)v5);
    *(this + 1) = v6;
    *(this + 2) = v6;
    *(this + 3) = &v6[0xC * v5];
    v7 = *(_DWORD *)(a2 + 8);
    v8 = *(_DWORD *)(a2 + 4) <= v7;
    v11[8] = 0;
    if ( !v8 )
      _invalid_parameter_noinfo();
    v12 = *(_DWORD *)(a2 + 4);
    v9 = v12;
    if ( v12 > *(_DWORD *)(a2 + 8) )
    {
      _invalid_parameter_noinfo();
      v9 = v12;
    }
    sub_79C2E0(v9, v7, (_DWORD *)*(this + 1));
  }
  return this;
}
