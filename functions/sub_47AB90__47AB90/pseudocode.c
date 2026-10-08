void __thiscall sub_47AB90(ActorSkinInfo *this, TESForm *a2, unsigned int a3)
{
  int *v7; // ecx
  char *p_unk04C; // eax
  int *v9; // esi
  int v10; // ecx
  UInt32 BodyModel; // eax
  int v12; // [esp-Ch] [ebp-14h]

  if ( a2 ) /*0x47ab9a*/
  {
    v7 = unk_B33C80; /*0x47ab9c*/
    p_unk04C = (char *)&this->unk04C; /*0x47aba1*/
    do /*0x47abd3*/
    {
      *v7 = *(_DWORD *)p_unk04C; /*0x47aba6*/
      v7[1] = *((_DWORD *)p_unk04C + 1); /*0x47abab*/
      v7[2] = *((_DWORD *)p_unk04C + 2); /*0x47abb1*/
      v7[3] = *((_DWORD *)p_unk04C + 3); /*0x47abb7*/
      *(_DWORD *)p_unk04C = 0; /*0x47abbc*/
      *((_DWORD *)p_unk04C + 1) = 0; /*0x47abbe*/
      *((_DWORD *)p_unk04C + 2) = 0; /*0x47abc1*/
      *((_DWORD *)p_unk04C + 3) = 0; /*0x47abc4*/
      v7 += 4; /*0x47abc7*/
      p_unk04C += 0x10; /*0x47abca*/
    }
    while ( (int)v7 < (int)&MEMORY[0xB33D80] ); /*0x47abd3*/
    v9 = (int *)&unk_B06574; /*0x47abdb*/
    do /*0x47ac11*/
    {
      v10 = *(_DWORD *)(4 * *v9 + 0xB065C8); /*0x47abe2*/
      if ( v10 == 0xFFFFFFFF || (*(_BYTE *)(&this->HeadNodeFlags + 2 * v10) & 1) != 0 ) /*0x47abf3*/
      {
        v12 = *v9; /*0x47abf5*/
        BodyModel = TESRace_GetBodyModel__(a2, a3, *v9); /*0x47abfa*/
        TESBipedModelForm_GetBodyPartModel____(this, a2, BodyModel, v12); /*0x47ac03*/
      }
      ++v9; /*0x47ac08*/
    }
    while ( (int)v9 < (int)off_B06588 ); /*0x47ac11*/
  }
}
