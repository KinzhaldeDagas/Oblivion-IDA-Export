Ni2DBuffer *__cdecl Ni2DBuffer::Ni2DBuffer(UInt32 a1, UInt32 a2)
{
  Ni2DBuffer *v2; // eax
  Ni2DBuffer *v3; // esi
  Ni2DBuffer *result; // eax

  v2 = (Ni2DBuffer *)FormHeapAlloc(0x14u); /*0x732075*/
  v3 = v2; /*0x73207a*/
  if ( v2 ) /*0x73208b*/
  {
    NiObject_constr((NiObject *)v2); /*0x73208f*/
    v3->__vftable = (#9279 *)&Ni2DBuffer::`vftable'; /*0x732094*/
    v3->members.width = 0; /*0x73209a*/
    v3->members.height = 0; /*0x73209d*/
    v3->members.data = 0; /*0x7320a0*/
    result = v3; /*0x7320a3*/
  }
  else
  {
    result = 0; /*0x7320a7*/
  }
  result->members.width = a1; /*0x7320b1*/
  result->members.height = a2; /*0x7320b4*/
  return result; /*0x7320b7*/
}
