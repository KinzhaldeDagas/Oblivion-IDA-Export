int __userpurge EffectSetting_CopyFrom_::CopyFields@<eax>(int a1@<edi>, int a2@<esi>, int a3)
{
  *(_DWORD *)(a2 + 0x98) = *(_DWORD *)(a1 + 0x98);
  *(_DWORD *)(a2 + 0x58) = *(_DWORD *)(a1 + 0x58);
  *(float *)(a2 + 0x5C) = *(float *)(a1 + 0x5C);
  *(_DWORD *)(a2 + 0x64) = *(_DWORD *)(a1 + 0x64);
  *(_DWORD *)(a2 + 0x68) = *(_DWORD *)(a1 + 0x68);
  *(float *)(a2 + 0x90) = *(float *)(a1 + 0x90);
  *(float *)(a2 + 0x94) = *(float *)(a1 + 0x94);
  *(float *)(a2 + 0x74) = *(float *)(a1 + 0x74);
  *(_DWORD *)(a2 + 0x60) = *(_DWORD *)(a1 + 0x60);
  *(_DWORD *)(a2 + 0x70) = *(_DWORD *)(a1 + 0x70);
  *(_DWORD *)(a2 + 0x78) = *(_DWORD *)(a1 + 0x78);
  *(_DWORD *)(a2 + 0x7C) = *(_DWORD *)(a1 + 0x7C);
  *(_DWORD *)(a2 + 0x80) = *(_DWORD *)(a1 + 0x80);
  *(_DWORD *)(a2 + 0x84) = *(_DWORD *)(a1 + 0x84);
  *(_DWORD *)(a2 + 0x88) = *(_DWORD *)(a1 + 0x88);
  *(_DWORD *)(a2 + 0x8C) = *(_DWORD *)(a1 + 0x8C);
  return EffectSetting_CopyFrom_::CopyCounterEffects(a1, a2, a3);
}
