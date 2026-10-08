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

  if ( a2 ) /*0x414c29*/
    return EffectItemList_HasEffectCodes_::Done_(); /*0x414c29*/
  v9 = *(_DWORD **)(a1 + 4); /*0x414c2b*/
  if ( v9 ) /*0x414c30*/
  {
    v10 = 0; /*0x414c32*/
    if ( a3 > 0 ) /*0x414c36*/
    {
      v11 = &a9; /*0x414c38*/
      do /*0x414c54*/
      {
        if ( a2 ) /*0x414c42*/
          break; /*0x414c42*/
        v11 += 4; /*0x414c46*/
        a2 = *v9 == *(_DWORD *)v11; /*0x414c4d*/
        ++v10; /*0x414c4f*/
      }
      while ( v10 < a3 ); /*0x414c54*/
    }
  }
  return EffectItemList_HasEffectCodes_::EffectLoop_Next(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
