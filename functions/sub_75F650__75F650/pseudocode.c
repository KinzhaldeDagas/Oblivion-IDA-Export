char __thiscall sub_75F650(int this, float a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = *(_BYTE *)(this + 8) >> 5;
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C);
    if ( v5 )
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x5C))(
                 *(float *)(this + 0x28),
                 *(_DWORD *)(this + 0x30),
                 &a2);
      if ( result )
        return (*(char (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 0xB0))(this, LODWORD(a2));
    }
    return result;
  }
  result = sub_6C36B0((float *)this, a2);
  if ( !result )
    goto LABEL_6;
  v4 = *(_DWORD *)(this + 0x3C);
  if ( v4 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4);
    if ( result )
      goto LABEL_6;
  }
  return result;
}
