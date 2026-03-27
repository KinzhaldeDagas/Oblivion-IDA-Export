char __thiscall sub_8F5790(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = this;
  v3 = *(this + 2);
  if ( v3 )
    LOBYTE(v2) = sub_89BCC0((int)v2, v3, (int)v2);
  return (char)v2;
}
