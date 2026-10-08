// Handles SkillsMenu row toggles and accept/back navigation. Multi-select is capped by SkillsMenu+0x44. In class-skill mode it copies selected row AV trait 0xFB0 into the staged ClassMenu array at +0x68, stopping at the cap of seven.
void __userpurge SkillsMenu_HandleButton(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        Tile *a6)
{
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // ecx
  int v10; // ebp
  int v11; // eax
  Tile *v12; // ecx
  double Float; // st7
  double v14; // st7
  double v15; // st7
  Tile *v16; // ecx
  int v17; // edi
  _DWORD *v18; // ebx
  _DWORD *v19; // eax
  void *v21; // eax
  const char *v22; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v25; // eax
  BSStringT v26; // [esp+18h] [ebp-14h] BYREF
  unsigned int v27; // [esp+28h] [ebp-4h]
  Tile *i; // [esp+34h] [ebp+8h]

  v7 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x34))( /*0x5d5e80*/
         a1,
         a4,
         a3,
         a2);
  if ( sub_578FE0() == v7 ) /*0x5d5e89*/
  {
    v8 = a5; /*0x5d5e8f*/
    if ( a5 != 4 && a5 != 5 && a5 != 6 ) /*0x5d5ea0*/
    {
      if ( a5 != 7 ) /*0x5d5ea5*/
      {
        if ( a5 == 0x63 ) /*0x5d5efd*/
        {
          if ( a1[0x11] == 1 ) /*0x5d5f07*/
          {
            v12 = (Tile *)a1[0x12]; /*0x5d5f09*/
            if ( v12 ) /*0x5d5f0e*/
              Tile_SetFloat(v12, (_DWORD *)0xFB1, 1.0); /*0x5d5f1b*/
            if ( a1[0xF] == 3 ) /*0x5d5f24*/
              sub_57DE50(0xB); /*0x5d5f28*/
            Tile_SetFloat(a6, (_DWORD *)0xFB1, fConstant_2); /*0x5d5f45*/
            a1[0x12] = a6; /*0x5d5f51*/
            Float = Tile_GetFloat(a6, 0xFB0); /*0x5d5f54*/
            a1[0x10] = Double_To_SInt32(Float); /*0x5d5f62*/
            SkillsMenu_UpdateDetails(a1, (void *)0xFFFFFFFF); /*0x5d5f65*/
          }
          else
          {
            v14 = Tile_GetFloat(a6, 0xFB1); /*0x5d5f7a*/
            if ( v14 == fConstant_2 ) /*0x5d5f8a*/
            {
              Tile_SetFloat(a6, (_DWORD *)0xFB1, 1.0); /*0x5d5f99*/
              SkillsMenu_UpdateDetails(a1, (void *)0xFFFFFFFF); /*0x5d5fa2*/
            }
            else
            {
              if ( (signed int)SkillsMenu_CountSelectedRows(a1) >= a1[0x11] ) /*0x5d5fb6*/
              {
                ShowUIMessageBox( /*0x5d6006*/
                  (char *)stru_B38620,
                  a2,
                  a3,
                  v14,
                  (char *)stru_B38620,
                  0,
                  1,
                  (char *)MEMORY[0xB38CF0],
                  0);
              }
              else
              {
                Tile_SetFloat(a6, (_DWORD *)0xFB1, fConstant_2); /*0x5d5fc9*/
                v15 = Tile_GetFloat(a6, 0xFB0); /*0x5d5fd5*/
                a1[0x10] = Double_To_SInt32(v15); /*0x5d5fe3*/
                a1[0x12] = a6; /*0x5d5fe6*/
              }
              SkillsMenu_UpdateDetails(a1, (void *)0xFFFFFFFF); /*0x5d5fe9*/
            }
          }
        }
        return; /*0x5d5f6a*/
      }
      a4 = Tile_GetFloat((_DWORD *)a1[1], 0xFB7); /*0x5d5eaf*/
      if ( a4 != fConstant_2 ) /*0x5d5ebf*/
        return; /*0x5d5ebf*/
    }
    v9 = (_DWORD *)a1[0x13]; /*0x5d5ec5*/
    v10 = 0; /*0x5d5ec8*/
    if ( v9 ) /*0x5d5ecc*/
    {
      v11 = a1[0xF]; /*0x5d5ed2*/
      if ( v11 >= 0 ) /*0x5d5ed7*/
      {
        if ( v11 <= 1 ) /*0x5d5ee0*/
        {
          if ( v11 == 1 ) /*0x5d601c*/
            v16 = (Tile *)(v9 + 0x18); /*0x5d601e*/
          else
            v16 = (Tile *)(v9 + 0x1A); /*0x5d6023*/
          v17 = *(_DWORD *)(a1[0xA] + 0x38); /*0x5d6029*/
          for ( i = v16; v17; v8 = a5 )         // Write selected row actor values in list order into the staged ClassMenu array, stopping at selectionCap. Native class-skill mode sets selectionCap to seven. /*0x5d6032*/
          {
            if ( v10 >= a1[0x11] ) /*0x5d6037*/
              break; /*0x5d6037*/
            v18 = *(_DWORD **)(v17 + 8); /*0x5d6039*/
            v17 = *(_DWORD *)(v17 + 4); /*0x5d603f*/
            a4 = Tile_GetFloat(v18, 0xFB1); /*0x5d6049*/
            if ( a4 == fConstant_2 ) /*0x5d6059*/
            {
              a4 = Tile_GetFloat(v18, 0xFB0); /*0x5d6062*/
              *((_DWORD *)i + v10++) = Double_To_SInt32(a4); /*0x5d6070*/
            }
          }
        }
        else if ( v11 == 2 ) /*0x5d5ee9*/
        {
          v9[0x17] = a1[0x10]; /*0x5d5ef2*/
        }
      }
      if ( v8 == 4 || v8 == 7 && (a4 = Tile_GetFloat((_DWORD *)a1[1], 0xFB7), a4 == fConstant_2) ) /*0x5d60a0*/
      {
        ++*(_DWORD *)(a1[0x13] + 0x58); /*0x5d60cd*/
      }
      else
      {
        v19 = (_DWORD *)(a1[0x13] + 0x58); /*0x5d60a5*/
        if ( (*v19)-- == 1 ) /*0x5d60a8*/
        {
          Menu::StartFadeIn((_DWORD *)a1[0x13]); /*0x5d60b0*/
          *(_DWORD *)(a1[0x13] + 4 * a1[0xF] + 0x48) = a1[0x10]; /*0x5d60be*/
LABEL_48:
          sub_5D5720(a4);                       // Close SkillsMenu after staging the selection. Oblivion has no subsequent minor-skill selection mode. /*0x5d61a9*/
          return; /*0x5d61a9*/
        }
      }
      *(_DWORD *)(a1[0x13] + 4 * a1[0xF] + 0x48) = a1[0x10]; /*0x5d60d9*/
      goto LABEL_48; /*0x5d60dd*/
    }
    if ( a1[0xF] != 3 ) /*0x5d60e6*/
    {
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x413); /*0x5d6171*/
      if ( OpenMenuTile ) /*0x5d617b*/
      {
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d618b*/
        v25 = OblivionDynamicCast( /*0x5d6191*/
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &EffectSettingMenu `RTTI Type Descriptor',
                0);
        if ( v25 ) /*0x5d619b*/
          *(_DWORD *)(v25[0x25] + 0x14) = a1[0x10]; /*0x5d61a6*/
      }
      goto LABEL_48; /*0x5d61a6*/
    }
    v21 = sub_447350((void *)a1[0x10]); /*0x5d60f6*/
    if ( v21 ) /*0x5d60fd*/
    {
      v26.m_data = 0; /*0x5d6103*/
      v26.m_dataLen = 0; /*0x5d6107*/
      v26.m_bufLen = 0; /*0x5d610c*/
      v22 = *((const char **)v21 + 7); /*0x5d6111*/
      v27 = 0; /*0x5d6116*/
      if ( !v22 ) /*0x5d611a*/
        v22 = EmptyString; /*0x5d611c*/
      BSStringT_Static_Format(&v26, "%s %s?", *(const char **)stru_B38670, v22); /*0x5d6132*/
      ShowUIMessageBox( /*0x5d6151*/
        v26.m_data,
        a2,
        a3,
        a4,
        v26.m_data,
        (int)sub_5D5A50,
        1,
        (char *)MEMORY[0xB38D00],
        MEMORY[0xB38CF8]);
      v27 = 0xFFFFFFFF; /*0x5d615d*/
      BSStringT_Clear((unsigned int *)&v26); /*0x5d6165*/
    }
  }
}
