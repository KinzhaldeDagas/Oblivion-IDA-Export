NiObject *__thiscall sub_732750(NiObject *this, char a2, int a3, void *Src)
{
  void *v5; // eax
  size_t v7; // [esp-8h] [ebp-20h]

  NiObject_constr(this);
  *((_BYTE *)this + 8) = a2;
  *((_DWORD *)this + 3) = a3;
  this->__vftable = (NiObjectVtbl *)&NiPalette::`vftable';
  *((_DWORD *)this + 4) = 1;
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  LODWORD(v7) = 4 * *((_DWORD *)this + 3);
  *((_DWORD *)this + 5) = v5;
  memcpy(v5, Src, v7);
  *((_DWORD *)this + 6) = 0;
  if ( g_Renderer )
    g_Renderer->__vftable->super.CreatePalette((NiRenderer *)g_Renderer, this);
  sub_7322F0(this);
  return this;
}
