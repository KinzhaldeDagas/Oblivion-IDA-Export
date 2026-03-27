int __cdecl sub_7014A0(int a1)
{
  int result; // eax

  if ( g_Renderer )
    return ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.PurgeGeometryData)(g_Renderer, a1);
  return result;
}
