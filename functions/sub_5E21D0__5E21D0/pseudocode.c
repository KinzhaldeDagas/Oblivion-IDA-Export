void __thiscall sub_5E21D0(Actor *this, Actor *a2)
{
  int *i; // ecx
  unsigned int v3; // esi

  for ( i = (int *)&this->members.dispositionModifier; i; i = (int *)i[1] ) /*0x5e21d6*/
  {
    v3 = *i; /*0x5e21e0*/
    if ( !*i ) /*0x5e21e0*/
      break; /*0x5e21e0*/
    if ( *(Actor **)(v3 + 4) == a2 ) /*0x5e21e9*/
    {
      BSSimpleList_Remove(i, *i); /*0x5e21f7*/
      FormHeapFree(v3); /*0x5e21fd*/
      return; /*0x5e21fd*/
    }
  }
}
