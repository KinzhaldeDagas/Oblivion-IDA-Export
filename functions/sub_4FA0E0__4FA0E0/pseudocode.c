int *__thiscall sub_4FA0E0(Script *this)
{
  int *result; // eax
  int v2; // ecx

  for ( result = (int *)this->super.member.flags; result; *(_DWORD *)(v2 + 4) = 0 )
  {
    v2 = *result;
    if ( !*result )
      break;
    result = (int *)result[1];
  }
  return result;
}
