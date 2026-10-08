int __cdecl sub_701520(int a1)
{
  int result; // eax

  if ( renderer ) /*0x701520*/
    return ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.PurgeSkinInstance)(renderer, a1); /*0x701537*/
  return result; /*0x701539*/
}
