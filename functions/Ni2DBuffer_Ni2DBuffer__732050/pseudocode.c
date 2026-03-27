Ni2DBuffer *__cdecl Ni2DBuffer::Ni2DBuffer(UInt32 a1, UInt32 a2)
{
  Ni2DBuffer *v2; // eax
  Ni2DBuffer *v3; // esi
  Ni2DBuffer *result; // eax

  v2 = (Ni2DBuffer *)FormHeapAlloc(0x14u);
  v3 = v2;
  if ( v2 )
  {
    NiObject_constr((NiObject *)v2);
    v3->__vftable = (#9279 *)&Ni2DBuffer::`vftable';
    v3->members.width = 0;
    v3->members.height = 0;
    v3->members.data = 0;
    result = v3;
  }
  else
  {
    result = 0;
  }
  result->members.width = a1;
  result->members.height = a2;
  return result;
}
