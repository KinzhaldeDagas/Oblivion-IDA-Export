const char *__thiscall sub_523F00(int this)
{
  unsigned int v1; // eax
  const char *result; // eax

  LOWORD(v1) = *(_WORD *)(this + 8); /*0x523f00*/
  if ( (_WORD)v1 == 0xFFFF ) /*0x523f08*/
    v1 = strlen(*(const char **)(this + 4)); /*0x523f0e*/
  else
    v1 = (unsigned __int16)v1; /*0x523f1f*/
  if ( !v1 ) /*0x523f24*/
    return "Characters\\_Male\\skeleton.nif"; /*0x523f33*/
  result = *(const char **)(this + 4); /*0x523f26*/
  if ( !result ) /*0x523f2b*/
    return EmptyString; /*0x523f2d*/
  return result; /*0x523f32*/
}
