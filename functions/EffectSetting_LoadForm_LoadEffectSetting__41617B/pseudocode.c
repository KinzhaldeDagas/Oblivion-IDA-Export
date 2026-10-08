// Verified (Oblivion): EffectSetting load reads a 0x40-byte data block into EffectSetting+0x58, which includes the effectShader FormID at +0x78. EffectSetting_LinkForm later resolves that slot to a TESEffectShader*.
int __usercall EffectSetting_LoadForm_::LoadEffectSetting@<eax>(int a1@<ebx>, int a2@<ebp>, int a3)
{
  int v3; // edi
  Data *v4; // ecx

  v3 = *(_DWORD *)(a1 + 0x58); /*0x41617e*/
  *(_DWORD *)(a2 - 0xC) = *(_DWORD *)(a1 + 0x60); /*0x416184*/
  *(_BYTE *)(a2 - 5) = *(_BYTE *)(a1 + 0x5B) & 1; /*0x416191*/
  _memset(a1 + 0x58, 0, 0x40u); /*0x416194*/
  v4 = *(Data **)(a2 + 8); /*0x41619b*/
  *(float *)(a1 + 0x74) = 1.0; /*0x41619e*/
  TESFile_GetChunkData(v4, (char *)(a1 + 0x58), 0x40u); /*0x4161a7*/
  return EffectSetting_LoadForm_::VariableFlagOverrides((_DWORD *)(a1 + 0x58), a1, a2, v3, a3);
}
