void __thiscall sub_76C910(_DWORD *this, NiRenderedTexture *a2)
{
  NiRenderedTexture *v3; // esi

  v3 = (NiRenderedTexture *)*(this + 1);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->member) )
        v3->__vftable->super.super.super.Destructor((NiRefObject *)v3, 1);
    }
    *(this + 1) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->member);
  }
}
