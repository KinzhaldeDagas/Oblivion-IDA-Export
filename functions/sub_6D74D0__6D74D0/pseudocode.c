char __thiscall sub_6D74D0(NiTriBasedGeomData *this, int a2)
{
  float x; // ebx
  unsigned int v5; // edi
  const char **y_low; // esi
  int v7; // ebp

  if ( !a2 || !sub_700670(this, a2) )
    return 0;
  x = this->members.super.m_kBound.Center.x;
  if ( LODWORD(x) != *(_DWORD *)(a2 + 0xC) )
    return 0;
  v5 = 0;
  if ( x == 0.0 )
    return 1;
  y_low = (const char **)LODWORD(this->members.super.m_kBound.Center.y);
  v7 = *(_DWORD *)(a2 + 0x10) - (_DWORD)y_low;
  while ( !(unsigned __int8)sub_6D73F0(y_low, (int)y_low + v7) )
  {
    ++v5;
    y_low += 2;
    if ( v5 >= LODWORD(x) )
      return 1;
  }
  return 0;
}
