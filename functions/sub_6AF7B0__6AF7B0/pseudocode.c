unsigned int __thiscall sub_6AF7B0(_DWORD *this, int a2)
{
  unsigned int result; // eax

  *(this + 1) -= a2;
  *(this + 4) += a2;
  result = *(this + 4);
  if ( result >= 8 )
  {
    result = 0xFFFFFFFF;
    do
    {
      *(this + 4) -= 8;
      --*(this + 2);
    }
    while ( *(this + 4) >= 8u );
  }
  return result;
}
