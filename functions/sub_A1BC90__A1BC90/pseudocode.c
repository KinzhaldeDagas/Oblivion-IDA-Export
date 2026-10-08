// Verified module cleanup wrapper decrements/releases g_PathGridDebugRenderRoot if present.
void __cdecl TESPathGrid_ReleaseDebugRenderRoot()
{
  Ni2DBuffer *v0; // esi

  v0 = g_PathGridDebugRenderRoot; /*0xa1bc91*/
  if ( g_PathGridDebugRenderRoot ) /*0xa1bc99*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&g_PathGridDebugRenderRoot->members) ) /*0xa1bc9f*/
    {
      if ( v0 ) /*0xa1bcab*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa1bcb5*/
    }
  }
}
