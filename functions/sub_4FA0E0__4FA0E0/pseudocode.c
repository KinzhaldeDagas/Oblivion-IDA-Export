int *__thiscall sub_4FA0E0(Script *this)
{
  int *result; // eax
  int v2; // ecx

  for ( result = (int *)this->super.member.flags; result; *(_DWORD *)(v2 + 4) = 0 ) /*0x4fa0e7*/
  {
    v2 = *result; /*0x4fa0f0*/
    if ( !*result ) /*0x4fa0f0*/
      break; /*0x4fa0f4*/
    result = (int *)result[1]; /*0x4fa0f6*/
  }
  return result; /*0x4fa100*/
}
