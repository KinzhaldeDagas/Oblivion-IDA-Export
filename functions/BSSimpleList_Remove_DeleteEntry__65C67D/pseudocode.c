int __usercall BSSimpleList_Remove_::DeleteEntry@<eax>(unsigned int a1@<eax>, int a2@<edx>, int a3)
{
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
  FormHeapFree(a1);
  return BSSimpleList_Remove_::Done_(a3);
}
