BOOL __thiscall sub_52E110(BSStringT *this, char **a2)
{
  const char *v2; // eax

  *this = *(BSStringT *)a2;
  *(this + 1) = *((BSStringT *)a2 + 1);
  v2 = a2[4];
  if ( !v2 )
    v2 = EmptyString;
  return BSStringT_Set(this + 2, v2, 0);
}
