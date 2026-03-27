int __usercall EffectSetting_LoadForm_::LoadEffectSetting@<eax>(int a1@<ebx>, int a2@<ebp>, int a3)
{
  int v3; // edi
  Data *v4; // ecx

  v3 = *(_DWORD *)(a1 + 0x58);
  *(_DWORD *)(a2 - 0xC) = *(_DWORD *)(a1 + 0x60);
  *(_BYTE *)(a2 - 5) = *(_BYTE *)(a1 + 0x5B) & 1;
  _memset(a1 + 0x58, 0, 0x40);
  v4 = *(Data **)(a2 + 8);
  *(float *)(a1 + 0x74) = 1.0;
  TESFile_GetChunkData(v4, (char *)(a1 + 0x58), 0x40u);
  return EffectSetting_LoadForm_::VariableFlagOverrides((_DWORD *)(a1 + 0x58), a1, a2, v3, a3);
}
