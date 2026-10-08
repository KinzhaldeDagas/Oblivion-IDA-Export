int *__cdecl _Deletegloballocale(int *a1)
{
  int *result; // eax

  result = a1; /*0x9807f8*/
  if ( *a1 ) /*0x9807fc*/
  {
    result = (int *)sub_6F6DC0(*a1); /*0x980802*/
    if ( result ) /*0x980809*/
      return (*(int *(__thiscall **)(int *, int))*result)(result, 1); /*0x980811*/
  }
  return result; /*0x980813*/
}
