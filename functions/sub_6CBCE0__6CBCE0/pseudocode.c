NiObject *sub_6CBCE0()
{
  NiObject *v0; // esi
  NiObject *result; // eax

  v0 = (NiObject *)FormHeapAlloc(0x30u); /*0x6cbd09*/
  result = 0; /*0x6cbd12*/
  if ( v0 ) /*0x6cbd1a*/
  {
    sub_6CC4E0(v0); /*0x6cbd1e*/
    v0->__vftable = (NiObjectVtbl *)&NiBlendTransformInterpolator::`vftable'; /*0x6cbd23*/
    return v0; /*0x6cbd29*/
  }
  return result; /*0x6cbd2b*/
}
