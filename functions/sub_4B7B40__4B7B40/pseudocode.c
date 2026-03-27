void __userpurge sub_4B7B40(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        double a8@<st6>,
        double a9@<st5>,
        _BYTE *a10)
{
  int v10; // ebx
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectREFR **v12; // ebp
  TESObjectCELL *CellAtCellCoord; // esi
  TESWorldSpace *v14; // edi
  signed int v15; // edi
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v17; // eax
  TESWorldSpace *WorldSpace; // edi
  TESWorldSpace *v19; // eax
  int *v20; // edi
  int v21; // eax
  BSExtraDataVtbl *v22; // eax
  int *v23; // eax
  int *v24; // esi
  TESObjectCELL *v25; // eax
  TESWorldSpace *v26; // [esp+10h] [ebp-Ch]
  TESObjectCELL *v28; // [esp+18h] [ebp-4h]
  char IsInterior; // [esp+20h] [ebp+4h]

  v10 = a1;
  if ( a10 )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a10 + 0x170))(a10) == a1 )
    {
      TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(a10);
      v12 = TeleportExtraData;
      if ( TeleportExtraData )
      {
        CellAtCellCoord = sub_42B460(TeleportExtraData);
        v14 = sub_42B470(v12);
        v26 = v14;
        if ( dword_B35B90 )
          sub_4BE5A0((_DWORD *)dword_B35B90);
        if ( dword_B35B8C )
          sub_4BD980((_DWORD *)dword_B35B8C);
        if ( CellAtCellCoord )
          goto LABEL_13;
        if ( v14 )
        {
          v15 = (int)*(float *)sub_6899C0((char *)v12) >> 0xC;
          a8 = *(float *)(sub_6899C0((char *)v12) + 4);
          CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(v26, v15, (int)a8 >> 0xC);
          if ( CellAtCellCoord
            || (CellAtCellCoord = (TESObjectCELL *)sub_4F1630(v26, a5, a6, a7, v15, (int)a8 >> 0xC)) != 0 )
          {
            v10 = a1;
LABEL_13:
            ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            v28 = ParentCell;
            if ( ParentCell )
              IsInterior = TESObjectCELL_IsInterior(ParentCell);
            else
              IsInterior = 0;
            if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
            {
              v17 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
              WorldSpace = TESObjectCELL_GetWorldSpace(v17);
            }
            else
            {
              WorldSpace = 0;
            }
            v19 = TESObjectCELL_GetWorldSpace(CellAtCellCoord);
            if ( WorldSpace )
            {
              if ( v19 )
              {
                if ( WorldSpace != v19 && (*(_BYTE *)(v10 + 0x64) & 1) == 0 )
                  Sky_CreateOrGetGlobalObject()->weatherOverride = 0;
              }
            }
            v20 = (int *)sub_42B430((char *)v12);
            v21 = sub_6899C0((char *)v12);
            sub_66EAF0(
              (int *)TESDataHandler_g_PlayerRef,
              a7,
              a4,
              a5,
              a6,
              a2,
              a3,
              a8,
              a9,
              *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v21,
              *(NiAVObject *(__thiscall **)(NiAVObject *, const char *))(v21 + 4),
              *(void *(__thiscall **)(NiAVObject *))(v21 + 8),
              *v20,
              v20[1],
              v20[2],
              CellAtCellCoord,
              0);
            sub_4B7720();
            if ( TESObjectCELL_IsInterior(CellAtCellCoord) )
              sub_4CB040((TESObjectREFR **)CellAtCellCoord);
            if ( *(_DWORD *)(v10 + 0x5C) )
            {
              if ( sub_42B410((BSExtraData *)v12) )
              {
                v22 = sub_42B410((BSExtraData *)v12);
                if ( (*((int (__thiscall **)(BSExtraDataVtbl *))v22->Destructor + 0x55))(v22) )
                {
                  if ( OSGlobals->sound )
                  {
                    OSGLobals_PlaySound(*(_DWORD *)(*(_DWORD *)(v10 + 0x5C) + 0xC), 0x121, 0);
                    v24 = v23;
                    if ( v23 )
                    {
                      sub_6B7190(v23, 0);
                      sub_6B73E0(v24);
                      FormHeapFree((unsigned int)v24);
                    }
                  }
                }
              }
            }
            v25 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            if ( byte_B13230 )
            {
              if ( byte_B13228 )
              {
                if ( v28 )
                {
                  if ( v25 )
                  {
                    if ( IsInterior != TESObjectCELL_IsInterior(v25) )
                      SaveLoad_CurrentSavegame->flags |= 0x8000u;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
