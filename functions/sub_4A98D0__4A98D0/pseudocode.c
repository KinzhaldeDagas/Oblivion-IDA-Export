int __thiscall sub_4A98D0(int *this, char *a2, float a3, float a4)
{
  if ( this == &dword_B35788 || a4 == a3 )
    return _sprintf(a2, "%.2f", a3);
  else
    return _sprintf(a2, "%.2f(%.2f)", a3, a4);
}
