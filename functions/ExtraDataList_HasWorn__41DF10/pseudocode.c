bool __thiscall ExtraDataList_HasWorn(_BYTE *this, char a2)
{
  if ( a2 )
    return (*(this + 0xB) & 0x10) != 0;
  else
    return (*(this + 0xB) & 0x18) != 0;
}
