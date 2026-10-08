void __cdecl sub_A26F40()
{
  if ( firstOwner.begin ) /*0xa26f47*/
    FormHeapFree((unsigned int)firstOwner.begin); /*0xa26f4a*/
  firstOwner.begin = 0; /*0xa26f52*/
  firstOwner.end = 0; /*0xa26f5c*/
  firstOwner.capacity = 0; /*0xa26f66*/
}
