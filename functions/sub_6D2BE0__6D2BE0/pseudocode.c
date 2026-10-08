Ni2DBuffer *__thiscall sub_6D2BE0(int **this, int arg0, NiDX9TextureBufferData *a2)
{
  Ni2DBuffer *result; // eax
  int *v5; // ecx
  Ni2DBuffer *v6; // esi
  NiDX9TextureBufferData *v7; // edi
  bool v8; // zf

  result = (Ni2DBuffer *)NiInterpolator_CloneTimeRange(this, arg0, (int)a2); /*0x6d2c16*/
  v5 = *(this + 4); /*0x6d2c1b*/
  v6 = result; /*0x6d2c20*/
  if ( v5 ) /*0x6d2c22*/
  {
    sub_6E35A0(v5, (int *)&a2, *(float *)&arg0, *(float *)&a2); /*0x6d2c3b*/
    sub_70BD60(v6, a2); /*0x6d2c4f*/
    v7 = a2; /*0x6d2c54*/
    v8 = a2 == 0; /*0x6d2c58*/
    v6[1].__vftable = 0; /*0x6d2c5a*/
    if ( !v8 && !InterlockedDecrement((volatile LONG *)&v7->member) ) /*0x6d2c6f*/
    {
      if ( v7 ) /*0x6d2c7b*/
        v7->__vftable->super.Destructor((NiRefObject *)v7, 1); /*0x6d2c85*/
    }
    return v6; /*0x6d2c87*/
  }
  return result; /*0x6d2c89*/
}
