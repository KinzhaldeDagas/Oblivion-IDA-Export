void __thiscall sub_5E21D0(Actor *this, Actor *a2)
{
  DispositionModifier **i; // ecx
  unsigned int v3; // esi

  for ( i = &this->members.dispositionModifier; i; i = (DispositionModifier **)i[1] )
  {
    v3 = (unsigned int)*i;
    if ( !*i )
      break;
    if ( *(Actor **)(v3 + 4) == a2 )
    {
      BSSimpleList_Remove(i, (int)*i);
      FormHeapFree(v3);
      return;
    }
  }
}
