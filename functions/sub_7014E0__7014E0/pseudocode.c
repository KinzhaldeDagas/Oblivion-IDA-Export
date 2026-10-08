// Pass225: Dispatches live renderer vtable +0xC0 purge for NiScreenTexture before object teardown.
int __cdecl sub_7014E0(int a1)
{
  int result; // eax

  if ( renderer ) /*0x7014e0*/
    return ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.PurgeScreenTexture)(renderer, a1); /*0x7014f7*/
  return result; /*0x7014f9*/
}
