bool __thiscall sub_4AE5B0(TESFurniture *this, unsigned int a2)
{
  bool result; // al

  result = 0;
  if ( a2 < 0x20 )
    return ((1 << a2) & this->unk058) != 0;
  return result;
}
