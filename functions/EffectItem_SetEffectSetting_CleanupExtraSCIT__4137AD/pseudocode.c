int __userpurge EffectItem_SetEffectSetting_::CleanupExtraSCIT@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  unsigned int v4; // edi

  v4 = *(_DWORD *)(a3 + 0x18);
  if ( v4 != a1 && *(_DWORD *)(a2 + 0x98) != 0x46464553 )
  {
    FormHeapFree(*(_DWORD *)(v4 + 8));
    *(_DWORD *)(v4 + 8) = a1;
    *(_WORD *)(v4 + 0xE) = a1;
    *(_WORD *)(v4 + 0xC) = a1;
    FormHeapFree(v4);
    *(_DWORD *)(a3 + 0x18) = a1;
  }
  return EffectItem_SetEffectSetting_::InitEffectItemData(a2, a3, a4);
}
