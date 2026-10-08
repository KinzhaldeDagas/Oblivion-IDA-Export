int __cdecl sub_701500(int a1)
{
  int result; // eax

  if ( renderer ) /*0x701500*/
    return ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.PurgeSkinPartition)(renderer, a1); /*0x701517*/
  return result; /*0x701519*/
}
