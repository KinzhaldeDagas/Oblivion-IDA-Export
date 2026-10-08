char __usercall sub_5A3FF0@<al>(
        double st7_0@<st0>,
        double st5_0@<st2>,
        char *a2,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v9; // esi
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ebx
  int v14; // eax
  OblivionTileValueView *v15; // edi
  int *v16; // ebx
  InterfaceManager *Singleton; // esi
  double Depth; // st6
  Tile *menuRoot; // ecx
  char *m_data; // esi
  Tile *File; // edi
  Menu *ParentMenu; // ebp
  TileMenu *v24; // eax
  _DWORD *v25; // esi
  double Float; // st7
  int v27; // eax
  UInt32 *v28; // ebx
  int v29; // ebx
  _DWORD **v30; // ebp
  bool v31; // zf
  _DWORD *v32; // eax
  double v33; // st7
  float v34; // [esp+4h] [ebp-88h]
  float v35; // [esp+4h] [ebp-88h]
  _DWORD *v36; // [esp+1Ch] [ebp-70h]
  float v37; // [esp+1Ch] [ebp-70h]
  float v38; // [esp+1Ch] [ebp-70h]
  Menu *v39; // [esp+20h] [ebp-6Ch]
  BSStringT Str; // [esp+24h] [ebp-68h] BYREF
  _DWORD v41[21]; // [esp+2Ch] [ebp-60h] BYREF
  int v42; // [esp+88h] [ebp-4h]

  v41[0] = 0xFAE; /*0x5a401c*/
  v41[1] = 0xFAF; /*0x5a4024*/
  v41[2] = 0xFB0; /*0x5a402c*/
  v41[3] = 0xFB1; /*0x5a4034*/
  v41[4] = 0xFB2; /*0x5a403c*/
  v41[5] = 0xFB3; /*0x5a4044*/
  v41[6] = 0xFB4; /*0x5a404c*/
  v41[7] = 0xFB5; /*0x5a4054*/
  v41[8] = 0xFB6; /*0x5a405c*/
  v41[9] = 0xFB7; /*0x5a4064*/
  v41[0xA] = 0xFB8; /*0x5a406c*/
  v41[0xB] = 0xFB9; /*0x5a4074*/
  v41[0xC] = 0xFBA; /*0x5a407c*/
  v41[0xD] = 0xFBB; /*0x5a4084*/
  v41[0xE] = 0xFBC; /*0x5a408c*/
  v41[0xF] = 0xFBD; /*0x5a4094*/
  v41[0x10] = 0xFBE; /*0x5a409c*/
  v41[0x11] = 0xFBF; /*0x5a40a4*/
  v41[0x12] = 0xFC0; /*0x5a40ac*/
  v41[0x13] = 0xFC1; /*0x5a40b4*/
  v41[0x14] = 0xFC2; /*0x5a40bc*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F3); /*0x5a40c4*/
  v9 = OpenMenuTile; /*0x5a40c9*/
  if ( OpenMenuTile && Tile_GetParentMenu(OpenMenuTile) ) /*0x5a40d6*/
  {
    v10 = a7; /*0x5a40df*/
    if ( a7 != 4 && (*(_DWORD *)(Tile_GetParentMenu(v9) + 0x24) == 8 || *(_DWORD *)(Tile_GetParentMenu(v9) + 0x24) == 1) ) /*0x5a4107*/
      goto LABEL_10; /*0x5a4107*/
  }
  else
  {
    v10 = a7; /*0x5a410b*/
  }
  if ( !InterfaceManager_IsMenuVisibleByID(0x3F1, 0) /*0x5a4144*/
    || (v11 = (_DWORD *)Menu_GetOpenMenuTile(0x3F1), *(_DWORD *)(Tile_GetParentMenu(v11) + 0x24) != 1) )
  {
    if ( v9 ) /*0x5a4249*/
      (*(void (__thiscall **)(_DWORD *, int))*v9)(v9, 1); /*0x5a4252*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a425b*/
    Depth = InterfaceManager_GetDepth(st7_0); /*0x5a425d*/
    v37 = st7_0; /*0x5a4262*/
    Str.m_data = 0; /*0x5a4266*/
    Str.m_dataLen = 0; /*0x5a426a*/
    Str.m_bufLen = 0; /*0x5a426f*/
    v42 = 1; /*0x5a428b*/
    BSStringT_Static_Format(&Str, "%s\\%s", "Data\\Menus\\Generic", a2); /*0x5a4292*/
    menuRoot = Singleton->menuRoot; /*0x5a4297*/
    m_data = Str.m_data; /*0x5a429a*/
    File = Tile::ReadFile(menuRoot, Str.m_data); /*0x5a42a7*/
    ParentMenu = (Menu *)Tile_GetParentMenu(File); /*0x5a42b0*/
    v39 = ParentMenu; /*0x5a42b4*/
    if ( ParentMenu ) /*0x5a42b8*/
    {
      if ( ParentMenu->__vftable->GetID(ParentMenu) == 0x3F3 ) /*0x5a42cd*/
      {
        v24 = (TileMenu *)OblivionDynamicCast( /*0x5a42e2*/
                            File,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileMenu `RTTI Type Descriptor',
                            0);
        Menu_SetTileMenu(ParentMenu, Depth, st7_0, v24); /*0x5a42ed*/
        v25 = OblivionDynamicCast( /*0x5a4310*/
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &GenericMenu `RTTI Type Descriptor',
                0);
        if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 /*0x5a433b*/
          || (Float = Tile_GetFloat(File, 0xFA5), Float == fXMLI_NoClickPast) )
        {
          Float = v37; /*0x5a433d*/
          Tile_SetFloat(File, 0xFABu, v37); /*0x5a434c*/
        }
        v25[0xA] = a4; /*0x5a435f*/
        v25[0xD] = a6; /*0x5a4362*/
        if ( a8 ) /*0x5a436e*/
        {
          v27 = a7; /*0x5a4374*/
          if ( a7 != 4 ) /*0x5a437e*/
          {
            if ( a7 != 3 ) /*0x5a4387*/
            {
              v28 = v41; /*0x5a438d*/
              while ( v27 ) /*0x5a4393*/
              {
                if ( v27 == 1 ) /*0x5a43b8*/
                {
                  *a8 += 4; /*0x5a43ba*/
                  Float = *(float *)(*a8 - 4); /*0x5a43c1*/
                  Tile_SetFloat(File, *v28, *(float *)(*a8 - 4)); /*0x5a43cb*/
                  goto LABEL_42; /*0x5a43d0*/
                }
                if ( v27 == 2 ) /*0x5a43d5*/
                {
                  *a8 += 4; /*0x5a43d7*/
                  Tile_SetString(File, (_DWORD *)*v28, *(char **)(*a8 - 4)); /*0x5a43e5*/
                  goto LABEL_42; /*0x5a43e5*/
                }
LABEL_43:
                *a8 += 4; /*0x5a43ed*/
                v27 = *(_DWORD *)(*a8 - 4); /*0x5a43f2*/
                if ( v27 == 3 ) /*0x5a43f8*/
                  goto LABEL_53; /*0x5a43f8*/
              }
              *a8 += 4; /*0x5a4395*/
              Float = (double)*(int *)(*a8 - 4); /*0x5a43a3*/
              v35 = Float; /*0x5a43a8*/
              Tile_SetFloat(File, *v28, v35); /*0x5a43ae*/
LABEL_42:
              ++v28; /*0x5a43ea*/
              goto LABEL_43; /*0x5a43ea*/
            }
LABEL_53:
            EnableMenu(ParentMenu, st5_0, Depth, Float, 0); /*0x5a445c*/
            v33 = fConstant_2; /*0x5a4465*/
            Tile_SetFloat(File, 0xFA1u, fConstant_2); /*0x5a4476*/
            sub_58FBA0((int)File, st5_0, Depth, v33, 0); /*0x5a447f*/
            FormHeapFree((unsigned int)Str.m_data); /*0x5a4489*/
            return 1; /*0x5a44a6*/
          }
        }
        else if ( a7 != 4 ) /*0x5a4404*/
        {
          goto LABEL_53; /*0x5a4404*/
        }
        *a8 += 4; /*0x5a4406*/
        v29 = *(_DWORD *)(*a8 - 4); /*0x5a440b*/
        if ( v29 ) /*0x5a4410*/
        {
          v30 = (_DWORD **)v41; /*0x5a4412*/
          do /*0x5a4456*/
          {
            v31 = !sub_589770(v29); /*0x5a441d*/
            v32 = *v30; /*0x5a441f*/
            if ( v31 ) /*0x5a4422*/
            {
              v38 = *(float *)(v29 + 4); /*0x5a4436*/
              Float = v38; /*0x5a443c*/
              Tile_SetFloat(File, (UInt32)v32, v38); /*0x5a4444*/
            }
            else
            {
              Tile_SetString(File, v32, *(char **)(v29 + 8)); /*0x5a442b*/
            }
            *a8 += 4; /*0x5a4449*/
            v29 = *(_DWORD *)(*a8 - 4); /*0x5a444e*/
            ++v30; /*0x5a4451*/
          }
          while ( v29 ); /*0x5a4456*/
          ParentMenu = v39; /*0x5a4458*/
        }
        goto LABEL_53; /*0x5a4458*/
      }
      if ( ParentMenu->members.tile ) /*0x5a44a7*/
        ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5a44b5*/
    }
    FormHeapFree((unsigned int)m_data); /*0x5a44b8*/
    return 0; /*0x5a44c0*/
  }
LABEL_10:
  v12 = (_DWORD *)FormHeapAlloc(0x2B0u); /*0x5a414a*/
  v42 = 0; /*0x5a415d*/
  if ( v12 ) /*0x5a4164*/
  {
    v13 = sub_5A3F40(v12); /*0x5a416d*/
    v36 = v13; /*0x5a416f*/
  }
  else
  {
    v36 = 0; /*0x5a4175*/
    v13 = 0; /*0x5a4179*/
  }
  v42 = 0xFFFFFFFF; /*0x5a4186*/
  BSStringT_Set((BSStringT *)v13, a2, 0); /*0x5a4191*/
  v13[2] = a4; /*0x5a41ad*/
  v13[0xAB] = a6; /*0x5a41b0*/
  if ( a8 ) /*0x5a41b6*/
  {
    v14 = v10; /*0x5a41bb*/
    if ( v10 != 3 ) /*0x5a41bd*/
    {
      v15 = (OblivionTileValueView *)(v13 + 0x18); /*0x5a41bf*/
      v16 = v13 + 3; /*0x5a41c2*/
      do /*0x5a4220*/
      {
        *v16 = v14; /*0x5a41c7*/
        if ( v14 ) /*0x5a41c9*/
        {
          if ( v14 == 1 ) /*0x5a41e3*/
          {
            *a8 += 4; /*0x5a41e5*/
            Tile::Value::SetFloat(v15, *(float *)(*a8 - 4)); /*0x5a41f3*/
          }
          else if ( v14 == 2 ) /*0x5a41fd*/
          {
            *a8 += 4; /*0x5a41ff*/
            sub_58CA50(v15, *(char **)(*a8 - 4)); /*0x5a420a*/
          }
        }
        else
        {
          *a8 += 4; /*0x5a41cb*/
          v34 = (float)*(int *)(*a8 - 4); /*0x5a41d6*/
          Tile::Value::SetFloat(v15, v34); /*0x5a41d9*/
        }
        *a8 += 4; /*0x5a420f*/
        v14 = *(_DWORD *)(*a8 - 4); /*0x5a4214*/
        ++v16; /*0x5a4217*/
        ++v15; /*0x5a421a*/
      }
      while ( v14 != 3 ); /*0x5a4220*/
      v13 = v36; /*0x5a4222*/
    }
  }
  BSSimpleList_PushBack(&dword_B3B0B4[0xA0], (int)v13); /*0x5a422c*/
  return 1; /*0x5a4233*/
}
