void __thiscall sub_63F700(int *this, TESObjectREFR *a2)
{
  TESObjectCELL *currentInteriorCell; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v5; // eax
  WaterManager *waterManager; // ebp
  TESObjectCELL *v7; // eax
  float *v8; // eax
  float *v9; // eax
  int v10; // eax
  TESObjectCELL *v11; // eax
  int v12; // ecx
  double WaterHeight; // [esp+10h] [ebp-8h]

  if ( byte_B07090 )
  {
    currentInteriorCell = TES->currentInteriorCell;
    if ( !currentInteriorCell || (currentInteriorCell->members.flags0 & 2) != 0 )
    {
      ParentCell = TESObjectREFR_GetParentCell(a2);
      WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell);
      if ( a2->vtbl->GetPos(a2)[2] >= WaterHeight
        || (v5 = TESObjectREFR_GetParentCell(a2), Actor_IsUnderwater__(
                                                    a2,
                                                    (int)a2->member.pos,
                                                    (ExtraDataList *)v5,
                                                    1.0)) )
      {
        v12 = *(this + 0xA2);
        if ( v12 )
        {
          if ( flt_A31C80 <= (double)*(float *)(v12 + 0x14) )
          {
            *(_BYTE *)(v12 + 0x10) = 1;
            *(this + 0xA2) = 0;
          }
          else
          {
            *(float *)(v12 + 0x14) = GetTimer(1, 1) + *(float *)(v12 + 0x14);
          }
          if ( ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2) )
          {
            *(_BYTE *)(*(this + 0xA2) + 0x10) = 1;
            *(this + 0xA2) = 0;
          }
        }
      }
      else
      {
        waterManager = TES->waterManager;
        if ( waterManager )
        {
          if ( !*(this + 0xA2)
            && !IsLavaReal
            && !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2)
            && !a2->vtbl->IsDead(a2, 0) )
          {
            v7 = TESObjectREFR_GetParentCell(a2);
            if ( (TESObjectCELL_GetWaterHeight((ExtraDataList *)v7) == *(float *)&SrcStr || TES->currentInteriorCell)
              && (a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef || (int)waterManager->unk3C <= 8) )
            {
              v8 = (float *)FormHeapAlloc(0x24u);
              if ( v8 )
                v9 = sub_634860(v8);
              else
                v9 = 0;
              *(this + 0xA2) = (int)v9;
              DisplacementMapConstructor____((Ni2DBuffer **)v9);
              *(_DWORD *)*(this + 0xA2) = a2;
              sub_634890(waterManager, *(this + 0xA2));
              WaterGeometryPAss(waterManager, (float *)*(this + 0xA2), 1);
            }
          }
        }
        v10 = *(this + 0xA2);
        if ( v10 )
          *(float *)(v10 + 0x14) = 0.0;
        if ( *(this + 0xA2) )
        {
          if ( ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2)
            || a2->vtbl->IsDead(a2, 0)
            || (v11 = TESObjectREFR_GetParentCell(a2),
                TESObjectCELL_GetWaterHeight((ExtraDataList *)v11) != *(float *)&SrcStr)
            && !TES->currentInteriorCell )
          {
            *(_BYTE *)(*(this + 0xA2) + 0x10) = 1;
            *(this + 0xA2) = 0;
          }
        }
      }
    }
  }
}
