int __thiscall sub_484780(ExtraDataList ***this)
{
  ExtraDataList **v1; // esi
  int i; // ebx
  ExtraDataList *v3; // edi

  v1 = *this; /*0x484782*/
  for ( i = 0; v1; v1 = (ExtraDataList **)v1[1] ) /*0x484782*/
  {
    v3 = *v1; /*0x484790*/
    if ( !*v1 ) /*0x484790*/
      break; /*0x484794*/
    if ( ExtraDataList_IsExtraDefaultForContainer_all(*v1) ) /*0x484798*/
      i += ExtraDataList_GetExtraCount(v3); /*0x4847ab*/
  }
  return i; /*0x4847b5*/
}
