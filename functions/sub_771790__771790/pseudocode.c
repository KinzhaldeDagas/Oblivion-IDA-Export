int __cdecl sub_771790(unsigned int a1)
{
  unsigned int i; // esi
  int result; // eax

  for ( i = a1; i < dword_B28CB0; ++i )
  {
    ((void (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD))dword_B42758->vtbl->SetTexture)(dword_B42758, i, 0);
    ((void (__thiscall *)(NiDX9RenderState *, unsigned int, int, int, _DWORD))dword_B42758->vtbl->SetTextureStageState)(
      dword_B42758,
      i,
      1,
      1,
      0);
    ((void (__thiscall *)(NiDX9RenderState *, unsigned int, int, int, _DWORD))dword_B42758->vtbl->SetTextureStageState)(
      dword_B42758,
      i,
      4,
      1,
      0);
    result = ((int (__thiscall *)(NiDX9RenderState *, unsigned int, int, _DWORD, _DWORD))dword_B42758->vtbl->SetTextureStageState)(
               dword_B42758,
               i,
               0x18,
               0,
               0);
  }
  for ( ; i < dword_B28CB8; ++i )
    result = ((int (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD))dword_B42758->vtbl->SetTexture)(
               dword_B42758,
               i,
               0);
  return result;
}
