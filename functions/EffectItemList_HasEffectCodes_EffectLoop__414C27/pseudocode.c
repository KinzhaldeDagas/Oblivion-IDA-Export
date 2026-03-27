int __usercall EffectItemList_HasEffectCodes_::EffectLoop@<eax>(
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
  _DWORD *v9; // esi
  int v10; // ecx
  char *v11; // edx

  if ( a2 )
    return EffectItemList_HasEffectCodes_::Done_();
  v9 = *(_DWORD **)(a1 + 4);
  if ( v9 )
  {
    v10 = 0;
    if ( a3 > 0 )
    {
      v11 = &a9;
      do
      {
        if ( a2 )
          break;
        v11 += 4;
        a2 = *v9 == *(_DWORD *)v11;
        ++v10;
      }
      while ( v10 < a3 );
    }
  }
  return EffectItemList_HasEffectCodes_::EffectLoop_Next(a1);
}
