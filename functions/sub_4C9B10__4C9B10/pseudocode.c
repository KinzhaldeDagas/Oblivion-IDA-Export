int __thiscall sub_4C9B10(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *(this + 0x11);
  if ( v3 != a2 )
  {
    if ( v3 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
    *(this + 0x11) = a2;
  }
  return result;
}
