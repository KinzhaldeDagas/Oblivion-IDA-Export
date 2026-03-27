NiRenderedTexture *__thiscall BSRenderedTexture::GetInnerTexture(BSRenderedTexture *this)
{
  NiRenderedTexture **p_RenderedTexture; // eax
  int v3; // [esp+8h] [ebp-4h] BYREF

  v3 = 0;
  if ( this )
  {
    p_RenderedTexture = &this->members.RenderedTexture;
  }
  else
  {
    v3 = 0;
    p_RenderedTexture = (NiRenderedTexture **)&v3;
  }
  return *p_RenderedTexture;
}
