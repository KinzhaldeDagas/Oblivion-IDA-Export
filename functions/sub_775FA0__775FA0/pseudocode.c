int __thiscall sub_775FA0(unsigned int *this)
{
  int v2; // ebp
  char v3; // bl
  unsigned int v4; // esi
  int v5; // edi
  unsigned int v6; // esi
  int v7; // ecx

  v2 = *(this + 0xF); /*0x775fa5*/
  v3 = 0; /*0x775fa9*/
  do /*0x775fe4*/
  {
    v4 = *(this + 0xF); /*0x775fb3*/
    v5 = 1 << (v4 & 0x1F); /*0x775fba*/
    v6 = v4 >> 5; /*0x775fbc*/
    v7 = *(this + v6 + 0x10); /*0x775fbf*/
    if ( (v7 & v5) == 0 ) /*0x775fc5*/
    {
      *(this + v6 + 0x10) = v5 | v7; /*0x775fc9*/
      v3 = 1; /*0x775fcd*/
    }
    if ( ++*(this + 0xF) == 0x1000 ) /*0x775fd9*/
      *(this + 0xF) = 0; /*0x775fdb*/
  }
  while ( !v3 ); /*0x775fe4*/
  return v2; /*0x775fe6*/
}
