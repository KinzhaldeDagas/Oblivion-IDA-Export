int sub_483320()
{
  int result; // eax

  result = uGridsToLoad;
  if ( (unsigned int)uGridsToLoad >= 5 )
  {
    if ( (result & 1) == 0 )
      uGridsToLoad = ++result;
  }
  else
  {
    uGridsToLoad = 5;
  }
  return result;
}
