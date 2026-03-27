int *__thiscall sub_58CD30(int *this)
{
  int v2; // eax
  int v3; // eax

  *(this + 1) = 0;
  *(this + 2) = 0;
  v2 = FormHeapAlloc(0x1Cu);
  if ( v2 )
    v3 = TileTemplateItem_constr(v2, "main", (int)this);
  else
    v3 = 0;
  *this = v3;
  *(this + 3) = 0;
  *((_BYTE *)this + 0x10) = 1;
  return this;
}
