int __thiscall sub_957420(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 4) )
    {
      *(_DWORD *)a2 = *(this + 6);
      *(this + 6) = a2;
      ++*(this + 7);
    }
    else
    {
      *(_DWORD *)a2 = *(this + 4);
      *(this + 4) = a2;
      ++*(this + 5);
    }
  }
  return result;
}
