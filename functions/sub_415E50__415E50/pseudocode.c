int __thiscall sub_415E50(int *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 0x29);
  if ( v2 <= 0 )
  {
    result = v2 - 1;
    *(this + 0x29) = result;
  }
  else
  {
    PrintError("Trying to Queue up a Magic Effect Associated Item which is already loaded");
    return *(this + 0x29);
  }
  return result;
}
