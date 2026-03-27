int *__thiscall sub_557250(int *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edi
  bool v9; // cc
  int v10; // ecx
  int v12; // [esp+0h] [ebp-24h] BYREF
  void *v13; // [esp+10h] [ebp-14h]
  int *v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+20h] [ebp-4h]
  unsigned int v16; // [esp+2Ch] [ebp+8h]

  v14 = &v12;
  v13 = this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
    v5 = (*(_DWORD *)(a2 + 8) - v4) / 6;
  else
    v5 = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( v5 )
  {
    v6 = 6 * v5;
    v7 = FormHeapAlloc(6 * v5);
    *(this + 1) = v7;
    *(this + 2) = v7;
    *(this + 3) = v7 + v6;
    v8 = *(_DWORD *)(a2 + 8);
    v9 = *(_DWORD *)(a2 + 4) <= v8;
    v15 = 0;
    if ( !v9 )
      _invalid_parameter_noinfo();
    v16 = *(_DWORD *)(a2 + 4);
    v10 = v16;
    if ( v16 > *(_DWORD *)(a2 + 8) )
    {
      _invalid_parameter_noinfo();
      v10 = v16;
    }
    *(this + 2) = sub_5567D0(v10, v8, *(this + 1));
  }
  return this;
}
