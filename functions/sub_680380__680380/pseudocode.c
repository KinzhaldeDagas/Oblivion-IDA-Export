int __thiscall sub_680380(_DWORD *this, int a2)
{
  int result; // eax

  result = 0;
  if ( a2 )
  {
    if ( *(this + 2) == a2 )
    {
      return *(this + 1);
    }
    else if ( *(this + 4) == a2 )
    {
      return *(this + 3);
    }
  }
  return result;
}
