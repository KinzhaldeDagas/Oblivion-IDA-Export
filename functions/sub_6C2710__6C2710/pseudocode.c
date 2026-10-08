// Oblivion position evaluator for numeric type 5: holds the lower key for t<1 and selects the upper key only at t>=1.
int __cdecl NiPosKey_EvaluateType5Step(float a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // eax

  if ( a1 >= 1.0 ) /*0x6c2723*/
    a2 = a3; /*0x6c2725*/
  *a4 = a2[1]; /*0x6c272c*/
  a4[1] = a2[2]; /*0x6c2731*/
  result = a2[3]; /*0x6c2734*/
  a4[2] = result; /*0x6c2737*/
  return result; /*0x6c273a*/
}
