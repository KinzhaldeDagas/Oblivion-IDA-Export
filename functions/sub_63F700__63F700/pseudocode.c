void __thiscall sub_63F700(int *this, TESObjectREFR *a2)
{
  TESObjectCELL *currentInteriorCell; // eax
  ExtraDataList *DwordAtOffset40; // eax
  ExtraDataList *v5; // eax
  WaterManager *waterManager; // ebp
  ExtraDataList *v7; // eax
  float *v8; // eax
  float *v9; // eax
  int v10; // eax
  ExtraDataList *v11; // eax
  int v12; // ecx
  double WaterHeight; // [esp+10h] [ebp-8h]

  if ( byte_B07090 ) /*0x63f703*/
  {
    currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x63f718*/
    if ( !currentInteriorCell || (currentInteriorCell->members.flags0 & 2) != 0 ) /*0x63f728*/
    {
      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(a2); /*0x63f736*/
      WaterHeight = TESObjectCELL_GetWaterHeight(DwordAtOffset40); /*0x63f742*/
      if ( a2->vtbl->GetPos(a2)[2] >= WaterHeight /*0x63f778*/
        || (v5 = (ExtraDataList *)Shared_GetDwordAtOffset40(a2), Actor_IsUnderwater__(a2, (int)a2->member.pos, v5, 1.0)) )
      {
        v12 = *(this + 0xA2); /*0x63f8df*/
        if ( v12 ) /*0x63f8e7*/
        {
          if ( flt_A31C80 <= (double)*(float *)(v12 + 0x14) ) /*0x63f8f7*/
          {
            *(_BYTE *)(v12 + 0x10) = 1; /*0x63f90f*/
            *(this + 0xA2) = 0; /*0x63f913*/
          }
          else
          {
            *(float *)(v12 + 0x14) = GetTimer(1, 1) + *(float *)(v12 + 0x14); /*0x63f90a*/
          }
          if ( ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2) ) /*0x63f927*/
          {
            *(_BYTE *)(*(this + 0xA2) + 0x10) = 1; /*0x63f933*/
            *(this + 0xA2) = 0; /*0x63f937*/
          }
        }
      }
      else
      {
        waterManager = MEMORY[0xB333A0]->waterManager; /*0x63f78b*/
        if ( waterManager ) /*0x63f790*/
        {
          if ( !*(this + 0xA2) /*0x63f7cf*/
            && !MEMORY[0xB45DBA]
            && !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2)
            && !a2->vtbl->IsDead(a2, 0) )
          {
            v7 = (ExtraDataList *)Shared_GetDwordAtOffset40(a2); /*0x63f7db*/
            if ( (TESObjectCELL_GetWaterHeight(v7) == *(float *)&SrcStr || MEMORY[0xB333A0]->currentInteriorCell) /*0x63f80b*/
              && (a2 == (TESObjectREFR *)reference || (int)waterManager->unk3C <= 8) )
            {
              v8 = (float *)FormHeapAlloc(0x24u); /*0x63f80f*/
              if ( v8 ) /*0x63f819*/
                v9 = sub_634860(v8); /*0x63f81d*/
              else
                v9 = 0; /*0x63f824*/
              *(this + 0xA2) = (int)v9; /*0x63f829*/
              DisplacementMapConstructor____((Ni2DBuffer **)v9); /*0x63f82f*/
              *(_DWORD *)*(this + 0xA2) = a2; /*0x63f83a*/
              sub_634890(waterManager, *(this + 0xA2)); /*0x63f845*/
              WaterGeometryPAss(waterManager, (float *)*(this + 0xA2), 1); /*0x63f855*/
            }
          }
        }
        v10 = *(this + 0xA2); /*0x63f85a*/
        if ( v10 ) /*0x63f862*/
          *(float *)(v10 + 0x14) = 0.0; /*0x63f866*/
        if ( *(this + 0xA2) ) /*0x63f869*/
        {
          if ( ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2) /*0x63f8bc*/
            || a2->vtbl->IsDead(a2, 0)
            || (v11 = (ExtraDataList *)Shared_GetDwordAtOffset40(a2),
                TESObjectCELL_GetWaterHeight(v11) != *(float *)&SrcStr)
            && !MEMORY[0xB333A0]->currentInteriorCell )
          {
            *(_BYTE *)(*(this + 0xA2) + 0x10) = 1; /*0x63f8c9*/
            *(this + 0xA2) = 0; /*0x63f8ce*/
          }
        }
      }
    }
  }
}
