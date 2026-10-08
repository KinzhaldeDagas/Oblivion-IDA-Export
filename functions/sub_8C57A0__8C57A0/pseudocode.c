int __thiscall sub_8C57A0(_DWORD *this, unsigned int a2)
{
  int v2; // edx
  signed int v3; // eax
  int v4; // edx

  if ( this ) /*0x8c57a2*/
    v2 = *(this + 2); /*0x8c57a4*/
  else
    v2 = 0; /*0x8c57a9*/
  v3 = HIBYTE(a2); /*0x8c57b2*/
  if ( a2 == 0xFFFFFFFF ) /*0x8c57b8*/
    return *(this + 4); /*0x8c57b8*/
  v4 = *(_DWORD *)(v2 + 0x10); /*0x8c57ba*/
  if ( v3 >= *(unsigned __int16 *)(v4 + 0x10) ) /*0x8c57c3*/
    return *(this + 4); /*0x8c57d3*/
  else
    return *(_DWORD *)(*(_DWORD *)(v4 + 0x1C) + 0xC * v3 + 8); /*0x8c57cb*/
}
