int __thiscall sub_556300(_DWORD *this)
{
  int v1; // edx

  v1 = *(this + 1);
  if ( v1 )
    return (*(this + 2) - v1) >> 6;
  else
    return 0;
}
