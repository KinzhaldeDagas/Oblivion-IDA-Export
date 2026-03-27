void __userpurge sub_5B3990(
        int a1@<ecx>,
        double st5_0@<st2>,
        double Float@<st1>,
        double a4@<st0>,
        signed int a5,
        _DWORD *a6)
{
  signed int v6; // esi
  int v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  unsigned __int8 *v10; // eax
  int v11; // esi
  int ***ContainerExtraDataForRef; // ebx
  ExtraDataList *v13; // edi
  int v14; // esi
  char v15; // al
  int v16; // eax
  char v17; // bl
  double v18; // st7
  int v19; // eax
  double v20; // st7
  int v21; // eax
  _DWORD *v22; // esi
  int v23; // edi
  _DWORD *v24; // eax
  Tile **Singleton; // eax
  double v26; // st7
  int v27; // eax
  int v28; // edx
  int *v29; // ecx
  int v30; // esi
  char *v31; // esi
  double v32; // st7
  int v33; // eax
  signed int v34; // esi
  double v35; // st7
  float a2; // [esp+0h] [ebp-18h]
  int v38; // [esp+1Ch] [ebp+4h]

  v6 = a5;
  if ( Menu_GetOpenMenuTile(0x416) && a5 >= 0x3E9 && byte_B3B43D )
  {
    Tile_GetFloat(a6, 0xFBB);
    v7 = Double_To_SInt32(a4);
    Float = Tile_GetFloat(a6, 0xFB5);
    switch ( Double_To_SInt32(a4) )
    {
      case 1:
      case 2:
      case 4:
        v16 = a1 + 0x38;
        if ( a1 != 0xFFFFFFC8 )
        {
          while ( --v7 )
          {
            v16 = *(_DWORD *)(v16 + 4);
            if ( !v16 )
              goto LABEL_9;
          }
          sub_5C25C0((char)a6, st5_0, Float, a4, *(unsigned __int8 **)v16);
        }
        break;
      case 8:
        v8 = (_DWORD *)dword_B14360;
        if ( dword_B14360 )
        {
          while ( 1 )
          {
            v9 = (_DWORD *)v8[2];
            v8 = (_DWORD *)*v8;
            if ( v9[1] == v7 )
              break;
            if ( !v8 )
              goto LABEL_8;
          }
          v10 = (unsigned __int8 *)OblivionDynamicCast(
                                     *(void **)(*v9 + 8),
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESObjectBOOK `RTTI Type Descriptor',
                                     0);
          if ( v10 )
          {
            if ( (v10[0x88] & 1) != 0 )
            {
              if ( *((_DWORD *)v10 + 0x19) )
                sub_5C25C0((char)a6, st5_0, Float, a4, v10);
            }
          }
          v11 = *v9;
          if ( v11 )
          {
            TESObjectREFR_GetContainer((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            if ( ContainerExtraDataForRef )
            {
              v13 = 0;
              if ( *(_DWORD *)v11 )
                v13 = **(ExtraDataList ***)v11;
              v14 = *(_DWORD *)(v11 + 8);
              v15 = sub_5C1100();
              sub_489820(ContainerExtraDataForRef, st5_0, v14, v13, v15);
            }
          }
LABEL_8:
          v6 = a5;
        }
        break;
      default:
        break;
    }
  }
LABEL_9:
  if ( Menu_GetOpenMenuTile(0x3F8) )
    return;
  if ( (unsigned int)(v6 - 1) <= 4 )
  {
    sub_5B2060((int *)a1, st5_0, a4, Float, v6, (int)a6);
    return;
  }
  if ( v6 == 7 || v6 == 8 )
  {
    v32 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
    v33 = Double_To_SInt32(v32);
    if ( a5 == 7 )
      v34 = v33 - 1;
    else
      v34 = v33 + 1;
    v38 = v34;
    if ( v34 >= 1 )
    {
      if ( v34 <= 5 )
      {
LABEL_59:
        v35 = (double)v38;
        a2 = v35;
        Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAE, a2);
        sub_5B2060((int *)a1, st5_0, v35, Float, v34, 0);
        return;
      }
      v34 = 1;
    }
    else
    {
      v34 = 5;
    }
    v38 = v34;
    goto LABEL_59;
  }
  if ( (unsigned int)(v6 - 0xD) <= 1 )
  {
    if ( (byte_B3B404 & 0x7F) == v6 - 0xD )
    {
      sub_597A60(&byte_B3B404);
    }
    else
    {
      sub_597A40(&byte_B3B404, v6 - 0xD);
      byte_B3B404 &= ~0x80u;
    }
    sub_5B2B70(st5_0, Float);
    return;
  }
  if ( v6 >= 0x3E9 )
  {
    v17 = 0;
    v18 = Tile_GetFloat(a6, 0xFB5);
    v19 = Double_To_SInt32(v18);
    if ( v19 != 0x10 )
    {
      if ( v19 == 8 )
      {
        v20 = Tile_GetFloat(a6, 0xFBB);
        v21 = Double_To_SInt32(v20);
        v22 = (_DWORD *)dword_B14360;
        v23 = v21;
        if ( dword_B14360 )
        {
          do
          {
            v24 = (_DWORD *)v22[2];
            v22 = (_DWORD *)*v22;
            if ( v24[1] == v23 )
            {
              sub_664850((int)TESDataHandler_g_PlayerRef, (char)a6, st5_0, Float, v20, *(_DWORD *)(*v24 + 8));
              sub_57DE50(0x17);
              v17 = 1;
            }
          }
          while ( v22 );
          if ( v17 )
          {
LABEL_41:
            Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1);
            sub_57D730(Singleton, 0);
            sub_5B2B70(st5_0, Float);
          }
        }
      }
      else
      {
        v26 = Tile_GetFloat(a6, 0xFBB);
        v27 = Double_To_SInt32(v26);
        v28 = 0;
        v29 = (int *)(a1 + 0x38);
        if ( a1 == 0xFFFFFFC8 )
          goto LABEL_46;
        do
        {
          v30 = *v29;
          v29 = (int *)v29[1];
          ++v28;
        }
        while ( v28 != v27 && v29 );
        if ( !v30 )
        {
LABEL_46:
          PrintError("Spell item index did was not in saved list.");
          return;
        }
        v31 = (char *)(v30 + 0x18);
        if ( v31 != (char *)Player_GetCurrentMagicItem(TESDataHandler_g_PlayerRef) )
        {
          if ( sub_65D4C0(TESDataHandler_g_PlayerRef) )
            sub_664850((int)TESDataHandler_g_PlayerRef, (char)a6, st5_0, Float, v26, 0);
          PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, (char)a6, st5_0, Float, v26, v31);
          sub_57DE50(0x17);
          goto LABEL_41;
        }
      }
    }
  }
}
