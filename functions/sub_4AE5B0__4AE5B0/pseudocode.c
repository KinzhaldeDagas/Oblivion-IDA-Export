bool __thiscall sub_4AE5B0(TESFurniture *this, unsigned int a2)
{
  bool result; // al

  result = 0; /*0x4ae5b6*/
  if ( a2 < 0x20 ) /*0x4ae5bb*/
    return ((1 << a2) & this->unk058) != 0; /*0x4ae5cb*/
  return result; /*0x4ae5cd*/
}
