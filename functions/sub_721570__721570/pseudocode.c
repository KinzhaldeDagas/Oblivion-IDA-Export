bool __thiscall sub_721570(const char **this, int a2)
{
  bool result; // al

  result = sub_700670((NiTriBasedGeomData *)this, a2);
  if ( result )
    return strcmp(*(this + 2), *(const char **)(a2 + 8)) == 0;
  return result;
}
