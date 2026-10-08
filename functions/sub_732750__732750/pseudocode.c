NiObject *__thiscall sub_732750(NiObject *this, char a2, int a3, void *Src)
{
  void *v5; // eax
  unsigned int v7; // [esp-8h] [ebp-20h]

  NiObject_constr(this); /*0x732778*/
  *((_BYTE *)this + 8) = a2; /*0x732781*/
  *((_DWORD *)this + 3) = a3; /*0x73278a*/
  this->__vftable = (NiObjectVtbl *)&NiPalette::`vftable'; /*0x73279f*/
  *((_DWORD *)this + 4) = 1; /*0x7327a5*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v7 = 4 * *((_DWORD *)this + 3); /*0x7327c1*/
  *((_DWORD *)this + 5) = v5; /*0x7327c4*/
  memcpy(v5, Src, v7); /*0x7327c7*/
  *((_DWORD *)this + 6) = 0; /*0x7327cc*/
  if ( renderer ) /*0x7327d3*/
    renderer->__vftable->super.CreatePalette((NiRenderer *)renderer, this); /*0x7327e9*/
  sub_7322F0(this); /*0x7327ed*/
  return this; /*0x7327f4*/
}
