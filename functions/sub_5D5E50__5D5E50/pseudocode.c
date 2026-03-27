void __userpurge sub_5D5E50(
        _DWORD *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        Tile *a7)
{
  int v8; // edi
  int v9; // ebx
  _DWORD *v10; // ecx
  int v11; // ebp
  int v12; // eax
  Tile *v13; // ecx
  double Float; // st7
  double v15; // st7
  double v16; // st7
  Tile *v17; // ecx
  int v18; // edi
  _DWORD *v19; // ebx
  _DWORD *v20; // eax
  void *v22; // eax
  const char *v23; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v26; // eax
  BSStringT v27; // [esp+18h] [ebp-14h] BYREF
  unsigned int v28; // [esp+28h] [ebp-4h]
  Tile *i; // [esp+34h] [ebp+8h]

  v8 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x34))(
         a1,
         a5,
         a4,
         a3);
  if ( sub_578FE0() == v8 )
  {
    v9 = a6;
    if ( a6 != 4 && a6 != 5 && a6 != 6 )
    {
      if ( a6 != 7 )
      {
        if ( a6 == 0x63 )
        {
          if ( a1[0x11] == 1 )
          {
            v13 = (Tile *)a1[0x12];
            if ( v13 )
              Tile_SetFloat(v13, (_DWORD *)0xFB1, 1.0);
            if ( a1[0xF] == 3 )
              sub_57DE50(0xB);
            Tile_SetFloat(a7, (_DWORD *)0xFB1, fConstant_2);
            a1[0x12] = a7;
            Float = Tile_GetFloat(a7, 0xFB0);
            a1[0x10] = Double_To_SInt32(Float);
            sub_5D5B40(a1, (void *)0xFFFFFFFF);
          }
          else
          {
            v15 = Tile_GetFloat(a7, 0xFB1);
            if ( v15 == fConstant_2 )
            {
              Tile_SetFloat(a7, (_DWORD *)0xFB1, 1.0);
              sub_5D5B40(a1, (void *)0xFFFFFFFF);
            }
            else
            {
              if ( sub_5D5A00(a1) >= a1[0x11] )
              {
                ShowUIMessageBox(
                  (char *)dword_B38620,
                  a2,
                  a3,
                  a4,
                  v15,
                  (const char *)dword_B38620,
                  0,
                  1,
                  (const char *)sOk,
                  0);
              }
              else
              {
                Tile_SetFloat(a7, (_DWORD *)0xFB1, fConstant_2);
                v16 = Tile_GetFloat(a7, 0xFB0);
                a1[0x10] = Double_To_SInt32(v16);
                a1[0x12] = a7;
              }
              sub_5D5B40(a1, (void *)0xFFFFFFFF);
            }
          }
        }
        return;
      }
      a5 = Tile_GetFloat((_DWORD *)a1[1], 0xFB7);
      if ( a5 != fConstant_2 )
        return;
    }
    v10 = (_DWORD *)a1[0x13];
    v11 = 0;
    if ( v10 )
    {
      v12 = a1[0xF];
      if ( v12 >= 0 )
      {
        if ( v12 <= 1 )
        {
          if ( v12 == 1 )
            v17 = (Tile *)(v10 + 0x18);
          else
            v17 = (Tile *)(v10 + 0x1A);
          v18 = *(_DWORD *)(a1[0xA] + 0x38);
          for ( i = v17; v18; v9 = a6 )
          {
            if ( v11 >= a1[0x11] )
              break;
            v19 = *(_DWORD **)(v18 + 8);
            v18 = *(_DWORD *)(v18 + 4);
            a5 = Tile_GetFloat(v19, 0xFB1);
            if ( a5 == fConstant_2 )
            {
              a5 = Tile_GetFloat(v19, 0xFB0);
              *((_DWORD *)i + v11++) = Double_To_SInt32(a5);
            }
          }
        }
        else if ( v12 == 2 )
        {
          v10[0x17] = a1[0x10];
        }
      }
      if ( v9 == 4 || v9 == 7 && (a5 = Tile_GetFloat((_DWORD *)a1[1], 0xFB7), a5 == fConstant_2) )
      {
        ++*(_DWORD *)(a1[0x13] + 0x58);
      }
      else
      {
        v20 = (_DWORD *)(a1[0x13] + 0x58);
        if ( (*v20)-- == 1 )
        {
          sub_584390(a1[0x13]);
          *(_DWORD *)(a1[0x13] + 4 * a1[0xF] + 0x48) = a1[0x10];
LABEL_48:
          sub_5D5720(v11, a3, a4, a5);
          return;
        }
      }
      *(_DWORD *)(a1[0x13] + 4 * a1[0xF] + 0x48) = a1[0x10];
      goto LABEL_48;
    }
    if ( a1[0xF] != 3 )
    {
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x413);
      if ( OpenMenuTile )
      {
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
        v26 = OblivionDynamicCast(
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &EffectSettingMenu `RTTI Type Descriptor',
                0);
        if ( v26 )
          *(_DWORD *)(v26[0x25] + 0x14) = a1[0x10];
      }
      goto LABEL_48;
    }
    v22 = sub_447350((void *)a1[0x10]);
    if ( v22 )
    {
      v27.m_data = 0;
      v27.m_dataLen = 0;
      v27.m_bufLen = 0;
      v23 = *((const char **)v22 + 7);
      v28 = 0;
      if ( !v23 )
        v23 = EmptyString;
      BSStringT_Static_Format(&v27, "%s %s?", *(const char **)dword_B38670, v23);
      ShowUIMessageBox(
        v27.m_data,
        0,
        a3,
        a4,
        a5,
        v27.m_data,
        (int)sub_5D5A50,
        1,
        (const char *)MessageButtonTextNo,
        MessageButtonTextYes);
      v28 = 0xFFFFFFFF;
      BSStringT_Clear((unsigned int *)&v27);
    }
  }
}
