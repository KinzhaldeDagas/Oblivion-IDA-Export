int __usercall EffectItemList_HasEffectCodes_::EffectLoop_Next@<eax>(
        int a1@<edi>,
        bool a2@<al>,
        int a3@<ebx>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // ecx

  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 && v9 != 4 )
    return EffectItemList_HasEffectCodes_::EffectLoop(v9 - 4, a2, a3, a4, a5, a6, a7, a8, a9);
  else
    return EffectItemList_HasEffectCodes_::Done_();
}
