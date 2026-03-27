char __thiscall sub_463A90(_DWORD **this, TESForm *a2)
{
  UInt32 mainThreadID; // edi
  unsigned int v4; // eax
  unsigned int *v6; // ebp
  unsigned int v8; // eax
  UInt32 refID; // edx
  char v10; // cl
  int v11; // ebx
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // eax
  TESObjectREFR *v13; // eax
  TESObjectREFR *v14; // ebp
  TESObjectCELL *ParentCell; // eax
  int WorldSpace; // eax
  TESObjectREFRVtbl *vtbl; // edx
  int v18; // eax
  TESObjectCELL *v19; // eax
  TESObjectCELL *v20; // ebp
  int XCoordinate; // eax
  FreeEntry *v22; // eax
  TESSaveLoad *v23; // ecx
  int v24; // edi
  size_t v25; // [esp-4h] [ebp-30h]
  _DWORD *YCoordinate; // [esp-4h] [ebp-30h]
  unsigned __int16 Src; // [esp+10h] [ebp-1Ch] BYREF
  TESForm::FormType Src_2; // [esp+12h] [ebp-1Ah]
  char Src_3; // [esp+13h] [ebp-19h]
  unsigned int *v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+18h] [ebp-14h]
  int v32; // [esp+1Ch] [ebp-10h]
  UInt32 v33; // [esp+20h] [ebp-Ch] BYREF
  TESForm::FormType v34; // [esp+24h] [ebp-8h]
  int v35; // [esp+25h] [ebp-7h]
  char v36; // [esp+29h] [ebp-3h]
  __int16 v37; // [esp+30h] [ebp+4h]
  unsigned __int16 v38; // [esp+30h] [ebp+4h]

  if ( *(_BYTE *)(TESDataHandler + 0xCD4) )
    return 0;
  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v4) = *((_BYTE *)this + 0x18);
  else
    v4 = (unsigned int)*(this + 6) >> 0x12;
  if ( (v4 & 1) != 0 )
    return 0;
  if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x185) )
    return 0;
  if ( a2 == (TESForm *)TESDataHandler_g_PlayerRef )
    return 0;
  v6 = sub_452D30(*this, (int)a2);
  v30 = v6;
  if ( !v6 )
    return 0;
  if ( OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MagicProjectile `RTTI Type Descriptor',
         0) )
  {
    sub_452DF0(*this, a2->member.refID, 1);
    return 0;
  }
  *((_BYTE *)this + 0x70) = 0;
  *((_BYTE *)this + 0x71) = 0x7D;
  *((_BYTE *)this + 0x7C) = 0x7D;
  if ( v6[1] )
    PrintError("Form %08X is unloading, but it already has a buffer.", a2->member.refID);
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33B80, (int)"TESSaveLoadGame::UnloadForm");
  v8 = sub_4535A0(a2, *v6);
  refID = a2->member.refID;
  v10 = *((_BYTE *)this + 0x7C);
  v11 = v8;
  Src_2 = a2->member.type;
  v34 = Src_2;
  *(this + 0x21) = &v33;
  v33 = refID;
  GetSaveSize = a2->vtbl->GetSaveSize;
  Src_3 = v10;
  v36 = v10;
  v35 = v11;
  v37 = GetSaveSize(a2, v11);
  v38 = sub_452250(a2, v11) + v37;
  Src = v38;
  if ( (v11 & 0x80000002) != 0 )
  {
    v13 = (TESObjectREFR *)OblivionDynamicCast(
                             a2,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
    v14 = v13;
    if ( v13 )
    {
      ParentCell = TESObjectREFR_GetParentCell(v13);
      v31 = (int)ParentCell;
      if ( ParentCell && TESObjectCELL_IsInterior(ParentCell) )
      {
        sub_452E70(*(this + 2), *(int **)(v31 + 0xC), v14->member.super.refID);
      }
      else
      {
        v31 = v14->member.super.refID;
        WorldSpace = TESObjectREFR_GetWorldSpace(v14);
        vtbl = v14->vtbl;
        v32 = *(_DWORD *)(WorldSpace + 0xC);
        v18 = (int)vtbl->GetPos(v14);
        sub_452F10(*(this + 3), v32, v31, *(float *)v18, *(float *)(v18 + 4), *(_DWORD *)(v18 + 8));
      }
      if ( v11 < 0 )
        BSSimpleList_PushFront(this + 8, v14->member.super.refID);
    }
    v19 = (TESObjectCELL *)OblivionDynamicCast(
                             a2,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESObjectCELL `RTTI Type Descriptor',
                             0);
    v20 = v19;
    if ( v19 )
    {
      if ( (v11 & 4) != 0 )
      {
        v32 = v19->members.super.refID;
        v31 = TESObjectCELL_GetWorldSpace(v19)->super.refID;
        YCoordinate = (_DWORD *)TESObjectCELL_GetYCoordinate(v20);
        XCoordinate = TESObjectCELL_GetXCoordinate(v20);
        sub_452FE0(*(this + 4), (_DWORD *)v31, v32, XCoordinate, YCoordinate);
      }
    }
    v6 = v30;
  }
  v22 = sub_453500(this, (char)v6, v38 + 4);
  v23 = SaveLoad_CurrentSavegame;
  LODWORD(v25) = 4;
  v32 = (int)v22;
  SaveLoad_SaveData((int)v23, &Src, v25);
  SaveLoad_SaveFormModifiedFlags__(this, a2, v11);
  a2->vtbl->SaveGame(a2, v11);
  v24 = v32;
  if ( (_DWORD *)(v38 + v32 + 4) != *(this + 5) )
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
      dword_B34D90,
      "SaveGame() call did not properly fill buffer.");
  v6[1] = v24;
  *v6 = v11;
  *(this + 0x21) = 0;
  *(this + 5) = 0;
  NiLeaveCriticalSection_0(&stru_B33B80);
  return 1;
}
