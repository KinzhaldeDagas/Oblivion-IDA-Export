// Verified shared debug property getter/creator, used by PathGrid debug rendering and the registered TestSeenData/TestLocalMap visualization commands, plus other debug-geometry callers. Lazily constructs NiVertexColorProperty, sets its observed render flags, stores the refcounted global g_DebugRenderVertexColorProperty and returns it.
NiVertexColorProperty *__cdecl DebugRender_GetOrCreateVertexColorProperty()
{
  NiVertexColorProperty *result; // eax
  NiObjectNET *v1; // eax
  NiObjectNET *v2; // esi
  NiVertexColorProperty *v3; // eax
  NiVertexColorProperty *v4; // edi

  result = g_DebugRenderVertexColorProperty; /*0x4e70d3*/
  if ( !g_DebugRenderVertexColorProperty ) /*0x4e70d3*/
  {
    v1 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x4e70e2*/
    v2 = v1; /*0x4e70e7*/
    if ( v1 ) /*0x4e70fa*/
    {
      NiObjectNET::NiObjectNET(v1); /*0x4e70fe*/
      v2->vtbl = (NiObjectVtbl **)&NiVertexColorProperty::`vftable'; /*0x4e7103*/
      LOWORD(v2[1].vtbl) = 8; /*0x4e7109*/
    }
    else
    {
      v2 = 0; /*0x4e7111*/
    }
    v3 = g_DebugRenderVertexColorProperty; /*0x4e7113*/
    if ( g_DebugRenderVertexColorProperty != (NiVertexColorProperty *)v2 ) /*0x4e7122*/
    {
      if ( v3 ) /*0x4e7126*/
      {
        v4 = g_DebugRenderVertexColorProperty; /*0x4e7128*/
        if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x4e712e*/
          (**(void (__thiscall ***)(NiVertexColorProperty *, int))v4)(v4, 1); /*0x4e7144*/
      }
      v3 = (NiVertexColorProperty *)v2; /*0x4e7148*/
      g_DebugRenderVertexColorProperty = (NiVertexColorProperty *)v2; /*0x4e714a*/
      if ( v2 ) /*0x4e714f*/
      {
        InterlockedIncrement((volatile LONG *)&v2->members); /*0x4e7155*/
        v3 = g_DebugRenderVertexColorProperty; /*0x4e715b*/
      }
    }
    *((_WORD *)v3 + 0xC) = *((_WORD *)v3 + 0xC) & 0xFFCF | 0x10; /*0x4e716d*/
    *((_WORD *)g_DebugRenderVertexColorProperty + 0xC) &= ~8u; /*0x4e7176*/
    return g_DebugRenderVertexColorProperty; /*0x4e717c*/
  }
  return result; /*0x4e7181*/
}
