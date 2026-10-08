// Unbinds nonzero MRT slots only when the renderer cache says a surface is active, then clears the corresponding cache entry. Slot 0 is deliberately retained.
int __cdecl UnsetRenderTarget(IDirect3DDevice9 *a1, int a2)
{
  int result; // eax

  if ( a2 ) /*0x76d437*/
  {
    if ( *(_DWORD *)(4 * a2 + 0xB42600) ) /*0x76d439*/
    {
      result = (int)a1->lpVtbl->SetRenderTarget(a1, a2, 0); /*0x76d453*/
      *(_DWORD *)(4 * a2 + 0xB42600) = 0; /*0x76d455*/
    }
  }
  return result; /*0x76d460*/
}
