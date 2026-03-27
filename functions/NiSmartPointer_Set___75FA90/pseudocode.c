_DWORD *__thiscall NiSmartPointer_Set__(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v3; // esi

  v3 = *this;
  if ( *this != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members) )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable)(v3, 1);
    }
    *this = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->members);
  }
  return this;
}
