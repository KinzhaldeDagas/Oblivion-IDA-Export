void __usercall ScriptRunner_RunScript(int a1@<ecx>, int a2@<ebx>, double a3@<st0>, double a4@<st2>, double a5@<st1>)
{
  bool v6; // zf
  OblivionTESFormListNode *p_questList; // esi
  TESForm *item; // ecx
  TESObjectCELL *v9; // ecx
  TESObjectREFR **v10; // esi
  TESObjectREFR **v11; // edi
  TESObjectREFR *v12; // edi
  unsigned int v13; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx

  if ( !unk_B33A58 && sub_4F9FA0() ) /*0x440300*/
  {
    v6 = &g_TESDataHandler->questList == 0; /*0x440314*/
    p_questList = &g_TESDataHandler->questList; /*0x440314*/
    unk_B33A58 = 1; /*0x44031b*/
    if ( !v6 ) /*0x440322*/
    {
      do /*0x44033a*/
      {
        item = p_questList->item; /*0x440324*/
        v6 = p_questList->item == 0; /*0x440326*/
        p_questList = p_questList->next; /*0x440328*/
        if ( !v6 && (item[2].member.refID & 1) != 0 ) /*0x440331*/
          sub_529AA0(item, a5, a3); /*0x440333*/
      }
      while ( p_questList ); /*0x44033a*/
    }
    v9 = *(TESObjectCELL **)(a1 + 0x34); /*0x44033c*/
    if ( v9 ) /*0x440341*/
    {
      sub_4CB8C0(v9, a4, a5, a3, 0, 0); /*0x440347*/
    }
    else
    {
      v13 = uGridsToLoad; /*0x4403b5*/
      for ( i = 0; i < v13; ++i ) /*0x4403ba*/
      {
        for ( j = 0; j < v13; ++j ) /*0x4403c4*/
        {
          cell = GetGridEntry(*(GridCellArray **)(a1 + 8), i, j)->cell; /*0x4403d4*/
          if ( cell && cell->members.cellProcessLevel == 6 && sub_4CB8C0(cell, a4, a5, a3, 0, 0) ) /*0x4403e4*/
            goto LABEL_10; /*0x4403eb*/
          v13 = uGridsToLoad; /*0x4403f1*/
        }
      }
    }
LABEL_10:
    v10 = *(TESObjectREFR ***)(a1 + 0x88); /*0x44034c*/
    if ( v10 ) /*0x440354*/
    {
      *(_DWORD *)(a1 + 0x88) = 0; /*0x440356*/
      v11 = v10; /*0x440360*/
      do /*0x440372*/
      {
        if ( *v11 ) /*0x440362*/
          RunScripts(*v11, a4, a5, a3); /*0x440368*/
        v11 = (TESObjectREFR **)v11[1]; /*0x44036d*/
      }
      while ( v11 ); /*0x440372*/
      if ( v10[1] ) /*0x440374*/
      {
        do /*0x440394*/
        {
          v12 = *(TESObjectREFR **)&v10[1]->member.super.type; /*0x440383*/
          FormHeapFree((unsigned int)v10[1]); /*0x440387*/
          v10[1] = v12; /*0x440391*/
        }
        while ( v12 ); /*0x440394*/
      }
      *v10 = 0; /*0x440397*/
      FormHeapFree((unsigned int)v10); /*0x44039d*/
    }
    sub_4FA580(a2, a1, a3, a4, a5); /*0x4403a5*/
    unk_B33A58 = 0; /*0x4403ab*/
  }
}
