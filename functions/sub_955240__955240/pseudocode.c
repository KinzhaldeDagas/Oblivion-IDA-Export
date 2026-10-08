int __thiscall sub_955240(unsigned int **this, int a2, int a3, signed int a4, int a5, int a6)
{
  unsigned int *v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  __int16 v12; // [esp+24h] [ebp+14h]

  v7 = *(this + 4); /*0x955249*/
  v8 = a6; /*0x955250*/
  v9 = v7[3] - a6; /*0x955256*/
  if ( a4 >= 3 ) /*0x95525b*/
    goto LABEL_11; /*0x95525b*/
  v10 = v7[3] - a5; /*0x955261*/
  v12 = *((_WORD *)v7 + 6) - a5; /*0x955267*/
  if ( (v10 > 0 || v9 > 0xF8) && v10 < 0x10000 && v9 < 0x10000 ) /*0x955282*/
  {
    sub_956520(v7, v9); /*0x95528c*/
    sub_956520(*(this + 4), SBYTE1(v9)); /*0x955298*/
    sub_956520(*(this + 4), v12); /*0x9552ad*/
    sub_956520(*(this + 4), SHIBYTE(v12)); /*0x9552b9*/
    sub_956520(*(this + 4), a2); /*0x9552c6*/
    sub_956520(*(this + 4), a3); /*0x9552d3*/
    return sub_956520(*(this + 4), a4 + 0x23); /*0x9552e8*/
  }
  if ( a3 - a2 == 1 ) /*0x9552f6*/
  {
    if ( v9 > 0xFB ) /*0x9552fe*/
    {
      sub_954BC0(this, v8); /*0x955303*/
      v8 = (*(this + 4))[3]; /*0x95530b*/
    }
    sub_954BC0(this, a5); /*0x955315*/
    sub_956520(*(this + 4), (*(this + 4))[3] - v8); /*0x955323*/
    sub_956520(*(this + 4), a2); /*0x955330*/
    return sub_956520(*(this + 4), a4 + 0x20); /*0x95533c*/
  }
  else
  {
LABEL_11:
    if ( v9 > 0xFB ) /*0x95534e*/
    {
      sub_954BC0(this, v8); /*0x955353*/
      v8 = (*(this + 4))[3]; /*0x95535b*/
    }
    sub_954BC0(this, a5); /*0x955365*/
    sub_956520(*(this + 4), (*(this + 4))[3] - v8); /*0x955373*/
    sub_956520(*(this + 4), a2); /*0x955380*/
    sub_956520(*(this + 4), a3); /*0x95538d*/
    return sub_956520(*(this + 4), a4 + 0x10); /*0x955399*/
  }
}
