void __thiscall NiRenderedCubeMap::~NiRenderedCubeMap(NiRenderedCubeMap *this)
{
  _LN21((char *)this + 0x44, 4u, 6, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x9a1c8d*/
  NiRenderedTexture::~NiRenderedTexture((NiRenderedTexture *)this); /*0x9a1c9c*/
}
