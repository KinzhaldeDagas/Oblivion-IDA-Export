int sub_483320()
{
  int result; // eax

  result = uGridsToLoad; /*0x483320*/
  if ( (unsigned int)uGridsToLoad >= 5 ) /*0x483328*/
  {
    if ( (result & 1) == 0 ) /*0x483337*/
      uGridsToLoad = ++result; /*0x48333c*/
  }
  else
  {
    uGridsToLoad = 5; /*0x48332a*/
  }
  return result; /*0x483334*/
}
