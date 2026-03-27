int __userpurge EffectItemList_GetStrongestItem_::LoopBody@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // esi
  double v10; // st7
  int v11; // edi

  v9 = *(_DWORD *)(a2 + 4);
  v10 = EffectItem_MagickaCostForCaster(v9, a1, 0);
  v11 = Double_To_SInt32(v10);
  if ( (*(_DWORD *)(*(_DWORD *)(v9 + 0x1C) + 0x58) & 0x400000) != 0 || v11 <= a1 )
    return EffectItemList_GetStrongestItem_::LoopContinue(a2, a3, a4);
  else
    return EffectItemList_GetStrongestItem_::CheckArea(a2, v9, a3, a4, a5, a6, a7, a8, a9);
}
