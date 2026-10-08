// 3DTheft decode: TargetData_SetType writes targetType and clears the target/object field for refr/base/type target modes.
int __thiscall TESPackage_TargetData_SetType(unsigned __int8 *this, int a2)
{
  int result; // eax

  result = a2; /*0x569e93*/
  if ( *this != a2 ) /*0x569e99*/
  {
    *this = a2; /*0x569e9b*/
    result = (unsigned __int8)a2; /*0x569e9d*/
    if ( !(_BYTE)a2 /*0x569eae*/
      || (result = (unsigned __int8)a2 - 1, (unsigned __int8)a2 == 1)
      || (result = (unsigned __int8)a2 - 2, (unsigned __int8)a2 == 2) )
    {
      *((_DWORD *)this + 1) = 0; /*0x569eb0*/
    }
  }
  return result; /*0x569eb3*/
}
