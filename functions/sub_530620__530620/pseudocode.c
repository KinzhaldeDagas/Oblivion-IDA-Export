void sub_530620()
{
  unsigned int *v0; // esi
  int *v1; // edi

LABEL_1:
  v0 = (unsigned int *)dword_B36580;
  v1 = (int *)dword_B36584;
  while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&dword_B36580) )
  {
    if ( v0 )
    {
      sub_52E1C0(v0);
      FormHeapFree((unsigned int)v0);
      v1 = (int *)dword_B36584;
    }
    if ( v1 )
    {
      dword_B36584 = v1[1];
      dword_B36580 = *v1;
      FormHeapFree((unsigned int)v1);
      goto LABEL_1;
    }
    v0 = 0;
    dword_B36580 = 0;
  }
}
