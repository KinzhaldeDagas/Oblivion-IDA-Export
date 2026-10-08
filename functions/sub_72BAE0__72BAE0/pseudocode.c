int __cdecl sub_72BAE0(const char **a1, const char **a2)
{
  if ( !a1 ) /*0x72bae6*/
    return 1; /*0x72bae8*/
  if ( a2 ) /*0x72baf4*/
    return strcmp(*a1, *a2); /*0x72bb04*/
  return 0xFFFFFFFF; /*0x72baed*/
}
