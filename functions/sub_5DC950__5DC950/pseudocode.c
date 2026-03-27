void __usercall sub_5DC950(_DWORD *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v5; // ebx
  void *v6; // eax
  char *v7; // esi
  int *v8; // eax
  int v9; // esi
  char v10; // al
  UINT32 IsFemale; // eax
  const unsigned __int8 *v12; // eax
  unsigned int *TileFromTemplate; // eax
  BSStringT *v14; // edi
  char *v15; // ebx
  int i; // edx
  char *v17; // eax
  char v18; // cl
  UINT32 v19; // eax
  char *v20; // eax
  UINT32 v21; // eax
  char *v22; // eax
  char *v23; // eax
  float a2; // [esp+0h] [ebp-124h]
  int v25; // [esp+14h] [ebp-110h]
  int *v26; // [esp+18h] [ebp-10Ch]
  char v28[255]; // [esp+20h] [ebp-104h] BYREF
  char v29; // [esp+11Fh] [ebp-5h]

  v5 = this;
  v25 = 0;
  v6 = (void *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm)(
                 TESDataHandler_g_PlayerRef,
                 a4,
                 a3,
                 st5_0);
  v7 = (char *)OblivionDynamicCast(
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                 &TESNPC `RTTI Type Descriptor',
                 0);
  if ( v7 )
  {
    sub_5893F0((_DWORD *)v5[0x11]);
    v8 = (int *)(v7 + 0x3C);
    if ( v7 != (char *)0xFFFFFFC4 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        v26 = (int *)v8[1];
        v10 = *(_BYTE *)(*(_DWORD *)v9 + 0x34);
        if ( (v10 & 8) == 0 && (v10 & 1) == 0 )
        {
          IsFemale = Actor_IsFemale((Actor *)TESDataHandler_g_PlayerRef);
          v12 = (const unsigned __int8 *)sub_51F350(*(int **)v9, *(char *)(v9 + 4), IsFemale);
          if ( _mbscmp(v12, "DUMMY") )
          {
            TileFromTemplate = Menu_CreateTileFromTemplate(
                                 v5,
                                 st5_0,
                                 a3,
                                 a4,
                                 (TileWindow *)v5[0x11],
                                 "stat_faction_template",
                                 0);
            v14 = (BSStringT *)TileFromTemplate;
            if ( TileFromTemplate )
            {
              a2 = (float)v25;
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, a2);
              ++v25;
              v15 = *(char **)(*(_DWORD *)v9 + 0x1C);
              if ( !v15 )
                v15 = EmptyString;
              for ( i = 0; i < 0x100; ++i )
              {
                v17 = &v28[i];
                v18 = v28[i + v15 - v28];
                v28[i] = v18;
                if ( v18 == 0x20 )
                  *v17 = 0x5F;
                if ( !*v17 )
                  break;
              }
              v29 = 0;
              BSStringT_Set(v14 + 1, v28, 0);
              Tile_SetString(v14, (_DWORD *)0xFAF, v15);
              v19 = Actor_IsFemale((Actor *)TESDataHandler_g_PlayerRef);
              v20 = (char *)sub_51F350(*(int **)v9, *(char *)(v9 + 4), v19);
              Tile_SetString(v14, (_DWORD *)0xFB0, v20);
              v21 = Actor_IsFemale((Actor *)TESDataHandler_g_PlayerRef);
              v22 = (char *)sub_51F350(*(int **)v9, *(char *)(v9 + 4) + 1, v21);
              Tile_SetString(v14, (_DWORD *)0xFB1, v22);
              v23 = sub_51F370(*(int **)v9, *(char *)(v9 + 4));
              Tile_SetString(v14, (_DWORD *)0xFB2, v23);
              a4 = fConstant_2;
              Tile_SetFloat((Tile *)v14, (_DWORD *)0xFB3, fConstant_2);
              v5 = this;
            }
          }
        }
        if ( !v26 )
          break;
        v8 = v26;
      }
    }
    sub_58FBA0(v5[0x11], st5_0, a3, a4, 0);
  }
}
