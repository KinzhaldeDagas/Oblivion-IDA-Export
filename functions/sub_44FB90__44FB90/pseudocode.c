Data *__thiscall sub_44FB90(Data *this)
{
  Data *result; // eax

  result = this->ghostFileParent;
  if ( result )
  {
    while ( result->ghostFileParent )
      result = result->ghostFileParent;
  }
  return result;
}
