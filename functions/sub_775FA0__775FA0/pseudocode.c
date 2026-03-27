int __thiscall sub_775FA0(unsigned int *this)
{
  int v2; // ebp
  char v3; // bl
  unsigned int v4; // esi
  int v5; // edi
  unsigned int v6; // esi
  int v7; // ecx

  v2 = *(this + 0xF);
  v3 = 0;
  do
  {
    v4 = *(this + 0xF);
    v5 = 1 << (v4 & 0x1F);
    v6 = v4 >> 5;
    v7 = *(this + v6 + 0x10);
    if ( (v7 & v5) == 0 )
    {
      *(this + v6 + 0x10) = v5 | v7;
      v3 = 1;
    }
    if ( ++*(this + 0xF) == 0x1000 )
      *(this + 0xF) = 0;
  }
  while ( !v3 );
  return v2;
}
