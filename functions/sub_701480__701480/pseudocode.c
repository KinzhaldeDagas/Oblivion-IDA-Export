int __cdecl sub_701480(int a1)
{
  int result; // eax

  if ( g_Renderer )
    return ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.PurgeEffect)(g_Renderer, a1);
  return result;
}
