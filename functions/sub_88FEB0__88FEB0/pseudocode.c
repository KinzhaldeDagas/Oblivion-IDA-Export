int __thiscall sub_88FEB0(_DWORD *this, int a2)
{
  int result; // eax

  result = *(_DWORD *)(*(_DWORD *)(a2 + 0x28) + 0x1C) & 0x3F; /*0x88feba*/
  if ( (_BYTE)result == 0x14 ) /*0x88febf*/
  {
    result = *(this + 0x19); /*0x88fec1*/
    if ( result ) /*0x88fec6*/
      *(this + 0x19) = --result; /*0x88fecb*/
  }
  return result; /*0x88fece*/
}
