char __thiscall sub_559870(char *this, unsigned int *a2, Ni2DBuffer **a3)
{
  Ni2DBuffer *v5; // esi

  if ( !a2 )
    return 0;
  if ( !sub_556A70(this, a3) )
    return 0;
  if ( !sub_558840(this, a2, (int)*a3, 1.0, 0) )
  {
    v5 = *a3;
    if ( *a3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
      {
        if ( v5 )
          (*(void (__thiscall **)(Ni2DBuffer *, int))v5->__vftable)(v5, 1);
      }
      *a3 = 0;
    }
    return 0;
  }
  return 1;
}
