void __thiscall sub_689C10(int *this)
{
  int *v1; // esi
  TravelPathNode *v2; // edi
  int *v3; // eax

  v1 = this + 1; /*0x689c11*/
  if ( this != (int *)0xFFFFFFFC && (*(this + 2) || *v1) ) /*0x689c1e*/
  {
    v2 = (TravelPathNode *)*v1; /*0x689c24*/
    if ( *v1 ) /*0x689c24*/
    {
      TravelPathNode_FreeOwnedPosition((TravelPathNode *)*v1); /*0x689c2c*/
      FormHeapFree((unsigned int)v2); /*0x689c32*/
    }
    v3 = (int *)v1[1]; /*0x689c3a*/
    if ( v3 ) /*0x689c40*/
    {
      v1[1] = v3[1]; /*0x689c45*/
      *v1 = *v3; /*0x689c4b*/
      FormHeapFree((unsigned int)v3); /*0x689c4d*/
    }
    else
    {
      *v1 = 0; /*0x689c57*/
    }
  }
}
