void __userpurge sub_444840(
        TES *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        unsigned int a11)
{
  TES *v11; // ebx
  double v12; // st7
  signed int TickCount; // ebp
  int v14; // eax
  TESWorldSpace *v15; // esi
  int v16; // eax
  int v17; // edi
  int v18; // ebx
  const char *m_data; // eax
  int v20; // ebx
  int v21; // eax
  signed int i; // edi
  TESForm *CellAtCellCoord; // eax
  TESForm *TemplateForm; // edi
  unsigned int v25; // esi
  TESObjectCELL *v26; // eax
  int v27; // [esp+10h] [ebp-18h]
  signed int v28; // [esp+14h] [ebp-14h]
  int v30; // [esp+1Ch] [ebp-Ch]
  int v31; // [esp+24h] [ebp-4h]

  v11 = a1;
  a1->unk51 = 1;
  sub_65D810(1);
  sub_40FEC0("Running Cell Test");
  v12 = CloseAllMenus(a9, a2, a8, a10);
  TickCount = GetTickCount();
  v14 = TESDataHandler + 0xC;
  v30 = TickCount;
  v27 = v14;
  if ( TESDataHandler != 0xFFFFFFF4 )
  {
    while ( *(_DWORD *)(v14 + 4) || *(_DWORD *)v14 )
    {
      v15 = *(TESWorldSpace **)v14;
      if ( *(_DWORD *)v14 )
      {
        sub_4431F0(v11, a8, TickCount, a9, v12, *(TESWorldSpace **)v14);
        TickCount = Double_To_SInt32(v15->unk9C[0]) >> 0xC;
        v28 = Double_To_SInt32(v15->unk9C[1]) >> 0xC;
        v16 = Double_To_SInt32(v15->unk9C[2]);
        v12 = v15->unk9C[3];
        v17 = v16 >> 0xC;
        v31 = v16 >> 0xC;
        v18 = Double_To_SInt32(v12);
        m_data = v15->fullName.name.m_data;
        v20 = v18 >> 0xC;
        if ( !m_data && (m_data = EmptyString) == 0 || !strlen(m_data) )
          m_data = v15->vtbl->GetEditorName((TESForm *)v15);
        sub_40FEC0(
          "Starting world %08X %s with bounds (%i,%i) to (%i,%i)",
          v15->super.refID,
          m_data,
          TickCount,
          v28,
          v17,
          v20);
        if ( TickCount < v17 )
        {
          v21 = uGridsToLoad;
          do
          {
            for ( i = v28; i < v20; i += uGridsToLoad )
            {
              CellAtCellCoord = (TESForm *)TESWorldSpace::GetCellAtCellCoord(v15, TickCount, i);
              if ( CellAtCellCoord || (CellAtCellCoord = sub_4F1630(v15, a8, a9, v12, TickCount, i)) != 0 )
                sub_4433A0(TickCount, a3, a4, a5, a6, a7, a8, a9, v12, (TESObjectCELL *)CellAtCellCoord, a11, v30);
              v21 = uGridsToLoad;
            }
            TickCount += v21;
          }
          while ( TickCount < v31 );
        }
        v14 = v27;
        v11 = a1;
      }
      v27 = *(_DWORD *)(v14 + 4);
      if ( !v27 )
        break;
      v14 = *(_DWORD *)(v14 + 4);
    }
    TickCount = v30;
  }
  sub_447580((_DWORD *)TESDataHandler);
  TemplateForm = Actor::GetTemplateForm((Actor *)TESDataHandler);
  v25 = 0;
  if ( TemplateForm )
  {
    do
    {
      v26 = (TESObjectCELL *)sub_447560((_DWORD *)TESDataHandler, v25);
      sub_4433A0(TickCount, a3, a4, a5, a6, a7, a8, a9, v12, v26, a11, TickCount);
      ++v25;
    }
    while ( v25 < (unsigned int)TemplateForm );
  }
  v11->unk52 = 0;
}
