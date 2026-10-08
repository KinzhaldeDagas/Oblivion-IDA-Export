NiRenderedTexture *__thiscall BSRenderedTexture::GetInnerTexture(BSRenderedTexture *this)
{
  NiRenderedTexture **p_RenderedTexture; // eax
  int v3; // [esp+8h] [ebp-4h] BYREF

  v3 = 0; /*0x405a37*/
  if ( this ) /*0x405a3b*/
  {
    p_RenderedTexture = &this->members.RenderedTexture; /*0x405a41*/
  }
  else
  {
    v3 = 0; /*0x405a48*/
    p_RenderedTexture = (NiRenderedTexture **)&v3; /*0x405a4c*/
  }
  return *p_RenderedTexture; /*0x405a7a*/
}
