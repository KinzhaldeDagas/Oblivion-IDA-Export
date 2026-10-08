const char *__thiscall sub_6E0A00(_BYTE *this)
{
  const char *result; // eax

  result = "Ambient"; /*0x6e0a04*/
  if ( (*(this + 0x40) & 1) == 0 ) /*0x6e0a09*/
    return "Diffuse"; /*0x6e0a0b*/
  return result; /*0x6e0a10*/
}
