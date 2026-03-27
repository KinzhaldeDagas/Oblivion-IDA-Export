unsigned int __thiscall sub_6FEB00(unsigned __int16 *this, LONG *a2)
{
  unsigned int v3; // edi

  v3 = *(this + 5);
  if ( v3 >= *(this + 4) )
    sub_523B10(this, v3 + *(this + 7));
  sub_4B34E0(this, v3, a2);
  return v3;
}
