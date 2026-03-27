void __usercall sub_5BA4D0(double a1@<st2>, double st6_0@<st1>, char a3)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v5; // esi
  int ParentMenu; // edi
  int v7; // eax
  double v8; // st7
  _DWORD *v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // ecx
  TESWorldSpace *WorldSpace; // eax
  int v12; // edx
  _BYTE *v13; // esi
  bool v14; // zf
  float v15; // eax
  TESObjectCELL *ParentCell; // eax
  _DWORD *v17; // ecx
  int *v18; // ebx
  int v19; // esi
  BSExtraDataVtbl *v20; // eax
  int v21; // eax
  TESObjectREFR *v22; // ecx
  TESObjectCELL *v23; // eax
  int v24; // ebp
  BSExtraDataVtbl *v25; // eax
  BSExtraDataVtbl *v26; // eax
  unsigned __int16 *v27; // eax
  TESModel *v28; // eax
  char *ModelPath; // eax
  int *v30; // ebx
  int v31; // esi
  _BYTE *v32; // ebp
  int v33; // eax
  TESObjectREFR *v34; // ecx
  TESObjectCELL *v35; // eax
  int v36; // ebp
  TESObjectREFR **TeleportExtraData; // eax
  TESForm *v38; // eax
  const char *NameForForm; // eax
  int v40; // edx
  _DWORD *v41; // esi
  _DWORD *v42; // ecx
  int v43; // eax
  unsigned int *v44; // eax
  unsigned int v45; // ecx
  _DWORD *v46; // edx
  UInt32 v47; // eax
  PlayerCharacter *v48; // esi
  UInt32 unk62C; // edx
  UInt32 unk630; // eax
  UInt32 unk638; // ebx
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // edx
  _DWORD *v55; // ecx
  UInt32 v56; // eax
  double v57; // st7
  unsigned int *v58; // eax
  unsigned int *v59; // ebx
  int v60; // esi
  int v61; // ebp
  TESObjectCELL *v62; // eax
  double v63; // st7
  double v64; // st7
  unsigned int v65; // esi
  NiObject *v66; // eax
  float *v67; // eax
  NiAVObject *v68; // ecx
  double Float; // st7
  int v70; // eax
  _DWORD *v71; // ecx
  int v72; // ebp
  double v73; // st7
  int v74; // eax
  float v75; // esi
  int v76; // ebx
  double v77; // st7
  double v78; // st7
  Tile *v79; // esi
  Tile *v80; // ecx
  Tile *v81; // edi
  int v82; // [esp+10h] [ebp-A4h]
  char v83; // [esp+14h] [ebp-A0h]
  float v84; // [esp+2Ch] [ebp-88h]
  float v85; // [esp+2Ch] [ebp-88h]
  float v86; // [esp+2Ch] [ebp-88h]
  int v87; // [esp+44h] [ebp-70h]
  double v88; // [esp+48h] [ebp-6Ch] BYREF
  UInt32 unk634; // [esp+50h] [ebp-64h]
  float v90; // [esp+54h] [ebp-60h]
  BSStringT v91; // [esp+58h] [ebp-5Ch] BYREF
  BSStringT a2; // [esp+60h] [ebp-54h] BYREF
  float v93; // [esp+68h] [ebp-4Ch]
  NiPoint3 v94; // [esp+6Ch] [ebp-48h] BYREF
  int v95[3]; // [esp+78h] [ebp-3Ch] BYREF
  _BYTE v96[48]; // [esp+84h] [ebp-30h] BYREF

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
  v5 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( sub_5893B0(v5) || (v7 = *(_DWORD *)(ParentMenu + 0x24), v7 == 8) || v7 == 1 )
    {
      sub_5B8FC0((_DWORD **)ParentMenu, 0);
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
      {
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x58), (_DWORD *)0xFA1, 1.0);
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x60), (_DWORD *)0xFA1, fConstant_2);
        if ( sub_5B7550((_DWORD *)ParentMenu) )
        {
          Tile_SetFloat(*(Tile **)(ParentMenu + 0x64), (_DWORD *)0xFA1, 1.0);
          v8 = fConstant_2;
          Tile_SetFloat(*(Tile **)(ParentMenu + 0x64), (_DWORD *)0xFA1, fConstant_2);
          v9 = *(_DWORD **)(*(_DWORD *)(ParentMenu + 0x68) + 0x34);
          while ( v9 )
          {
            v10 = (void (__thiscall ***)(_DWORD, int))v9[2];
            v9 = (_DWORD *)*v9;
            if ( v10 )
              (**v10)(v10, 1);
          }
          NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(ParentMenu + 0x68) + 0x30));
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          v12 = *((_DWORD *)&Vector3_InitValue_ + 1);
          v13 = WorldSpace;
          v14 = WorldSpace == 0;
          v15 = dword_B3F9B0;
          *(float *)&a2.m_data = Vector3_InitValue_;
          *(_DWORD *)&a2.m_dataLen = v12;
          v93 = v15;
          if ( v14 )
          {
            ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            v13 = sub_44EE00(ParentCell, (float *)&a2, 0);
          }
          v17 = *(_DWORD **)(ParentMenu + 0xC4);
          if ( v17 )
          {
            BSSimpleList_Clear(v17);
            FormHeapFree(*(_DWORD *)(ParentMenu + 0xC4));
          }
          *(_DWORD *)(ParentMenu + 0xC4) = 0;
          if ( v13 )
            *(_DWORD *)(ParentMenu + 0xC4) = sub_4F0620((int)v13);
          v18 = *(int **)(ParentMenu + 0xC4);
          while ( v18 )
          {
            v19 = *v18;
            if ( !*v18 )
              break;
            v18 = (int *)v18[1];
            v20 = sub_4D7730((_BYTE *)v19);
            if ( sub_42B310(v20) )
            {
              if ( (*(_DWORD *)(v19 + 8) & 0x800) == 0 )
              {
                v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x174))(v19);
                v88 = *(double *)v21;
                v22 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
                unk634 = *(_DWORD *)(v21 + 8);
                v23 = TESObjectREFR_GetParentCell(v22);
                sub_4CCE20((ExtraDataList *)v23, (float *)&v88, v95, COERCE_FLOAT(1));
                v8 = (double)sub_4D2D00((float *)v95) * dbl_A3C770 * dbl_A3DDD8;
                v24 = Double_To_SInt32(v8);
                if ( v24 > 0 )
                {
                  v25 = sub_4D7730((_BYTE *)v19);
                  if ( !sub_42B340(v25) )
                  {
                    v26 = sub_4D7730((_BYTE *)v19);
                    v83 = sub_42B340(v26);
                    v27 = (unsigned __int16 *)sub_4D7730((_BYTE *)v19);
                    v82 = sub_42B370(v27);
                    v28 = (TESModel *)sub_4D7730((_BYTE *)v19);
                    ModelPath = TESModel_GetModelPath(v28);
                    v8 = *(float *)&v88;
                    sub_5B87D0(
                      *(float *)&ParentMenu,
                      st6_0,
                      *(float *)&v88,
                      (_DWORD *)LODWORD(v88),
                      (_DWORD *)HIDWORD(v88),
                      ModelPath,
                      v82,
                      v83,
                      1,
                      1,
                      v24,
                      0,
                      0,
                      0);
                  }
                }
              }
            }
          }
          v91.m_data = 0;
          v91.m_dataLen = 0;
          v91.m_bufLen = 0;
          v30 = *(int **)(ParentMenu + 0xC8);
          *(_DWORD *)&v96[0x2C] = 0;
          while ( v30 )
          {
            v31 = *v30;
            if ( !*v30 )
              break;
            v30 = (int *)v30[1];
            v32 = 0;
            if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v31 + 0x170))(v31) + 4) == 0x18 )
              v32 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v31 + 0x170))(v31);
            if ( (*(_DWORD *)(v31 + 8) & 0x2000) == 0 )
            {
              if ( v32 )
              {
                if ( !sub_4B6D00(v32) )
                {
                  v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 0x174))(v31);
                  v88 = *(double *)v33;
                  v34 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
                  unk634 = *(_DWORD *)(v33 + 8);
                  v35 = TESObjectREFR_GetParentCell(v34);
                  sub_4CCE20((ExtraDataList *)v35, (float *)&v88, v95, COERCE_FLOAT(1));
                  v8 = (double)sub_4D2D00((float *)v95) * dbl_A3C770 * dbl_A3DDD8;
                  v36 = Double_To_SInt32(v8);
                  if ( v36 > 0 )
                  {
                    TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData((_BYTE *)v31);
                    if ( TeleportExtraData )
                    {
                      sub_42B650(TeleportExtraData, &v91);
                    }
                    else
                    {
                      v38 = (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v31 + 0x170))(v31);
                      NameForForm = TESFullName_GetNameForForm(v38);
                      BSStringT_Set(&v91, NameForForm, 0);
                    }
                    v8 = *(float *)&v88;
                    sub_5B87D0(
                      *(float *)&ParentMenu,
                      st6_0,
                      *(float *)&v88,
                      (_DWORD *)LODWORD(v88),
                      (_DWORD *)HIDWORD(v88),
                      v91.m_data,
                      0xC,
                      0,
                      1,
                      1,
                      v36,
                      0,
                      0,
                      0);
                  }
                }
              }
            }
          }
          BSSimpleList_Clear(*(_DWORD **)(ParentMenu + 0xC8));
          v41 = sub_65D830(TESDataHandler_g_PlayerRef, v8, v40);
          *(_DWORD *)(ParentMenu + 0xCC) = v41;
          while ( v41 )
          {
            v42 = (_DWORD *)*v41;
            if ( !*v41 )
              break;
            v43 = v42[4];
            v41 = (_DWORD *)v41[1];
            LOBYTE(v87) = 1;
            if ( !v43 )
            {
              sub_52B440(v42, 1);
              LOBYTE(v87) = 0;
              if ( !v43 )
                continue;
            }
            v44 = (unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)v43 + 0x174))(v43);
            v45 = *v44;
            v46 = (_DWORD *)v44[1];
            v47 = v44[2];
            v88 = COERCE_DOUBLE(__PAIR64__((unsigned int)v46, v45));
            unk634 = v47;
            sub_5B87D0(
              *(float *)&ParentMenu,
              st6_0,
              *(float *)&v88,
              (_DWORD *)LODWORD(v88),
              v46,
              0,
              0x63,
              1,
              2,
              0,
              0xFF,
              v87,
              1,
              0);
          }
          v48 = TESDataHandler_g_PlayerRef;
          unk62C = TESDataHandler_g_PlayerRef->unk62C;
          unk630 = TESDataHandler_g_PlayerRef->unk630;
          unk634 = TESDataHandler_g_PlayerRef->unk634;
          v88 = COERCE_DOUBLE(__PAIR64__(unk630, unk62C));
          if ( sub_8AA390((float *)&v88, &Vector3_InitValue_) )
          {
            unk638 = v48->unk638;
            sub_4D8AF0((TESObjectCELL **)v48);
            if ( unk638 == v52 )
              sub_5B87D0(
                *(float *)&ParentMenu,
                st6_0,
                *(float *)&v88,
                (_DWORD *)LODWORD(v88),
                (_DWORD *)HIDWORD(v88),
                "local_set",
                0x63,
                0,
                3,
                0,
                0xFF,
                0,
                0,
                1);
            v48 = TESDataHandler_g_PlayerRef;
          }
          v53 = (int)v48->vtbl->super.super.super.GetPos((TESObjectREFR *)v48);
          v54 = *(_DWORD **)(v53 + 4);
          v55 = *(_DWORD **)v53;
          v56 = *(_DWORD *)(v53 + 8);
          v88 = COERCE_DOUBLE(__PAIR64__((unsigned int)v54, (unsigned int)v55));
          v57 = *(float *)&v55;
          unk634 = v56;
          *(float *)&v58 = COERCE_FLOAT(
                             sub_5B87D0(
                               *(float *)&ParentMenu,
                               st6_0,
                               *(float *)&v55,
                               v55,
                               v54,
                               "local_player",
                               0x62,
                               0,
                               4,
                               0,
                               0xFF,
                               0,
                               0,
                               0));
          v59 = v58;
          v90 = *(float *)&v58;
          if ( *(float *)&v58 == 0.0 )
          {
            *(_DWORD *)(ParentMenu + 0xFC) = 0;
          }
          else
          {
            *(float *)(ParentMenu + 0xFC) = *(float *)&v58;
            sub_58E870((int)v58, a1, st6_0, v57);
          }
          v60 = *(_DWORD *)(ParentMenu + 0xFC);
          if ( v60 )
          {
            v61 = *(_DWORD *)(v60 + 0x24);
            if ( v61 )
            {
              v62 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
              v88 = sub_4CCE00((ExtraDataList *)v62);
              v63 = ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.GetZRotation)(TESDataHandler_g_PlayerRef);
              *(float *)&v87 = v63 + v88;
              v84 = -*(float *)&v87;
              sub_70FD80((float *)v96, v84);
              *(float *)&v87 = Tile_GetFloat((_DWORD *)v60, 0xFCB) * dbl_A2FAA0;
              v64 = Tile_GetFloat((_DWORD *)v60, 0xFCA) * dbl_A2FAA0;
              *(_BYTE *)(v60 + 6) = 1;
              v65 = 0;
              v14 = *(_WORD *)(v61 + 0xB8) == 0;
              *(float *)&v88 = v64;
              if ( !v14 )
              {
                do
                {
                  if ( *(unsigned __int16 *)(v61 + 0xB6) > v65 )
                    v66 = *(NiObject **)(*(_DWORD *)(v61 + 0xB0) + 4 * v65);
                  else
                    v66 = 0;
                  v67 = (float *)NiRTTI_Cast((BSStringT *)dword_B3FCD4, v66);
                  if ( v67 )
                  {
                    v94.x = *(float *)&v87;
                    v94.y = 0.0;
                    v94.z = -*(float *)&v88;
                    sub_5B6860(v67, (NiTransform *)v96, &v94, &Vector3_InitValue_);
                  }
                  ++v65;
                }
                while ( v65 < *(unsigned __int16 *)(v61 + 0xB8) );
              }
              if ( !v59 )
                goto LABEL_66;
              v68 = (NiAVObject *)v59[9];
              if ( v68 )
                NiAVObject_UpdateNiAVObject(v68, 0.0, 1);
            }
          }
          if ( v59 )
          {
            if ( a3 )
            {
              Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x64), 0xFAE);
              v70 = Double_To_SInt32(Float);
              v71 = *(_DWORD **)(ParentMenu + 0x64);
              v72 = v70;
              LODWORD(v88) = v70;
              v73 = Tile_GetFloat(v71, 0xFAF);
              *(float *)&v74 = COERCE_FLOAT(Double_To_SInt32(v73));
              v75 = v90;
              v76 = v74;
              *(float *)&v88 = (float)SLODWORD(v88);
              v87 = v74;
              v77 = Tile_GetFloat((_DWORD *)LODWORD(v90), 0xFAD);
              *(float *)&v88 = *(float *)&v88 - v77;
              v90 = (float)v87;
              v78 = Tile_GetFloat((_DWORD *)LODWORD(v75), 0xFAC);
              v79 = *(Tile **)(ParentMenu + 0x60);
              v90 = v90 - v78;
              Tile_SetFloat(v79, (_DWORD *)0xFB8, *(float *)&v88);
              Tile_SetFloat(v79, (_DWORD *)0xFB9, v90);
              v80 = *(Tile **)(ParentMenu + 0x70);
              LODWORD(v90) = v72 / 2;
              v85 = (float)(v72 / 2);
              Tile_SetFloat(v80, (_DWORD *)0xFAE, v85);
              v81 = *(Tile **)(ParentMenu + 0x70);
              LODWORD(v90) = v76 / 2;
              v86 = (float)(v76 / 2);
              Tile_SetFloat(v81, (_DWORD *)0xFAF, v86);
            }
          }
LABEL_66:
          FormHeapFree((unsigned int)v91.m_data);
          return;
        }
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x64), (_DWORD *)0xFA1, 1.0);
      }
    }
  }
}
