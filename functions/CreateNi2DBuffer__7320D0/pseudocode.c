Ni2DBuffer *__cdecl CreateNi2DBuffer(int width, int height, NiDX9TextureBufferData *a3)
{
  Ni2DBuffer *v4; // eax
  Ni2DBuffer *v5; // esi

  if ( !a3 || !a3->__vftable->GetSurfaceData(a3) )
    return 0;
  v4 = (Ni2DBuffer *)FormHeapAlloc(0x14u);
  v5 = v4;
  if ( v4 )
  {
    NiObject_constr((NiObject *)v4);
    v5->__vftable = (#9279 *)&Ni2DBuffer::`vftable';
    v5->members.width = 0;
    v5->members.height = 0;
    v5->members.data = 0;
  }
  else
  {
    v5 = 0;
  }
  v5->members.height = height;
  v5->members.width = width;
  NiSmartPointer_Set__((Ni2DBuffer **)&v5->members.data, (Ni2DBuffer *)a3);
  sub_70BD60(v5, a3);
  return v5;
}
