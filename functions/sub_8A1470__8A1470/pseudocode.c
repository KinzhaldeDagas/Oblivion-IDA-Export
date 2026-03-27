char __thiscall sub_8A1470(_DWORD *this, float *a2)
{
  char v3; // bl
  int v4; // ecx
  int v5; // ebp
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx

  v3 = sub_8A2760(a2);
  if ( !v3 )
    return 0;
  if ( this && (v4 = *(this + 2)) != 0 )
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x1C))(v4);
  else
    v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 >= v5 )
      break;
    if ( this && (v7 = *(this + 2)) != 0 && (v8 = *(_DWORD *)(*(_DWORD *)(v7 + 0x10) + 8 * v6)) != 0 )
      v9 = *(_DWORD *)(v8 + 8);
    else
      v9 = 0;
    if ( v9 )
      v3 &= (*(int (__thiscall **)(int, float *))(*(_DWORD *)v9 + 0x8C))(v9, a2);
    ++v6;
  }
  while ( v3 );
  return v3;
}
