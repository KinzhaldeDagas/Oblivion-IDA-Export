int __userpurge MagicItem_GetFXEffect_::EffectLoop@<eax>(
        int a1@<edi>,
        int ebx0@<ebx>,
        int ebp0@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // esi
  double v8; // st7
  int v9; // eax
  int v10; // ecx

  v7 = *(_DWORD *)(a1 + 4);
  v8 = EffectItem_MagickaCostForCaster(v7, ebx0, 0);
  v9 = Double_To_SInt32(v8);
  v10 = *(_DWORD *)(v7 + 0x10);
  if ( (*(_DWORD *)(*(_DWORD *)(v7 + 0x1C) + 0x58) & 0x400000) != 0 || v10 <= ebp0 && (v10 != ebp0 || v9 <= ebx0) )
    return MagicItem_GetFXEffect_::EffectLoop_Next(a1, a4);
  else
    return MagicItem_GetFXEffect_::EffectLoop_Accept(a1, a4, a5, a6, a7);
}
