IDirect3DIndexBuffer9 *__thiscall sub_777F40(NiGeometryBufferData *this)
{
  IDirect3DIndexBuffer9 *result; // eax

  result = this->IB;
  this->IBSize = 0;
  if ( result )
  {
    result = (IDirect3DIndexBuffer9 *)result->lpVtbl->Release(result);
    this->IB = 0;
  }
  return result;
}
