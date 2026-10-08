// DX10OBSE resource decode: creates NiRenderedTexture and asks the renderer to create its render-data texture; native render targets can later be sampled through the same stage/sampler SetTexture route.
NiRenderedTexture *__cdecl CreateNiRenderedTexture(int a1, int a2, NiDX9Renderer *a3, FormatPrefs *a4)
{
  NiRenderedTexture *v4; // esi
  NiRenderedTexture *v5; // eax
  Ni2DBuffer *v6; // eax

  v4 = 0; /*0x72a9d8*/
  if ( !a3 /*0x72aa24*/
    || (!a1 || ((a1 - 1) & a1) != 0 || !a2 || ((a2 - 1) & a2) != 0)
    && (a3->__vftable->super.GetFlags((NiRenderer *)a3) & 8) == 0
    && (a3->__vftable->super.GetFlags((NiRenderer *)a3) & 4) == 0 )
  {
    return 0; /*0x72aa24*/
  }
  v5 = (NiRenderedTexture *)FormHeapAlloc(0x40u); /*0x72aa2c*/
  if ( v5 ) /*0x72aa3e*/
    v4 = NiRenderedTexture::NiRenderedTexture(v5); /*0x72aa47*/
  v4->member.super.formatPrefs = *a4; /*0x72aa4f*/
  v6 = Ni2DBuffer::Ni2DBuffer(a1, a2); /*0x72aa68*/
  NiSmartPointer_Set__(&v4->member.buffer, v6); /*0x72aa74*/
  v4->member.unk034 = LOBYTE(MEMORY[0xB3F9B0][0x154]); /*0x72aa7f*/
  v4->member.format = dword_B2752C; /*0x72aa88*/
  v4->member.unk03C = byte_B27530; /*0x72aa90*/
  if ( !a3->__vftable->super.CreateRenderedTexture((NiRenderer *)a3, v4) ) /*0x72aa9f*/
  {
    v4->__vftable->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x72aaad*/
    return 0; /*0x72aac4*/
  }
  return v4; /*0x72aab1*/
}
