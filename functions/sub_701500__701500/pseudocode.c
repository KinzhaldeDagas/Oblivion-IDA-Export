int __cdecl sub_701500(int a1)
{
  int result; // eax

  if ( g_Renderer )
    return ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.PurgeSkinPartition)(g_Renderer, a1);
  return result;
}
