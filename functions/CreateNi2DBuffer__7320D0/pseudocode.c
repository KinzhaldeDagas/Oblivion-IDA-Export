Ni2DBuffer *__cdecl CreateNi2DBuffer(int width, int height, NiDX9TextureBufferData *a3)
{
  Ni2DBuffer *v4; // eax
  Ni2DBuffer *v5; // esi

  if ( !a3 || !a3->__vftable->GetSurfaceData(a3) ) /*0x732119*/
    return 0; /*0x7320fd*/
  v4 = (Ni2DBuffer *)FormHeapAlloc(0x14u); /*0x732121*/
  v5 = v4; /*0x732126*/
  if ( v4 ) /*0x732135*/
  {
    NiObject_constr((NiObject *)v4); /*0x732139*/
    v5->__vftable = (#9279 *)&Ni2DBuffer::`vftable'; /*0x73213e*/
    v5->members.width = 0; /*0x732144*/
    v5->members.height = 0; /*0x732147*/
    v5->members.data = 0; /*0x73214a*/
  }
  else
  {
    v5 = 0; /*0x73214f*/
  }
  v5->members.height = height; /*0x732159*/
  v5->members.width = width; /*0x732168*/
  NiSmartPointer_Set__((Ni2DBuffer **)&v5->members.data, (Ni2DBuffer *)a3); /*0x73216b*/
  sub_70BD60(v5, a3); /*0x732173*/
  return v5; /*0x7320ff*/
}
