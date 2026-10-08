// positive sp value has been detected, the output may be wrong!
int __userpurge def_584518@<eax>(char *a1@<edi>, int a2@<esi>, int a3, int a4)
{
  if ( *a1 < 0 ) /*0x584613*/
    return -a2; /*0x584615*/
  return a2; /*0x58461e*/
}
