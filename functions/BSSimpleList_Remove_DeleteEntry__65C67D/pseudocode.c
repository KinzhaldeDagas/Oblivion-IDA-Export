void __usercall BSSimpleList_Remove_::DeleteEntry(unsigned int a1@<eax>, int a2@<edx>, int a3)
{
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4); /*0x65c681*/
  FormHeapFree(a1); /*0x65c684*/
  BSSimpleList_Remove_::Done_(a3); /*0x65c68a*/
}
