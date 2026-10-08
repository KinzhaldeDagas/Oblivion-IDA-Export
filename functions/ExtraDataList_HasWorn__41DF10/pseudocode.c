bool __thiscall ExtraDataList_HasWorn(_BYTE *this, char a2)
{
  if ( a2 ) /*0x41df15*/
    return (*(this + 0xB) & 0x10) != 0; /*0x41df1d*/
  else
    return (*(this + 0xB) & 0x18) != 0; /*0x41df26*/
}
