char __usercall sub_5A3FF0@<al>(
        double st7_0@<st0>,
        double st6_0@<st1>,
        char *a2,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v10; // esi
  int v11; // ebp
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax
  unsigned int *v16; // edi
  int *v17; // ebx
  InterfaceManager *Singleton; // esi
  double Depth; // st5
  BSStringT *menuRoot; // ecx
  char *m_data; // esi
  BSStringT *XML; // edi
  Menu *ParentMenu; // ebp
  TileMenu *v25; // eax
  _DWORD *v26; // esi
  double Float; // st7
  int v28; // eax
  _DWORD **v29; // ebx
  int v30; // ebx
  _DWORD **v31; // ebp
  bool v32; // zf
  _DWORD *v33; // eax
  double v34; // st7
  float v35; // [esp+4h] [ebp-88h]
  float v36; // [esp+4h] [ebp-88h]
  _DWORD *v37; // [esp+1Ch] [ebp-70h]
  float v38; // [esp+1Ch] [ebp-70h]
  float v39; // [esp+1Ch] [ebp-70h]
  Menu *v40; // [esp+20h] [ebp-6Ch]
  BSStringT Str; // [esp+24h] [ebp-68h] BYREF
  _DWORD v42[21]; // [esp+2Ch] [ebp-60h] BYREF
  int v43; // [esp+88h] [ebp-4h]

  v42[0] = 0xFAE;
  v42[1] = 0xFAF;
  v42[2] = 0xFB0;
  v42[3] = 0xFB1;
  v42[4] = 0xFB2;
  v42[5] = 0xFB3;
  v42[6] = 0xFB4;
  v42[7] = 0xFB5;
  v42[8] = 0xFB6;
  v42[9] = 0xFB7;
  v42[0xA] = 0xFB8;
  v42[0xB] = 0xFB9;
  v42[0xC] = 0xFBA;
  v42[0xD] = 0xFBB;
  v42[0xE] = 0xFBC;
  v42[0xF] = 0xFBD;
  v42[0x10] = 0xFBE;
  v42[0x11] = 0xFBF;
  v42[0x12] = 0xFC0;
  v42[0x13] = 0xFC1;
  v42[0x14] = 0xFC2;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F3);
  v10 = OpenMenuTile;
  if ( OpenMenuTile && Tile_GetParentMenu(OpenMenuTile) )
  {
    v11 = a7;
    if ( a7 != 4
      && (*(_DWORD *)(Tile_GetParentMenu(v10) + 0x24) == 8 || *(_DWORD *)(Tile_GetParentMenu(v10) + 0x24) == 1) )
    {
      goto LABEL_10;
    }
  }
  else
  {
    v11 = a7;
  }
  if ( !sub_5790E0(0x3F1, 0)
    || (v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3F1), *(_DWORD *)(Tile_GetParentMenu(v12) + 0x24) != 1) )
  {
    if ( v10 )
      (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    Depth = InterfaceManager_GetDepth(st7_0);
    v38 = st7_0;
    Str.m_data = 0;
    Str.m_dataLen = 0;
    Str.m_bufLen = 0;
    v43 = 1;
    BSStringT_Static_Format(&Str, "%s\\%s", "Data\\Menus\\Generic", a2);
    menuRoot = (BSStringT *)Singleton->menuRoot;
    m_data = Str.m_data;
    XML = Menu_LoadXML(menuRoot, Depth, st6_0, st7_0, Str.m_data);
    ParentMenu = (Menu *)Tile_GetParentMenu(XML);
    v40 = ParentMenu;
    if ( ParentMenu )
    {
      if ( ParentMenu->__vftable->GetID(ParentMenu) == 0x3F3 )
      {
        v25 = (TileMenu *)OblivionDynamicCast(
                            XML,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileMenu `RTTI Type Descriptor',
                            0);
        Menu_SetTileMenu(ParentMenu, st6_0, st7_0, v25);
        v26 = OblivionDynamicCast(
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &GenericMenu `RTTI Type Descriptor',
                0);
        if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
          || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
        {
          Float = v38;
          Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v38);
        }
        v26[0xA] = a4;
        v26[0xD] = a6;
        if ( a8 )
        {
          v28 = a7;
          if ( a7 != 4 )
          {
            if ( a7 != 3 )
            {
              v29 = (_DWORD **)v42;
              while ( v28 )
              {
                if ( v28 == 1 )
                {
                  *a8 += 4;
                  Float = *(float *)(*a8 - 4);
                  Tile_SetFloat((Tile *)XML, *v29, *(float *)(*a8 - 4));
                  goto LABEL_42;
                }
                if ( v28 == 2 )
                {
                  *a8 += 4;
                  Tile_SetString(XML, *v29, *(char **)(*a8 - 4));
                  goto LABEL_42;
                }
LABEL_43:
                *a8 += 4;
                v28 = *(_DWORD *)(*a8 - 4);
                if ( v28 == 3 )
                  goto LABEL_53;
              }
              *a8 += 4;
              Float = (double)*(int *)(*a8 - 4);
              v36 = Float;
              Tile_SetFloat((Tile *)XML, *v29, v36);
LABEL_42:
              ++v29;
              goto LABEL_43;
            }
LABEL_53:
            EnableMenu(ParentMenu, Depth, st6_0, Float, 0);
            v34 = fConstant_2;
            Tile_SetFloat((Tile *)XML, (_DWORD *)0xFA1, fConstant_2);
            sub_58FBA0((int)XML, Depth, st6_0, v34, 0);
            FormHeapFree((unsigned int)Str.m_data);
            return 1;
          }
        }
        else if ( a7 != 4 )
        {
          goto LABEL_53;
        }
        *a8 += 4;
        v30 = *(_DWORD *)(*a8 - 4);
        if ( v30 )
        {
          v31 = (_DWORD **)v42;
          do
          {
            v32 = !sub_589770(v30);
            v33 = *v31;
            if ( v32 )
            {
              v39 = *(float *)(v30 + 4);
              Float = v39;
              Tile_SetFloat((Tile *)XML, v33, v39);
            }
            else
            {
              Tile_SetString(XML, v33, *(char **)(v30 + 8));
            }
            *a8 += 4;
            v30 = *(_DWORD *)(*a8 - 4);
            ++v31;
          }
          while ( v30 );
          ParentMenu = v40;
        }
        goto LABEL_53;
      }
      if ( ParentMenu->members.tile )
        ParentMenu->__vftable->Destructor(ParentMenu, 1);
    }
    FormHeapFree((unsigned int)m_data);
    return 0;
  }
LABEL_10:
  v13 = (_DWORD *)FormHeapAlloc(0x2B0u);
  v43 = 0;
  if ( v13 )
  {
    v14 = sub_5A3F40(v13);
    v37 = v14;
  }
  else
  {
    v37 = 0;
    v14 = 0;
  }
  v43 = 0xFFFFFFFF;
  BSStringT_Set((BSStringT *)v14, a2, 0);
  v14[2] = a4;
  v14[0xAB] = a6;
  if ( a8 )
  {
    v15 = v11;
    if ( v11 != 3 )
    {
      v16 = v14 + 0x18;
      v17 = v14 + 3;
      do
      {
        *v17 = v15;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            *a8 += 4;
            Tile_Property_SetFloatValue_((int)v16, *(float *)(*a8 - 4));
          }
          else if ( v15 == 2 )
          {
            *a8 += 4;
            sub_58CA50(v16, *(char **)(*a8 - 4));
          }
        }
        else
        {
          *a8 += 4;
          v35 = (float)*(int *)(*a8 - 4);
          Tile_Property_SetFloatValue_((int)v16, v35);
        }
        *a8 += 4;
        v15 = *(_DWORD *)(*a8 - 4);
        ++v17;
        v16 += 7;
      }
      while ( v15 != 3 );
      v14 = v37;
    }
  }
  BSSimpleList_PushBack(&dword_B3B334, (int)v14);
  return 1;
}
