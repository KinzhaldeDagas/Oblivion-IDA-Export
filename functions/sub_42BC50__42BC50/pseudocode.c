signed int __thiscall sub_42BC50(_BYTE *this, int a2)
{
  unsigned __int8 v3; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v3 = *(this + 3);
  if ( (v3 & 0x7F) == 0x2A )
    return (*(this + 1) >> 7) + ((*this >> 6) & 2) + ((v3 >> 5) & 4) != (*(_BYTE *)(a2 + 1) >> 7)
                                                                      + ((*(_BYTE *)a2 >> 6) & 2)
                                                                      + ((*(_BYTE *)(a2 + 3) >> 5) & 4);
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *((_DWORD *)this + 1);
  if ( v6 < v5 )
    return 0xFFFFFFFF;
  if ( v6 <= v5 && *(this + 2) == *(_BYTE *)(a2 + 2) )
    return (*(this + 1) >> 7) + ((*this >> 6) & 2) + ((v3 >> 5) & 4) != (*(_BYTE *)(a2 + 1) >> 7)
                                                                      + ((*(_BYTE *)a2 >> 6) & 2)
                                                                      + ((*(_BYTE *)(a2 + 3) >> 5) & 4);
  return 1;
}
