int __thiscall sub_727CC0(int this, int a2)
{
  int v2; // eax

  v2 = a2; /*0x727cc0*/
  if ( !a2 ) /*0x727cc6*/
  {
    if ( *(_BYTE *)(this + 0xC) ) /*0x727cc8*/
      v2 = *(_DWORD *)(this + 8); /*0x727ccd*/
  }
  return ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.Unk_3F)(renderer, v2);
}
