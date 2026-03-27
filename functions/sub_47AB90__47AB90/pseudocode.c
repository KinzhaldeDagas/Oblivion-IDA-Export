void __userpurge sub_47AB90(
        char *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        void *a5,
        unsigned int a6)
{
  int *v7; // ecx
  char *v8; // eax
  int *v9; // esi
  int v10; // ecx
  int BodyModel; // eax
  int v12; // [esp-Ch] [ebp-14h]

  if ( a5 )
  {
    v7 = dword_B33C80;
    v8 = a1 + 0x4C;
    do
    {
      *v7 = *(_DWORD *)v8;
      v7[1] = *((_DWORD *)v8 + 1);
      v7[2] = *((_DWORD *)v8 + 2);
      v7[3] = *((_DWORD *)v8 + 3);
      *(_DWORD *)v8 = 0;
      *((_DWORD *)v8 + 1) = 0;
      *((_DWORD *)v8 + 2) = 0;
      *((_DWORD *)v8 + 3) = 0;
      v7 += 4;
      v8 += 0x10;
    }
    while ( (int)v7 < (int)&g_bUpdatePlayerModel );
    v9 = (int *)&unk_B06574;
    do
    {
      v10 = *(_DWORD *)(4 * *v9 + 0xB065C8);
      if ( v10 == 0xFFFFFFFF || (a1[8 * v10 + 4] & 1) != 0 )
      {
        v12 = *v9;
        BodyModel = TESRace_GetBodyModel__(a5, a6, *v9);
        TESBipedModelForm_GetBodyPartModel____(a1, a2, a3, a4, a5, BodyModel, v12);
      }
      ++v9;
    }
    while ( (int)v9 < (int)off_B06588 );
  }
}
