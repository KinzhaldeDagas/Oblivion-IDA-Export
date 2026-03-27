char __fastcall sub_65B5C0(TESObjectREFR *this, int a2, int a3)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v5; // edi
  Concurrency::details::SchedulerBase *v6; // ecx
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v8; // esi
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // eax
  double WaterHeight; // st7
  _DWORD *v13; // ecx
  char v14; // bl
  int v15; // eax
  _WORD *niNode; // esi
  _DWORD *v17; // ecx
  char v19; // [esp+Fh] [ebp-Dh]
  int *v20; // [esp+10h] [ebp-Ch]
  int *v21; // [esp+14h] [ebp-8h]
  float v22; // [esp+18h] [ebp-4h] BYREF

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
  v5 = CharProxy;
  if ( CharProxy )
  {
    v6 = this->vtbl->IsActor(this) ? (Concurrency::details::SchedulerBase *)this : 0;
    if ( !v6
      || (v19 = 1,
          Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v6) != (struct Concurrency::details::ScheduleGroupBase *)2) )
    {
      v19 = 0;
    }
    ParentCell = TESObjectREFR_GetParentCell(this);
    v8 = (ExtraDataList *)ParentCell;
    if ( ParentCell )
    {
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v20 = (int *)sub_424180(v8 + 2);
      else
        v20 = (int *)bhkWorldM;
    }
    else
    {
      v20 = 0;
    }
    v9 = *((_DWORD **)v5 + 2);
    if ( v9 )
      v10 = sub_8AC0C0(v9);
    else
      v10 = 0;
    v11 = *(_DWORD *)(v10 + 8);
    if ( v11 )
      v21 = *(int **)(v11 + 0x2B0);
    else
      v21 = 0;
    if ( v20 != v21 )
    {
      *((_DWORD *)v5 + 0xA8) = 0;
      if ( v8 )
        WaterHeight = TESObjectCELL_GetWaterHeight(v8);
      else
        WaterHeight = 0.0;
      v22 = WaterHeight;
      *((float *)v5 + 0xC6) = v22 * hkFactor;
      if ( !v19 )
        sub_895060(v5, v20);
      sub_452A10(v5, (NiPoint3 *)this->member.pos);
    }
    v13 = *((_DWORD **)v5 + 0xD9);
    v14 = 0;
    if ( v13 )
      v15 = sub_89F6B0(v13, 0);
    else
      v15 = 0;
    niNode = this->member.niNode;
    if ( (_WORD *)v15 != niNode )
    {
      v17 = *((_DWORD **)v5 + 0xD9);
      if ( v17 )
        sub_89F650(v17, (int)niNode, 0);
    }
    LOBYTE(CharProxy) = (_BYTE)v21;
    if ( v21 != v20 )
    {
      if ( v21 )
        LOBYTE(CharProxy) = sub_88CD50(niNode, 1, 0);
      v14 = 1;
    }
    if ( v20 )
    {
      if ( v14 )
      {
        sub_57E270(v5, &v22);
        LOBYTE(CharProxy) = (*(int (__thiscall **)(int *, _WORD *, int, _DWORD, _DWORD, _DWORD))(*v20 + 0x90))(
                              v20,
                              niNode,
                              1,
                              0,
                              HIWORD(LODWORD(v22)),
                              0);
      }
      else
      {
        LOBYTE(CharProxy) = sub_88CDC0(niNode, 1, 0);
      }
    }
  }
  return (char)CharProxy;
}
