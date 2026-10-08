bool __thiscall sub_6D18F0(_DWORD *this, int a2)
{
  bool result; // al

  result = j_NiSingleInterpController_IsEqual(this, a2); /*0x6d18f9*/
  if ( result ) /*0x6d1900*/
    return *(this + 0x15) == *(_DWORD *)(a2 + 0x54); /*0x6d190e*/
  return result; /*0x6d1902*/
}
