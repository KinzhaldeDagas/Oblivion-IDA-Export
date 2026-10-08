void __userpurge EffectItem_SetEffectSetting_::InitEffectItemData(int a1@<ebp>, int a2@<esi>, int a3)
{
  int v3; // eax

  *(_DWORD *)(a2 + 0x1C) = a1; /*0x4137e6*/
  v3 = *(_DWORD *)(a1 + 0x98); /*0x4137e9*/
  *(float *)(a2 + 0x20) = -1.0; /*0x4137ef*/
  *(_DWORD *)a2 = v3; /*0x4137f2*/
  EffectItem_SetEffectSetting_::Done(a3); /*0x4137f3*/
}
