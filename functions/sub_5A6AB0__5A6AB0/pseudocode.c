unsigned int __thiscall sub_5A6AB0(unsigned int *this, _DWORD *a2)
{
  unsigned int v3; // edi

  v3 = *(this + 3);
  if ( v3 >= *(this + 2) )
    sub_452910(this, v3 + *(this + 5));
  sub_446C50(this, v3, a2);
  return v3;
}
