char __thiscall sub_6FD7E0(float *this, int a2)
{
  int v2; // ebx
  float *v3; // edi
  __int16 v5; // ax
  int v6; // ebp
  _DWORD *v7; // esi
  _DWORD *v8; // ebx
  int v9; // eax
  int v10; // edi

  v2 = a2;
  v3 = this;
  if ( !sub_715820(this, a2) )
    return 0;
  if ( *((_DWORD *)v3 + 0xF) != *(_DWORD *)(a2 + 0x3C) )
    return 0;
  if ( *((_DWORD *)v3 + 0x10) != *(_DWORD *)(a2 + 0x40) )
    return 0;
  v5 = *((_WORD *)v3 + 0x27);
  if ( v5 != *(_WORD *)(a2 + 0x4E) )
    return 0;
  v6 = 0;
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    v7 = *(_DWORD **)(*((_DWORD *)v3 + 0x12) + 4 * v6);
    v8 = *(_DWORD **)(*(_DWORD *)(v2 + 0x48) + 4 * v6);
    if ( v7 )
      break;
    if ( v8 )
      return 0;
LABEL_16:
    if ( ++v6 >= (unsigned int)*((unsigned __int16 *)v3 + 0x27) )
      return 1;
    v2 = a2;
  }
  if ( !v8 )
    return 0;
  v9 = v7[2];
  if ( v9 != v8[2] )
    return 0;
  v10 = 0;
  if ( !v9 )
  {
LABEL_15:
    v3 = this;
    goto LABEL_16;
  }
  while ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * v10 + *v7) + 0x2C))(
            *(_DWORD *)(4 * v10 + *v7),
            *(_DWORD *)(4 * v10 + *v8)) )
  {
    if ( (unsigned int)++v10 >= v7[2] )
      goto LABEL_15;
  }
  return 0;
}
