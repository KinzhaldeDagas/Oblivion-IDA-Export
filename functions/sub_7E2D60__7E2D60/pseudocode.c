// Verified (Oblivion): returns the cached slot capacity, initialized to 40 or 120 according to renderer capability, and used to size particleInstanceBuffer_6C and update iteration.
unsigned int __cdecl ParticleShaderProperty_GetSlotCapacity()
{
  unsigned int result; // eax

  result = unk_B4600C; /*0x7e2d60*/
  if ( !unk_B4600C )
  {
    result = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ? 0x28 : 0x78;
    unk_B4600C = result; /*0x7e2d7c*/
  }
  return result; /*0x7e2d81*/
}
