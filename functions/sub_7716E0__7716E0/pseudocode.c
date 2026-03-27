void __thiscall sub_7716E0(_DWORD *this, char a2)
{
  int v3; // esi
  int v4; // edi

  if ( a2 )
  {
    if ( (dword_B42754->__vftable->super.GetFlags((NiRenderer *)dword_B42754) & 8) == 0
      && (dword_B42754->__vftable->super.GetFlags((NiRenderer *)dword_B42754) & 4) != 0 )
    {
      ((void (__thiscall *)(NiDX9RenderState *, _DWORD, int, int, _DWORD))dword_B42758->vtbl->SetSamplerState)(
        dword_B42758,
        *this,
        1,
        3,
        0);
      ((void (__thiscall *)(NiDX9RenderState *, _DWORD, int, int, _DWORD))dword_B42758->vtbl->SetSamplerState)(
        dword_B42758,
        *this,
        2,
        3,
        0);
      v3 = 0xC6;
      v4 = 8;
      do
      {
        ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))dword_B42758->vtbl->SetRenderState)(
          dword_B42758,
          v3 - 0x46,
          0,
          0);
        ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))dword_B42758->vtbl->SetRenderState)(
          dword_B42758,
          v3++,
          0,
          0);
        --v4;
      }
      while ( v4 );
    }
  }
}
