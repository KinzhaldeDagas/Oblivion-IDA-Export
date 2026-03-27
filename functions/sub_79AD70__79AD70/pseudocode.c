_DWORD *__thiscall sub_79AD70(_DWORD *this, int a2)
{
  int v4; // eax
  char *v5; // ebx
  bool v6; // cc
  char *v7; // ecx
  int v9; // [esp+0h] [ebp-24h] BYREF
  void *v10; // [esp+10h] [ebp-14h]
  int *v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]
  char *v13; // [esp+2Ch] [ebp+8h]

  v11 = &v9;
  v10 = this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
    v4 = (*(_DWORD *)(a2 + 8) - v4) / 0x38;
  if ( sub_79ACC0(this, v4) )
  {
    v5 = *(char **)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 4) <= (unsigned int)v5;
    v12 = 0;
    if ( !v6 )
      _invalid_parameter_noinfo();
    v13 = *(char **)(a2 + 4);
    v7 = v13;
    if ( (unsigned int)v13 > *(_DWORD *)(a2 + 8) )
    {
      _invalid_parameter_noinfo();
      v7 = v13;
    }
    *(this + 2) = sub_79A9B0(v7, v5, (char *)*(this + 1));
  }
  return this;
}
