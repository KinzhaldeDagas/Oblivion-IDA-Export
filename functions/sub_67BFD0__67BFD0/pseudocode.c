void __userpurge sub_67BFD0(int **a1@<ecx>, int a2@<edi>, int *a3)
{
  BSSimpleList_Remove(*a1, (int)a3);
  if ( a3 )
  {
    sub_67B5F0(a3, a2);
    FormHeapFree((unsigned int)a3);
  }
}
