void __thiscall sub_8A4DB0(int *this)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // esi

  if ( *(this + 1) )
  {
    do
    {
      v2 = (int *)*(this + 1);
      v3 = v2[1];
      if ( v2 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
          {
            if ( v4 )
              (**(void (__thiscall ***)(int, int))v4)(v4, 1);
          }
        }
        FormHeapFree((unsigned int)v2);
      }
      *(this + 1) = v3;
    }
    while ( v3 );
  }
  v5 = *this;
  if ( *this )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
    {
      if ( v5 )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *this = 0;
  }
}
