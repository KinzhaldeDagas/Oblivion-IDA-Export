// positive sp value has been detected, the output may be wrong!
void __userpurge TESContainer_AddUnlinkedForm_::ContentLoop(int a1@<eax>, _DWORD *a2@<edi>, _DWORD *a3@<esi>, int a4)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // eax

  do
  {
    v4 = *(_DWORD **)a1;
    if ( !*(_DWORD *)a1 )
      break;
    if ( v4[1] == *a3 )
    {
      *v4 = a3[1];
      return;
    }
    a1 = *(_DWORD *)(a1 + 4);
  }
  while ( a1 );
  v5 = (_DWORD *)FormHeapAlloc(8u);
  if ( v5 )
  {
    *v5 = 1;
    v5[1] = 0;
  }
  else
  {
    v5 = 0;
  }
  v5[1] = *a3;
  *v5 = a3[1];
  BSSimpleList_PushFront(a2, (int)v5);
}
