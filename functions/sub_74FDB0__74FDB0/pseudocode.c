int __thiscall sub_74FDB0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = sub_75E670(this, a2);
  v4 = *(this + 0x12);
  if ( v4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2);
  return result;
}
