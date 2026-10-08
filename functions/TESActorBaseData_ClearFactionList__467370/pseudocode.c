void __thiscall TESActorBaseData_ClearFactionList(unsigned int *this)
{
  unsigned int *v1; // esi
  unsigned int *v2; // eax

  v1 = this + 6; /*0x467371*/
  if ( this != (unsigned int *)0xFFFFFFE8 ) /*0x467376*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) ) /*0x467381*/
    {
      FormHeapFree(*v1); /*0x467386*/
      v2 = (unsigned int *)v1[1]; /*0x46738b*/
      if ( v2 ) /*0x467393*/
      {
        v1[1] = v2[1]; /*0x467398*/
        *v1 = *v2; /*0x46739e*/
        FormHeapFree((unsigned int)v2); /*0x4673a0*/
      }
      else
      {
        *v1 = 0; /*0x4673aa*/
      }
    }
  }
}
