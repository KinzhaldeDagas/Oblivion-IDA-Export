int __cdecl sub_701480(int a1)
{
  int result; // eax

  if ( renderer ) /*0x701480*/
    return ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.PurgeEffect)(renderer, a1); /*0x701497*/
  return result; /*0x701499*/
}
