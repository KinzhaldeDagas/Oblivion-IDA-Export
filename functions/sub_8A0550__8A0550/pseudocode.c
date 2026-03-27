int __thiscall sub_8A0550(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  if ( this )
    v1 = *(this + 2);
  else
    v1 = 0;
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 0x14);
  return result;
}
