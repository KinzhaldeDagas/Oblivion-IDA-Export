char __thiscall sub_707AB0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_6FFE10(this, a2);
  if ( *((_DWORD *)this + 0x29) )
    result = sub_707A60((int)this + 0x98, a2);
  v4 = *((_DWORD *)this + 0x2A);
  if ( v4 )
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2);
  return result;
}
