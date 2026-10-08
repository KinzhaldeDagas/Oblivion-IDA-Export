// MoonSugarEffect decode: release BuffData index buffer and reset IBSize/IB.
IDirect3DIndexBuffer9 *__thiscall sub_777F40(NiGeometryBufferData *this)
{
  IDirect3DIndexBuffer9 *result; // eax

  result = this->IB; /*0x777f43*/
  this->IBSize = 0; /*0x777f48*/
  if ( result ) /*0x777f4f*/
  {
    result = (IDirect3DIndexBuffer9 *)result->lpVtbl->Release(result); /*0x777f57*/
    this->IB = 0; /*0x777f59*/
  }
  return result; /*0x777f60*/
}
