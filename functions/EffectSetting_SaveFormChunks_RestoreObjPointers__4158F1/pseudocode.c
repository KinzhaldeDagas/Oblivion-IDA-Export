// positive sp value has been detected, the output may be wrong!
int __usercall EffectSetting_SaveFormChunks_::RestoreObjPointers@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8)
{
  __int16 v8; // ax
  void *v9; // ecx

  *(_DWORD *)(a4 + 0x88) = a7;
  v8 = *(_WORD *)(a4 + 0x6C);
  *(_DWORD *)(a4 + 0x70) = a3;
  *(_DWORD *)(a4 + 0x80) = a5;
  *(_DWORD *)(a4 + 0x78) = a2;
  *(_DWORD *)(a4 + 0x7C) = a1;
  *(_DWORD *)(a4 + 0x84) = a6;
  *(_DWORD *)(a4 + 0x8C) = a8;
  if ( v8 && (v9 = *(void **)(a4 + 0x9C)) != 0 )
    return EffectSetting_SaveFormChunks_::SaveCounterEffects(v9, v8);
  else
    return EffectSetting_SaveFormChunks_::Done();
}
