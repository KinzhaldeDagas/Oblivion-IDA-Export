// positive sp value has been detected, the output may be wrong!
char __userpurge def_74C836@<al>(int a1@<ebx>, int a2@<ebp>, NiPoint3 *a3@<edi>, float *a4@<esi>, int a5, NiPoint3 *a6)
{
  if ( a2 ) /*0x74c8b9*/
    return sub_74B220(a4, a1, a3, a5, a6); /*0x74c8c9*/
  else
    return sub_74AD30(a4, (int)a3, a5, a6); /*0x74c8e5*/
}
