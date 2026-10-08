void __userpurge sub_4430F0(_DWORD *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  unsigned int v6; // edx
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int j; // ebp
  bool v12; // zf
  TESWorldSpace *v13; // ecx
  int v14; // esi
  int v15; // edi
  TESForm *ExteriorCellAtCoord; // eax
  int v17; // ecx
  TESForm *k; // eax
  unsigned int v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+14h] [ebp-Ch]
  unsigned int v21; // [esp+18h] [ebp-8h]
  unsigned int v22; // [esp+1Ch] [ebp-4h]

  v6 = uGridsToLoad; /*0x4430f3*/
  v8 = (unsigned int)uGridsToLoad >> 1; /*0x443105*/
  v9 = 0; /*0x443108*/
  v10 = *(this + 9) - v8; /*0x44310c*/
  v20 = 0; /*0x44310e*/
  v21 = *(this + 8) - v8; /*0x443112*/
  v22 = v10; /*0x443116*/
LABEL_2:
  v19 = v9; /*0x44311b*/
  if ( v9 < v6 ) /*0x443121*/
  {
    for ( j = 0; ; ++j ) /*0x443127*/
    {
      if ( j >= v6 ) /*0x443132*/
      {
        ++v9; /*0x4431c9*/
        goto LABEL_2; /*0x4431cc*/
      }
      if ( !a5 ) /*0x44313f*/
        break; /*0x44313f*/
      if ( a5 == 1 ) /*0x443144*/
      {
        v12 = GetGridEntry((GridCellArray *)*(this + 2), v9, j) == 0; /*0x443150*/
        goto LABEL_9; /*0x443152*/
      }
LABEL_10:
      v13 = (TESWorldSpace *)*(this + 0x1D); /*0x443162*/
      if ( v13 ) /*0x443167*/
      {
        v14 = j + v10; /*0x44316d*/
        v15 = v21 + v9; /*0x44316f*/
        ExteriorCellAtCoord = TESWorldSpace_LoadExteriorCellAtCoord(v13, st5_0, a3, a4, v15, v14); /*0x443173*/
        if ( (ExteriorCellAtCoord /*0x443197*/
           || (ExteriorCellAtCoord = sub_447740(
                                       (TESWorldSpace **)g_TESDataHandler,
                                       v15,
                                       v14,
                                       (TESWorldSpace *)*(this + 0x1D),
                                       1)) != 0)
          && BYTE2(ExteriorCellAtCoord[1].member.refID) != 3 )
        {
          v17 = 0; /*0x443199*/
          for ( k = ExteriorCellAtCoord + 3; k; k = *(TESForm **)&k->member.type ) /*0x44319e*/
          {
            if ( k->vtbl ) /*0x4431a0*/
              ++v17; /*0x4431a5*/
          }
          v20 += v17; /*0x4431af*/
        }
        v9 = v19; /*0x4431b3*/
      }
LABEL_20:
      v10 = v22; /*0x4431b7*/
      v6 = uGridsToLoad; /*0x4431bb*/
    }
    v12 = !sub_4821B0((_DWORD *)*(this + 2), v9, j); /*0x44315e*/
LABEL_9:
    if ( !v12 ) /*0x443160*/
      goto LABEL_20; /*0x443160*/
    goto LABEL_10; /*0x443160*/
  }
  if ( v20 ) /*0x4431d7*/
    sub_440AF0((int)this, st5_0, a3, a4, 1, 0, 0); /*0x4431e1*/
}
