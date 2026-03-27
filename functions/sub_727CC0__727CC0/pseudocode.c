int __thiscall sub_727CC0(int this, int a2)
{
  int v2; // eax

  v2 = a2;
  if ( !a2 )
  {
    if ( *(_BYTE *)(this + 0xC) )
      v2 = *(_DWORD *)(this + 8);
  }
  return ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.Unk_3F)(g_Renderer, v2);
}
