int __userpurge EffectItem_SetEffectSetting_::InitEffectItemData@<eax>(int a1@<ebp>, int a2@<esi>, int a3)
{
  int v3; // eax

  *(_DWORD *)(a2 + 0x1C) = a1;
  v3 = *(_DWORD *)(a1 + 0x98);
  *(float *)(a2 + 0x20) = -1.0;
  *(_DWORD *)a2 = v3;
  return EffectItem_SetEffectSetting_::Done(a3);
}
