_DWORD *__thiscall NiSmartPointer_Set__(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v3; // esi

  v3 = *this; /*0x75fa99*/
  if ( *this != a2 ) /*0x75fa9d*/
  {
    if ( v3 ) /*0x75faa1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x75faa7*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v3->__vftable)(v3, 1); /*0x75fabd*/
    }
    *this = a2; /*0x75fac1*/
    if ( a2 ) /*0x75fac3*/
      InterlockedIncrement((volatile LONG *)&a2->members); /*0x75fac9*/
  }
  return this; /*0x75fad1*/
}
