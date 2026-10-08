void __cdecl sub_A26FC0()
{
  if ( lastOwner.begin ) /*0xa26fc7*/
    FormHeapFree((unsigned int)lastOwner.begin); /*0xa26fca*/
  lastOwner.begin = 0; /*0xa26fd2*/
  lastOwner.end = 0; /*0xa26fdc*/
  lastOwner.capacity = 0; /*0xa26fe6*/
}
