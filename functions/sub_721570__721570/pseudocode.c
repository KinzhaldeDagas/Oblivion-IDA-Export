bool __thiscall sub_721570(const char **this, int a2)
{
  bool result; // al

  result = sub_700670((NiTriBasedGeomData *)this, a2); /*0x721579*/
  if ( result ) /*0x721580*/
    return strcmp(*(this + 2), *(const char **)(a2 + 8)) == 0; /*0x7215a5*/
  return result; /*0x721582*/
}
