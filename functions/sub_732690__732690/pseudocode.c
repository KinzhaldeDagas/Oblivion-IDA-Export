NiObject *__thiscall sub_732690(NiObject *this, int a2)
{
  unsigned int v3; // eax
  void *v4; // eax
  size_t v6; // [esp-8h] [ebp-24h]

  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiPalette::`vftable';
  *((_BYTE *)this + 8) = *(_BYTE *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 0xC);
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 4) = 1;
  v4 = (void *)FormHeapAlloc((unsigned __int64)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3);
  *((_DWORD *)this + 5) = v4;
  LODWORD(v6) = 4 * *(_DWORD *)(a2 + 0xC);
  memcpy(v4, *(const void **)(a2 + 0x14), v6);
  *((_DWORD *)this + 6) = 0;
  if ( g_Renderer )
    g_Renderer->__vftable->super.CreatePalette((NiRenderer *)g_Renderer, this);
  sub_7322F0(this);
  return this;
}
