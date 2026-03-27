void __thiscall TESActorBaseData_ClearFactionList(unsigned int *this)
{
  unsigned int *v1; // esi
  unsigned int *v2; // eax

  v1 = this + 6;
  if ( this != (unsigned int *)0xFFFFFFE8 )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) )
    {
      FormHeapFree(*v1);
      v2 = (unsigned int *)v1[1];
      if ( v2 )
      {
        v1[1] = v2[1];
        *v1 = *v2;
        FormHeapFree((unsigned int)v2);
      }
      else
      {
        *v1 = 0;
      }
    }
  }
}
