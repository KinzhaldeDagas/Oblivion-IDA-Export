int __thiscall sub_4E5550(_DWORD *this)
{
  int result; // eax

  result = *(this + 7); /*0x4e5550*/
  if ( result ) /*0x4e5555*/
  {
    if ( g_PathGridDebugRenderRoot ) /*0x4e5557*/
    {
      ((void (__thiscall *)(NiNode *, int, int))g_PathGridDebugRenderRoot->vtbl->AddObject)( /*0x4e556c*/
        g_PathGridDebugRenderRoot,
        result,
        1);
      NiAVObject_InitializePropertyState((NiAVObject *)g_PathGridDebugRenderRoot); /*0x4e5574*/
      NiNode_UpdateDynamicEffectState(g_PathGridDebugRenderRoot); /*0x4e557f*/
      return NiAVObject_UpdateNiAVObject((NiAVObject *)g_PathGridDebugRenderRoot, 0.0, 0); /*0x4e5592*/
    }
  }
  return result; /*0x4e5597*/
}
