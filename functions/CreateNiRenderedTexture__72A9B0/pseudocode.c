NiRenderedTexture *__cdecl CreateNiRenderedTexture(int a1, int a2, NiDX9Renderer *a3, FormatPrefs *a4)
{
  NiRenderedTexture *v4; // esi
  NiRenderedTexture *v5; // eax
  Ni2DBuffer *v6; // eax

  v4 = 0;
  if ( !a3
    || (!a1 || ((a1 - 1) & a1) != 0 || !a2 || ((a2 - 1) & a2) != 0)
    && (a3->__vftable->super.GetFlags((NiRenderer *)a3) & 8) == 0
    && (a3->__vftable->super.GetFlags((NiRenderer *)a3) & 4) == 0 )
  {
    return 0;
  }
  v5 = (NiRenderedTexture *)FormHeapAlloc(0x40u);
  if ( v5 )
    v4 = NiRenderedTexture::NiRenderedTexture(v5);
  v4->member.super.formatPrefs = *a4;
  v6 = Ni2DBuffer::Ni2DBuffer(a1, a2);
  NiSmartPointer_Set__(&v4->member.buffer, v6);
  v4->member.unk034 = byte_B3FF00;
  v4->member.format = dword_B2752C;
  v4->member.unk03C = byte_B27530;
  if ( !a3->__vftable->super.CreateRenderedTexture((NiRenderer *)a3, v4) )
  {
    v4->__vftable->super.super.super.Destructor((NiRefObject *)v4, 1);
    return 0;
  }
  return v4;
}
