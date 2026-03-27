int __cdecl UnsetRenderTarget(IDirect3DDevice9 *a1, int a2)
{
  int result; // eax

  if ( a2 )
  {
    if ( *(_DWORD *)(4 * a2 + 0xB42600) )
    {
      result = (int)a1->lpVtbl->SetRenderTarget(a1, a2, 0);
      *(_DWORD *)(4 * a2 + 0xB42600) = 0;
    }
  }
  return result;
}
