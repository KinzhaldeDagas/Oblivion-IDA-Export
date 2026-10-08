// positive sp value has been detected, the output may be wrong!
int __userpurge FormComponentList_Build_::def_466EA9@<eax>(int a1@<ebx>, int a2)
{
  int result; // eax
  int v3; // [esp-Ch] [ebp-10h]

  result = PrintError("Case not setup for form component type %i in InitFormComponentArray().", v3); /*0x4671b5*/
  if ( a1 + 1 < 0x1A ) /*0x4671c3*/
    JUMPOUT(0x466EA0); /*0x466ea0*/
  return result; /*0x4671cb*/
}
