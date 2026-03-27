NiRenderedTexture *__cdecl SetTextureCanopyShadowMap(NiRenderedTexture *a1)
{
  NiRenderedTexture *result; // eax
  NiRenderedTexture *v2; // esi

  result = CanopySadowMap;
  if ( CanopySadowMap != a1 )
  {
    if ( result )
    {
      v2 = CanopySadowMap;
      result = (NiRenderedTexture *)InterlockedDecrement((volatile LONG *)&result->member);
      if ( !result )
        result = (NiRenderedTexture *)((int (__thiscall *)(NiRenderedTexture *, int))v2->__vftable->super.super.super.Destructor)(
                                        v2,
                                        1);
    }
    CanopySadowMap = a1;
    if ( a1 )
      return (NiRenderedTexture *)InterlockedIncrement((volatile LONG *)&a1->member);
  }
  return result;
}
