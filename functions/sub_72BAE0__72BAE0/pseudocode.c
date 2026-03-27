int __cdecl sub_72BAE0(const char **a1, const char **a2)
{
  if ( !a1 )
    return 1;
  if ( a2 )
    return strcmp(*a1, *a2);
  return 0xFFFFFFFF;
}
