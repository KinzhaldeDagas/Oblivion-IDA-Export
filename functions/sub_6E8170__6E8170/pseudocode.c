Ni2DBuffer *__thiscall sub_6E8170(int **this, int arg0, NiDX9TextureBufferData *a2)
{
  Ni2DBuffer *result; // eax
  int *v5; // ecx
  Ni2DBuffer *v6; // esi
  NiDX9TextureBufferData *v7; // edi
  bool v8; // zf

  result = (Ni2DBuffer *)NiInterpolator_CloneTimeRange(this, arg0, (int)a2); /*0x6e81a6*/
  v5 = *(this + 4); /*0x6e81ab*/
  v6 = result; /*0x6e81b0*/
  if ( v5 ) /*0x6e81b2*/
  {
    sub_6E8920(v5, (int *)&a2, *(float *)&arg0, *(float *)&a2); /*0x6e81cb*/
    sub_70BD60(v6, a2); /*0x6e81df*/
    v7 = a2; /*0x6e81e4*/
    v8 = a2 == 0; /*0x6e81e8*/
    v6[1].__vftable = 0; /*0x6e81ea*/
    if ( !v8 && !InterlockedDecrement((volatile LONG *)&v7->member) ) /*0x6e81ff*/
    {
      if ( v7 ) /*0x6e820b*/
        v7->__vftable->super.Destructor((NiRefObject *)v7, 1); /*0x6e8215*/
    }
    return v6; /*0x6e8217*/
  }
  return result; /*0x6e8219*/
}
