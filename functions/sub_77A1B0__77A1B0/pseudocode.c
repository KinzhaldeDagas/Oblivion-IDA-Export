// Oblivion NiD3DShader vtable +0x30 wrapper. Applies CurrentPass render state and texture stages through NiD3DPass_ApplyRenderStateAndTextureStages.
int __thiscall sub_77A1B0(NiD3DShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return ((int (__thiscall *)(NiD3DPass *, int, int, int, int, int, int, int, _DWORD))this->member.CurrentPass->__vftable->sub_75FD90)( /*0x77a1df*/
           this->member.CurrentPass,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}
