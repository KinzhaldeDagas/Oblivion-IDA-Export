void __thiscall sub_4CEE90(TESObjectCELL *this, int a2, float a3)
{
  TESObjectREFR *v5; // esi
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  float *v8; // eax
  float *v9; // eax
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraData *p_super; // edi
  BSExtraDataVtbl *v12; // eax
  char *v13; // eax
  char *v14; // edi
  int *v15; // eax
  bool v16; // zf
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  char *v22; // eax
  float v23; // ecx
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float v27; // eax
  TESObjectLAND *v28; // eax
  double CellWaterHeight; // st7
  double v30; // st7
  char v31; // [esp+13h] [ebp-21h]
  ObjectListEntry *next; // [esp+14h] [ebp-20h]
  TESObjectREFR *v33; // [esp+18h] [ebp-1Ch]
  TESObjectREFR *v34; // [esp+1Ch] [ebp-18h]
  TESObjectREFR *v35; // [esp+20h] [ebp-14h]
  TESObjectREFR *v36; // [esp+24h] [ebp-10h]
  int v37; // [esp+28h] [ebp-Ch] BYREF
  int v38; // [esp+2Ch] [ebp-8h]
  int v39; // [esp+30h] [ebp-4h]
  float v40; // [esp+38h] [ebp+4h]

  sub_496EA0((char *)&stru_B35C80, this);
  v5 = 0;
  p_objectList = &this->members.objectList;
  v34 = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v31 = 0;
  next = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    while ( p_objectList->next || p_objectList->refr )
    {
      refr = p_objectList->refr;
      if ( (p_objectList->refr->member.super.flags & 0x20) == 0 )
      {
        if ( !v34 && refr->vtbl->GetBaseForm(refr) == TESDataHandler_g_XMarker )
        {
          if ( (this->members.flags0 & 1) != 0 || (v8 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v8)) )
            v34 = refr;
        }
        if ( !v33 && refr->vtbl->GetBaseForm(refr) == (TESForm *)TESDataHandler_g_XMarkerHeading )
        {
          if ( (this->members.flags0 & 1) != 0 || (v9 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v9)) )
            v33 = refr;
        }
        if ( !v31 )
        {
          TeleportExtraData = GetTeleportExtraData(refr);
          p_super = &TeleportExtraData->super;
          if ( TeleportExtraData )
          {
            if ( sub_42B410(&TeleportExtraData->super) )
            {
              v12 = sub_42B410(p_super);
              v13 = (char *)GetTeleportExtraData(v12);
              v14 = v13;
              if ( v13 )
              {
                v15 = (int *)sub_6899C0(v13);
                v16 = (this->members.flags0 & 1) == 0;
                v17 = *v15;
                v18 = v15[1];
                v19 = v15[2];
                v37 = v17;
                v38 = v18;
                v39 = v19;
                if ( !v16 || sub_4CC540((int)this, (float *)&v37) )
                {
                  v20 = v38;
                  v21 = v39;
                  *(_DWORD *)a2 = v37;
                  *(_DWORD *)(a2 + 4) = v20;
                  *(_DWORD *)(a2 + 8) = v21;
                  v22 = sub_42B430(v14);
                  v23 = a3;
                  *(_DWORD *)LODWORD(a3) = *(_DWORD *)v22;
                  *(_DWORD *)(LODWORD(v23) + 4) = *((_DWORD *)v22 + 1);
                  *(_DWORD *)(LODWORD(v23) + 8) = *((_DWORD *)v22 + 2);
                  v31 = 1;
                }
              }
            }
          }
          p_objectList = next;
        }
        if ( !v35 && refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Stat )
        {
          if ( (this->members.flags0 & 1) != 0 || (v24 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v24)) )
            v35 = refr;
        }
        if ( (this->members.flags0 & 1) != 0 || (v25 = refr->vtbl->GetPos(refr), sub_4CC540((int)this, v25)) )
          v36 = refr;
      }
      v5 = v33;
      next = p_objectList->next;
      if ( !next )
        break;
      p_objectList = p_objectList->next;
    }
  }
  sub_496F50(&stru_B35C80, this);
  if ( v5 || (v5 = v34) != 0 || !v31 && ((v5 = v35) != 0 || (v5 = v36) != 0) )
  {
    v26 = v5->vtbl->GetPos(v5);
    *(float *)a2 = *v26;
    *(float *)(a2 + 4) = v26[1];
    *(float *)(a2 + 8) = v26[2];
    v27 = a3;
    *(_DWORD *)LODWORD(a3) = LODWORD(v5->member.rot.x);
    *(float *)(LODWORD(v27) + 4) = v5->member.rot.y;
    *(float *)(LODWORD(v27) + 8) = v5->member.rot.z;
  }
  if ( (this->members.flags0 & 1) == 0 )
  {
    v28 = sub_4CE3C0(this);
    if ( v28 )
    {
      a3 = 0.0;
      sub_4C5B50(v28, (float *)a2, &a3);
      if ( (this->members.flags0 & 2) != 0 )
        CellWaterHeight = GetCellWaterHeight(&this->members.extraData);
      else
        CellWaterHeight = flt_A3B888;
      v40 = CellWaterHeight;
      v30 = a3;
      if ( v40 > (double)a3 )
      {
        a3 = v40;
        v30 = v40;
      }
      if ( *(float *)(a2 + 8) < v30 )
        *(float *)(a2 + 8) = v30;
    }
  }
}
