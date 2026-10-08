void __usercall SkillsMenu_PopulateAttributeRows(_DWORD *a1@<esi>, double a2@<st0>)
{
  BSStringT *v2; // ebx
  int v3; // ebp
  int AVFromGroupOffset; // edi
  char *Name; // eax
  BSStringT *SkillRow; // eax
  void (__thiscall **v7)(_DWORD *, int, BSStringT *); // edi
  int v8; // eax

  v2 = 0; /*0x5d6693*/
  v3 = 0; /*0x5d6695*/
  while ( 1 ) /*0x5d669f*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v3); /*0x5d669f*/
    Name = (char *)ActorValue_GetName(AVFromGroupOffset); /*0x5d66a6*/
    SkillRow = SkillsMenu_CreateSkillRow((int)a1, a2, Name, AVFromGroupOffset); /*0x5d66b1*/
    if ( !v2 || AVFromGroupOffset == a1[0x10] ) /*0x5d66bd*/
      v2 = SkillRow; /*0x5d66bf*/
    if ( ++v3 >= 8 ) /*0x5d66c7*/
    {
      if ( !a1[0x13] ) /*0x5d66c9*/
      {
        if ( v2 ) /*0x5d66d5*/
        {
          v7 = (void (__thiscall **)(_DWORD *, int, BSStringT *))(*a1 + 0xC); /*0x5d66e5*/
          Tile_GetFloat(v2, 0xFA8); /*0x5d66e8*/
          v8 = Double_To_SInt32(a2); /*0x5d66ed*/
          (*v7)(a1, v8, v2); /*0x5d66f7*/
          JUMPOUT(0x5D661D); /*0x5d661d*/
        }
        JUMPOUT(0x5D6622); /*0x5d6622*/
      }
      JUMPOUT(0x5D65E1); /*0x5d65e1*/
    }
  }
}
