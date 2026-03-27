int __thiscall sub_8C9880(_DWORD *this, float *a2)
{
  int result; // eax
  int v4; // esi
  int v5; // esi
  int v6; // ecx

  result = sub_8A2760(a2);
  if ( (_BYTE)result )
  {
    if ( this && (v4 = *(this + 2)) != 0 && (v5 = *(_DWORD *)(v4 + 0x10)) != 0 )
      v6 = *(_DWORD *)(v5 + 8);
    else
      v6 = 0;
    if ( v6 )
      return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v6 + 0x8C))(v6, a2);
  }
  return result;
}
