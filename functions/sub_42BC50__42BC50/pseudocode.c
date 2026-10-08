signed int __thiscall sub_42BC50(_BYTE *this, int a2)
{
  unsigned __int8 v3; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v3 = *(this + 3); /*0x42bc53*/
  if ( (v3 & 0x7F) == 0x2A ) /*0x42bc63*/
    return (*(this + 1) >> 7) + ((*this >> 6) & 2) + ((v3 >> 5) & 4) != (*(_BYTE *)(a2 + 1) >> 7) /*0x42bca4*/
                                                                      + ((*(_BYTE *)a2 >> 6) & 2)
                                                                      + ((*(_BYTE *)(a2 + 3) >> 5) & 4);
  v5 = *(_DWORD *)(a2 + 4); /*0x42bca9*/
  v6 = *((_DWORD *)this + 1); /*0x42bcac*/
  if ( v6 < v5 ) /*0x42bcb1*/
    return 0xFFFFFFFF; /*0x42bcb4*/
  if ( v6 <= v5 && *(this + 2) == *(_BYTE *)(a2 + 2) ) /*0x42bccd*/
    return (*(this + 1) >> 7) + ((*this >> 6) & 2) + ((v3 >> 5) & 4) != (*(_BYTE *)(a2 + 1) >> 7) /*0x42bd0e*/
                                                                      + ((*(_BYTE *)a2 >> 6) & 2)
                                                                      + ((*(_BYTE *)(a2 + 3) >> 5) & 4);
  return 1; /*0x42bca2*/
}
