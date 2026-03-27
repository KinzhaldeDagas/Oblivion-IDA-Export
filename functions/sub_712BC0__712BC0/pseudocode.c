unsigned int __thiscall sub_712BC0(unsigned int *this, int a2)
{
  int v2; // eax
  unsigned int *v3; // esi
  unsigned int v4; // eax
  unsigned int result; // eax

  v2 = *(this + 0x8E);
  v3 = this + 0x8D;
  if ( *(this + 0x8F) == v2 )
  {
    if ( v2 )
      v4 = 2 * v2;
    else
      v4 = 1;
    sub_6E8CA0(this + 0x8D, v4);
  }
  result = v3[2];
  *(_DWORD *)(*v3 + 4 * result) = a2;
  ++v3[2];
  return result;
}
