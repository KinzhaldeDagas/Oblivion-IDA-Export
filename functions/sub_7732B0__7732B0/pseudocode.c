int __thiscall sub_7732B0(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // edi

  v3 = 0;
  v4 = this + 3;
  do
  {
    if ( *((_BYTE *)this + v3 + 0x5C) )
    {
      ((void (__stdcall *)(int, _DWORD, _DWORD, _DWORD))g_RenderState->vtbl->SetTextureStageState)(
        a2,
        *(unsigned __int16 *)(2 * v3 + 0xB42824),
        v4[0xC],
        0);
    }
    else if ( *((_BYTE *)this + v3 + 0x2C) )
    {
      ((void (__stdcall *)(int, _DWORD, _DWORD, _DWORD))g_RenderState->vtbl->SetTextureStageState)(
        a2,
        *(unsigned __int16 *)(2 * v3 + 0xB42824),
        *v4,
        0);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 8 );
  return 0;
}
