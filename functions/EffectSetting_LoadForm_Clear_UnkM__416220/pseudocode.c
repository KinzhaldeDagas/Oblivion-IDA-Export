int __userpurge EffectSetting_LoadForm_::Clear_UnkM@<eax>(int a1@<ebp>, _DWORD *a2@<esi>, int a3@<ebx>, int a4)
{
  *a2 &= ~0x200000u; /*0x416220*/
  return EffectSetting_LoadForm_::ChunkLoopContinue(*(Data **)(a1 + 8), a3, a1, a4);
}
