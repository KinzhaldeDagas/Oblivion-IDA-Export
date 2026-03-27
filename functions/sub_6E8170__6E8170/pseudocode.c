Ni2DBuffer *__thiscall sub_6E8170(_DWORD *this, int arg0, NiDX9TextureBufferData *a2)
{
  Ni2DBuffer *result; // eax
  _DWORD *v5; // ecx
  Ni2DBuffer *v6; // esi
  NiDX9TextureBufferData *v7; // edi
  bool v8; // zf

  result = (Ni2DBuffer *)sub_6EBA60(this, arg0, (int)a2);
  v5 = (_DWORD *)*(this + 4);
  v6 = result;
  if ( v5 )
  {
    sub_6E8920(v5, (int)&a2, *(float *)&arg0, *(float *)&a2);
    sub_70BD60(v6, a2);
    v7 = a2;
    v8 = a2 == 0;
    v6[1].__vftable = 0;
    if ( !v8 && !InterlockedDecrement((volatile LONG *)&v7->member) )
    {
      if ( v7 )
        v7->__vftable->super.Destructor((NiRefObject *)v7, 1);
    }
    return v6;
  }
  return result;
}
