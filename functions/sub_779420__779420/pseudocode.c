NiDX9TextureData *__thiscall sub_779420(NiDX9TextureData *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // edx

  v3 = *((_DWORD *)this + 0x18); /*0x779423*/
  this->_vtbl = &NiDX9RenderedCubeMapData::`vftable'; /*0x779426*/
  unk_B42860 -= v3; /*0x77942c*/
  v4 = *((_DWORD *)this + 0x18); /*0x779432*/
  v5 = 0; /*0x77943c*/
  if ( (v4 & 0xFFFFF000) != v4 ) /*0x779440*/
    v5 = (v4 & 0xFFFFF000) - v4 + 0x1000; /*0x779449*/
  unk_B42864 -= v5; /*0x77944b*/
  this->pRenderer->__vftable->DeleteRenderedCubeMap(this->pRenderer, (NiRenderedCubeMap *)this->parent); /*0x779460*/
  sub_7616E0(this); /*0x779464*/
  if ( (a2 & 1) != 0 ) /*0x77946e*/
    FormHeapFree((unsigned int)this); /*0x779471*/
  return this; /*0x77947b*/
}
