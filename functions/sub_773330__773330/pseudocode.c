int __thiscall sub_773330(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // edi

  v3 = 0;
  v4 = this + 0x1B;
  do
  {
    if ( *((_BYTE *)this + v3 + 0xA4) )
    {
      ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD, _DWORD))g_RenderState->vtbl->SetSamplerState)(
        g_RenderState,
        a2,
        *(_DWORD *)(4 * v3 + 0xB427CC),
        v4[9],
        0);
    }
    else if ( *((_BYTE *)this + v3 + 0x80) )
    {
      ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD, _DWORD))g_RenderState->vtbl->SetSamplerState)(
        g_RenderState,
        a2,
        *(_DWORD *)(4 * v3 + 0xB427CC),
        *v4,
        0);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 5 );
  return 0;
}
