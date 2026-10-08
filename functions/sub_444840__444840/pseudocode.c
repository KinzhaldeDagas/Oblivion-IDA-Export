void __userpurge sub_444840(
        TES *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        unsigned int a10)
{
  TES *v11; // ebx
  double v12; // st2
  char *TickCount; // ebp
  OblivionTESFormListNode *p_worldspaceList; // eax
  TESWorldSpace *item; // esi
  int v16; // ebp
  int v17; // eax
  int v18; // edi
  int v19; // ebx
  const char *m_data; // eax
  int v21; // ebx
  int v22; // eax
  int i; // edi
  TESObjectCELL *CellAtCellCoord; // eax
  TESForm *TemplateForm; // edi
  unsigned int v26; // esi
  TESObjectCELL *v27; // eax
  OblivionTESFormListNode *next; // [esp+10h] [ebp-18h]
  signed int cellY; // [esp+14h] [ebp-14h]
  int v31; // [esp+1Ch] [ebp-Ch]
  int v32; // [esp+24h] [ebp-4h]

  v11 = a1; /*0x444846*/
  a1->unk51 = 1; /*0x44484f*/
  SetGodMode(1); /*0x444853*/
  sub_40FEC0("Running Cell Test"); /*0x44485d*/
  v12 = CloseAllMenus(a8, a2, a7, a9); /*0x444865*/
  TickCount = (char *)GetTickCount(); /*0x444870*/
  p_worldspaceList = &g_TESDataHandler->worldspaceList; /*0x444877*/
  v31 = (int)TickCount; /*0x44487a*/
  next = p_worldspaceList; /*0x44487e*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFF4 ) /*0x444882*/
  {
    while ( p_worldspaceList->next || p_worldspaceList->item ) /*0x444894*/
    {
      item = (TESWorldSpace *)p_worldspaceList->item; /*0x4448a3*/
      if ( p_worldspaceList->item ) /*0x4448a3*/
      {
        sub_4431F0(v11, a7, a8, a9, (TESWorldSpace *)p_worldspaceList->item); /*0x4448b0*/
        v16 = Double_To_SInt32(item->cellBounds[0]) >> 0xC; /*0x4448c8*/
        cellY = Double_To_SInt32(item->cellBounds[1]) >> 0xC; /*0x4448d9*/
        v17 = Double_To_SInt32(item->cellBounds[2]); /*0x4448dd*/
        a9 = item->cellBounds[3]; /*0x4448e2*/
        v18 = v17 >> 0xC; /*0x4448ea*/
        v32 = v17 >> 0xC; /*0x4448ed*/
        v19 = Double_To_SInt32(a9); /*0x4448f6*/
        m_data = item->fullName.name.m_data; /*0x4448f8*/
        v21 = v19 >> 0xC; /*0x4448fb*/
        if ( !m_data && (m_data = EmptyString) == 0 || !strlen(m_data) ) /*0x444910*/
          m_data = item->vtbl->GetEditorName((TESForm *)item); /*0x44492d*/
        sub_40FEC0( /*0x444941*/
          "Starting world %08X %s with bounds (%i,%i) to (%i,%i)",
          item->super.refID,
          m_data,
          v16,
          cellY,
          v18,
          v21);
        if ( v16 < v18 ) /*0x44494b*/
        {
          v22 = uGridsToLoad; /*0x44494d*/
          do /*0x44499f*/
          {
            for ( i = cellY; i < v21; i += uGridsToLoad ) /*0x444958*/
            {
              CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(item, v16, i); /*0x444964*/
              if ( CellAtCellCoord /*0x444978*/
                || (CellAtCellCoord = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord(item, a7, a8, a9, v16, i)) != 0 )
              {
                sub_4433A0((char *)v16, a3, a4, v12, a5, a6, a7, a8, a9, CellAtCellCoord, a10, v31); /*0x444989*/
              }
              v22 = uGridsToLoad; /*0x44498e*/
            }
            v16 += v22; /*0x444999*/
          }
          while ( v16 < v32 ); /*0x44499f*/
        }
        p_worldspaceList = next; /*0x4449a1*/
        v11 = a1; /*0x4449a5*/
      }
      next = p_worldspaceList->next; /*0x4449ae*/
      if ( !next ) /*0x4449b2*/
        break; /*0x4449b2*/
      p_worldspaceList = p_worldspaceList->next; /*0x444890*/
    }
    TickCount = (char *)v31; /*0x4449b8*/
  }
  sub_447580(g_TESDataHandler); /*0x4449c2*/
  TemplateForm = Actor::GetTemplateForm((Actor *)g_TESDataHandler); /*0x4449d2*/
  v26 = 0; /*0x4449d4*/
  if ( TemplateForm ) /*0x4449d8*/
  {
    do /*0x4449ff*/
    {
      v27 = (TESObjectCELL *)sub_447560(g_TESDataHandler, v26); /*0x4449e7*/
      sub_4433A0(TickCount, a3, a4, v12, a5, a6, a7, a8, a9, v27, a10, (int)TickCount); /*0x4449f5*/
      ++v26; /*0x4449fa*/
    }
    while ( v26 < (unsigned int)TemplateForm ); /*0x4449ff*/
  }
  v11->unk52 = 0; /*0x444a04*/
}
