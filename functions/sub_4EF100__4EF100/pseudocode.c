int __thiscall sub_4EF100(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *(this + 0x15);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
    result = a2;
  }
  *(this + 0x15) = a2;
  return result;
}
