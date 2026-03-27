int __thiscall sub_6D73F0(const char **this, int a2)
{
  int result; // eax

  if ( *(float *)a2 != *(float *)this )
    return 1;
  result = strcmp(*(this + 1), *(const char **)(a2 + 4));
  if ( result )
    return 1;
  return result;
}
