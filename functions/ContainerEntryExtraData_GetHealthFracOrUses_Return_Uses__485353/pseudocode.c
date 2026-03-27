// positive sp value has been detected, the output may be wrong!
double __userpurge ContainerEntryExtraData_GetHealthFracOrUses_::Return_Uses@<st0>(
        int a1@<eax>,
        int a2@<ebx>,
        void **a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  double result; // st7

  if ( !a2 || a1 )
  {
LABEL_6:
    ContainerEntryExtraData_GetHealthFracOrUses_::Return(a4, a5, *(float *)&a6, a7);
    return result;
  }
  if ( (_BYTE)a4 )
  {
    if ( ContainerEntryExtraData_GetUses(a3) )
      return (float)ContainerEntryExtraData_GetUses(a3);
    goto LABEL_6;
  }
  ContainerEntryExtraData_GetHealthFracOrUses_::Return_BaseUseCount(a2, a4, a5, a6, a7);
  return result;
}
