int __userpurge EffectSetting_LoadForm_::Clear_UnkM@<eax>(int a1@<ebp>, _DWORD *a2@<esi>, int a3)
{
  *a2 &= ~0x200000u;
  return EffectSetting_LoadForm_::ChunkLoopContinue(*(int **)(a1 + 8), a3);
}
