int __userpurge TESContainer_GetNthForm_::ContentLoop@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  while ( a2 != a3 ) /*0x469c82*/
  {
    a1 = (_DWORD *)a1[1]; /*0x469c84*/
    ++a2; /*0x469c87*/
    if ( !a1 ) /*0x469c8c*/
      return TESContainer_GetNthForm_::Return_0(a4); /*0x469c8d*/
  }
  return *(_DWORD *)(*a1 + 4); /*0x469c98*/
}
