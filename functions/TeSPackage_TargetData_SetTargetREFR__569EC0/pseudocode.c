// 3DTheft decode: TargetData_SetTargetREFR only writes the reference field when targetType is 0 (reference target). It does not set count.
int __thiscall TeSPackage_TargetData_SetTargetREFR(_DWORD *this, int a2)
{
  int result; // eax

  if ( !*(_BYTE *)this ) /*0x569ec0*/
  {
    *(this + 1) = a2; /*0x569ec9*/
    return a2; /*0x569ec5*/
  }
  return result; /*0x569ecc*/
}
