bool __thiscall NiSourceCubeTexture::LoadTexture(NiSourceCubeMap *this)
{
  bool result; // al

  if ( !renderer ) /*0x7203d0*/
    return 1; /*0x7203d0*/
  result = renderer->__vftable->super.CreateSourceCubeMap((NiRenderer *)renderer, this); /*0x7203e4*/
  if ( result ) /*0x7203e8*/
    return 1; /*0x7203eb*/
  return result; /*0x7203ea*/
}
