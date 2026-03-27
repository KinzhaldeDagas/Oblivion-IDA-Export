void __usercall sub_596A00(int a1@<ebx>, int a2@<edi>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  Tile *v6; // eax
  Tile *v7; // esi
  _DWORD *v8; // edi
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v11; // esi
  TESForm *v12; // eax
  TESForm *v13; // ebp
  int v14; // eax
  int v15; // edi
  _DWORD *v16; // esi
  _DWORD *v17; // esi
  float BaseCalcAVi; // [esp+18h] [ebp-Ch]
  void *v19; // [esp+1Ch] [ebp-8h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x406);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v11 = OblivionDynamicCast(
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &ClassMenu `RTTI Type Descriptor',
          0);
  if ( v11 )
  {
    if ( sub_578D70() == 2 )
    {
      if ( *((_DWORD *)v11 + 0xF) )
      {
        v12 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
        v13 = (TESForm *)OblivionDynamicCast(
                           v12,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESNPC `RTTI Type Descriptor',
                           0);
        if ( v13 )
        {
          v14 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(
                  TESDataHandler_g_PlayerRef,
                  a2,
                  a5,
                  a4,
                  a3);
          v15 = v14;
          if ( v14 )
          {
            v16 = (_DWORD *)(v14 + 0x3C);
            if ( v14 != 0xFFFFFFC4 )
            {
              do
              {
                if ( !*v16 )
                  break;
                ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B8)(
                  TESDataHandler_g_PlayerRef,
                  *v16);
                v16 = (_DWORD *)v16[1];
              }
              while ( v16 );
            }
            v11 = v19;
          }
          MagicTarget_ProcessEffects(&TESDataHandler_g_PlayerRef->super.super.magicTarget, COERCE_INT(0.0));
          v13[0xA].member.modlist.next = *((TESForm::ModReferenceList **)v11 + 0xF);
          sub_5222D0(v13, 1);
          TESDataHandler_g_PlayerRef->majorSkillAdvances = 0;
          TESDataHandler_g_PlayerRef->bCanLevelUp = 0;
          sub_65FBB0(TESDataHandler_g_PlayerRef);
          sub_65D610((int)TESDataHandler_g_PlayerRef);
          if ( v15 )
          {
            v17 = (_DWORD *)(v15 + 0x3C);
            if ( v15 != 0xFFFFFFC4 )
            {
              do
              {
                if ( !*v17 )
                  break;
                ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B7)(
                  TESDataHandler_g_PlayerRef,
                  *v17);
                v17 = (_DWORD *)v17[1];
              }
              while ( v17 );
            }
          }
          sub_66C200(TESDataHandler_g_PlayerRef);
          sub_57A7D0();
          ((void (__stdcall *)(_DWORD))sub_5F2530)(fConstant_2);
          BaseCalcAVi = (float)(int)Actor_GetBaseCalcAVi(9);
          sub_5F25F0((int)TESDataHandler_g_PlayerRef, a1, v15, BaseCalcAVi, COERCE_FLOAT(1));
          sub_6645C0(TESDataHandler_g_PlayerRef);
          sub_5B3760((char)v13, a1, a3, BaseCalcAVi, a4);
          sub_5DCB70((char)v13, v15, a3, BaseCalcAVi, a4);
        }
      }
      v6 = (Tile *)Menu_GetOpenMenuTile(0x406);
      v7 = v6;
      if ( v6 )
      {
        v8 = (_DWORD *)Tile_GetParentMenu(v6);
        if ( v8 )
        {
          Tile_SetFloat(v7, (_DWORD *)0x1772, fConstant_2);
          sub_584740(v8, a3, a4);
        }
      }
    }
  }
}
