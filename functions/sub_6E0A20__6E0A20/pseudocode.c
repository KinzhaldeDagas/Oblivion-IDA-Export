bool __thiscall sub_6E0A20(_BYTE *this, int a2)
{
  bool result; // al

  result = j_NiSingleInterpController_IsEqual(this, a2); /*0x6e0a29*/
  if ( result ) /*0x6e0a30*/
    return (*(this + 0x40) ^ ~*(_BYTE *)(a2 + 0x40)) & 1; /*0x6e0a40*/
  return result; /*0x6e0a32*/
}
