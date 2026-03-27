int __thiscall sub_6CE2F0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = sub_715E40(this, a2);
  v4 = *(this + 0xF);
  if ( v4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2);
  return result;
}
