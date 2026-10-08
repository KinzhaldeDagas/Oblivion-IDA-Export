int __userpurge EffectItem_SetEffectSetting_::CleanupExtraSCIT@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  unsigned int v4; // edi

  v4 = *(_DWORD *)(a3 + 0x18); /*0x4137ad*/
  if ( v4 != a1 && *(_DWORD *)(a2 + 0x98) != 0x46464553 ) /*0x4137be*/
  {
    FormHeapFree(*(_DWORD *)(v4 + 8)); /*0x4137c4*/
    *(_DWORD *)(v4 + 8) = a1; /*0x4137ca*/
    *(_WORD *)(v4 + 0xE) = a1; /*0x4137cd*/
    *(_WORD *)(v4 + 0xC) = a1; /*0x4137d1*/
    FormHeapFree(v4); /*0x4137d5*/
    *(_DWORD *)(a3 + 0x18) = a1; /*0x4137dd*/
  }
  return EffectItem_SetEffectSetting_::InitEffectItemData(a2, a3, a4);
}
