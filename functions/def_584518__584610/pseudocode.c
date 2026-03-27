// positive sp value has been detected, the output may be wrong!
int __userpurge def_584518@<eax>(char *a1@<edi>, int a2@<esi>, int a3, int a4)
{
  if ( *a1 < 0 )
    return -a2;
  return a2;
}
