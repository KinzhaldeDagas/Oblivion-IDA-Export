void __thiscall TESLeveledList_Clear(unsigned int *this)
{
  unsigned int *v1; // esi
  unsigned int *v2; // eax

  v1 = this + 1;
  if ( this != (unsigned int *)0xFFFFFFFC )
  {
    do
    {
      if ( *v1 )
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
      else
      {
        v1 = (unsigned int *)v1[1];
      }
    }
    while ( v1 );
  }
}
