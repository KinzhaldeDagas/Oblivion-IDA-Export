void __cdecl sub_A27000()
{
  if ( stru_B429FC.begin ) /*0xa27007*/
    FormHeapFree((unsigned int)stru_B429FC.begin); /*0xa2700a*/
  stru_B429FC.begin = 0; /*0xa27012*/
  stru_B429FC.end = 0; /*0xa2701c*/
  stru_B429FC.capacity = 0; /*0xa27026*/
}
