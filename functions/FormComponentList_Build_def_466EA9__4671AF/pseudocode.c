// positive sp value has been detected, the output may be wrong!
int __userpurge FormComponentList_Build_::def_466EA9@<eax>(int a1@<ebx>, int a2)
{
  int result; // eax
  int v3; // [esp-Ch] [ebp-10h]

  result = PrintError("Case not setup for form component type %i in InitFormComponentArray().", v3);
  if ( a1 + 1 < 0x1A )
    JUMPOUT(0x466EA0);
  return result;
}
