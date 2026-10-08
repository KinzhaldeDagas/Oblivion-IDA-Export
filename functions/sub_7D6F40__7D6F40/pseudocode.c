BSRenderedTexture *__cdecl sub_7D6F40(int a1, int a2, FormatPrefs *arg8, char a3, NiDepthStencilBuffer *a4)
{
  NiRenderedTexture *NiRenderedTexture; // esi
  BSRenderedTexture *v6; // eax

  NiRenderedTexture = CreateNiRenderedTexture(a1, a2, unk_B43104, arg8); /*0x7d6f7d*/
  if ( NiRenderedTexture && (v6 = (BSRenderedTexture *)FormHeapAlloc(0x24u)) != 0 ) /*0x7d6f9e*/
    return BSRenderedTexture::BSRenderedTexture(v6, NiRenderedTexture, a3, a4); /*0x7d6fad*/
  else
    return 0; /*0x7d6fc3*/
}
