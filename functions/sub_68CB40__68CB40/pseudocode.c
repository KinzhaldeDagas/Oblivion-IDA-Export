void __thiscall sub_68CB40(float *this, void *a2)
{
  TESObjectCELL *currentInteriorCell; // edi
  TESWorldSpace *CurrentWorldspace; // eax
  TESWaterForm *WaterForm; // eax
  double v6; // [esp+18h] [ebp-8h]

  if ( (*(_BYTE *)this & 0x20) == 0 )
  {
    *(_BYTE *)this &= ~1u;
    currentInteriorCell = TES->currentInteriorCell;
    if ( currentInteriorCell
      || TES::GetCurrentWorldspace(TES)
      && (CurrentWorldspace = TES::GetCurrentWorldspace(TES),
          (currentInteriorCell = (TESObjectCELL *)sub_44A270(
                                                    (TESWorldSpace **)TESDataHandler,
                                                    *(this + 1),
                                                    *(this + 2),
                                                    CurrentWorldspace,
                                                    0)) != 0) )
    {
      v6 = *(this + 3);
      if ( TESObjectCELL_GetWaterHeight((ExtraDataList *)currentInteriorCell) > v6 )
      {
        *(_BYTE *)this |= 4u;
        WaterForm = TESObjectCELL::GetWaterForm(currentInteriorCell);
        if ( WaterForm
          && ((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm)
          && (*(int (__thiscall **)(void *, int))(*(_DWORD *)a2 + 0x284))(a2, 0x47) <= 0 )
        {
          *(_BYTE *)this |= 0x10u;
        }
        else
        {
          *(_BYTE *)this &= ~0x10u;
        }
        if ( Actor_IsUnderwater__(a2, (int)(this + 1), (ExtraDataList *)currentInteriorCell, flt_A6E688) )
          *(_BYTE *)this |= 8u;
        else
          *(_BYTE *)this &= ~8u;
        *(_BYTE *)this |= 0x20u;
        return;
      }
      *(_BYTE *)this &= 0xE3u;
    }
    *(_BYTE *)this |= 0x20u;
  }
}
