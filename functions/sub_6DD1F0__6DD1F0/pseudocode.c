int __thiscall sub_6DD1F0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = sub_715E40(this, a2);
  v4 = *(this + 0x12);
  if ( v4 )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x38))(v4, a2);
  v5 = *(this + 0x13);
  if ( v5 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, a2);
  return result;
}
