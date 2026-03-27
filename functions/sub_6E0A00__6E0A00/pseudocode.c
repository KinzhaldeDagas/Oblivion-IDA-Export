const char *__thiscall sub_6E0A00(_BYTE *this)
{
  const char *result; // eax

  result = "Ambient";
  if ( (*(this + 0x40) & 1) == 0 )
    return "Diffuse";
  return result;
}
