NiObject *__thiscall sub_732690(NiObject *this, int a2)
{
  unsigned int v3; // eax
  void *v4; // eax

  NiObject_constr(this); /*0x7326b9*/
  this->__vftable = (NiObjectVtbl *)&NiPalette::`vftable'; /*0x7326c2*/
  *((_BYTE *)this + 8) = *(_BYTE *)(a2 + 8); /*0x7326cb*/
  v3 = *(_DWORD *)(a2 + 0xC); /*0x7326d1*/
  *((_DWORD *)this + 3) = v3; /*0x7326d3*/
  *((_DWORD *)this + 4) = 1; /*0x7326ea*/
  v4 = (void *)FormHeapAlloc((unsigned __int64)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3);
  *((_DWORD *)this + 5) = v4; /*0x7326fb*/
  memcpy(v4, *(const void **)(a2 + 0x14), 4 * *(_DWORD *)(a2 + 0xC)); /*0x73270b*/
  *((_DWORD *)this + 6) = 0; /*0x732710*/
  if ( renderer ) /*0x732717*/
    renderer->__vftable->super.CreatePalette((NiRenderer *)renderer, this); /*0x73272d*/
  sub_7322F0(this); /*0x732731*/
  return this; /*0x732738*/
}
