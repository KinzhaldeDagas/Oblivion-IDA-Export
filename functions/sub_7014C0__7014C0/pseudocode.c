int __cdecl sub_7014C0(int a1)
{
  int result; // eax

  if ( renderer ) /*0x7014c0*/
    return ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.PurgeMaterial)(renderer, a1); /*0x7014d7*/
  return result; /*0x7014d9*/
}
