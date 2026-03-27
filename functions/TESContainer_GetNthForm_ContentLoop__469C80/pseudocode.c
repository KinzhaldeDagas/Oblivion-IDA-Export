int __userpurge TESContainer_GetNthForm_::ContentLoop@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  while ( a2 != a3 )
  {
    a1 = (_DWORD *)a1[1];
    ++a2;
    if ( !a1 )
      return TESContainer_GetNthForm_::Return_0(a4);
  }
  return *(_DWORD *)(*a1 + 4);
}
