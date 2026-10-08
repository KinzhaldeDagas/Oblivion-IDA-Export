// positive sp value has been detected, the output may be wrong!
void __userpurge TESContainer_AddUnlinkedForm_::ContentLoop(int a1@<eax>, _DWORD *a2@<edi>, _DWORD *a3@<esi>, int a4)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // eax

  do /*0x469782*/
  {
    v4 = *(_DWORD **)a1; /*0x469770*/
    if ( !*(_DWORD *)a1 ) /*0x469770*/
      break; /*0x469774*/
    if ( v4[1] == *a3 ) /*0x46977b*/
    {
      *v4 = a3[1]; /*0x4697a5*/
      return; /*0x4697a8*/
    }
    a1 = *(_DWORD *)(a1 + 4); /*0x46977d*/
  }
  while ( a1 ); /*0x469782*/
  v5 = (_DWORD *)FormHeapAlloc(8u); /*0x469786*/
  if ( v5 ) /*0x469790*/
  {
    *v5 = 1; /*0x469792*/
    v5[1] = 0; /*0x469798*/
  }
  else
  {
    v5 = 0; /*0x4697ab*/
  }
  v5[1] = *a3; /*0x4697af*/
  *v5 = a3[1]; /*0x4697b8*/
  BSSimpleList_PushFront(a2, (int)v5); /*0x4697ba*/
}
