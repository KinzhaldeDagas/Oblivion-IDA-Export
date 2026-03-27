void __cdecl sub_A274C0()
{
  NiRenderedTexture *v0; // esi

  v0 = CanopySadowMap;
  if ( CanopySadowMap )
  {
    if ( !InterlockedDecrement((volatile LONG *)&CanopySadowMap->member) )
    {
      if ( v0 )
        v0->__vftable->super.super.super.Destructor((NiRefObject *)v0, 1);
    }
  }
}
