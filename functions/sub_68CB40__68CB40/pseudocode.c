void __thiscall sub_68CB40(float *this, void *a2)
{
  TESObjectCELL *currentInteriorCell; // edi
  TESWorldSpace *CurrentWorldspace; // eax
  TESWaterForm *WaterForm; // eax
  double v6; // [esp+18h] [ebp-8h]

  if ( (*(_BYTE *)this & 0x20) == 0 ) /*0x68cb51*/
  {
    *(_BYTE *)this &= ~1u; /*0x68cb59*/
    currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x68cb62*/
    if ( currentInteriorCell /*0x68cba2*/
      || TES::GetCurrentWorldspace(MEMORY[0xB333A0])
      && (CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]),
          (currentInteriorCell = (TESObjectCELL *)sub_44A270(
                                                    (TESWorldSpace **)g_TESDataHandler,
                                                    *(this + 1),
                                                    *(this + 2),
                                                    CurrentWorldspace,
                                                    0)) != 0) )
    {
      v6 = *(this + 3); /*0x68cbad*/
      if ( TESObjectCELL_GetWaterHeight((ExtraDataList *)currentInteriorCell) > v6 ) /*0x68cbbf*/
      {
        *(_BYTE *)this |= 4u; /*0x68cbc1*/
        WaterForm = TESObjectCELL::GetWaterForm(currentInteriorCell); /*0x68cbc7*/
        if ( WaterForm /*0x68cbf4*/
          && ((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm)
          && (*(int (__thiscall **)(void *, int))(*(_DWORD *)a2 + 0x284))(a2, 0x47) <= 0 )
        {
          *(_BYTE *)this |= 0x10u; /*0x68cbf6*/
        }
        else
        {
          *(_BYTE *)this &= ~0x10u; /*0x68cbfb*/
        }
        if ( Actor_IsUnderwater__(a2, (int)(this + 1), (ExtraDataList *)currentInteriorCell, flt_A6E688) ) /*0x68cc0f*/
          *(_BYTE *)this |= 8u; /*0x68cc19*/
        else
          *(_BYTE *)this &= ~8u; /*0x68cc27*/
        *(_BYTE *)this |= 0x20u; /*0x68cc1c*/
        return; /*0x68cc24*/
      }
      *(_BYTE *)this &= 0xE3u; /*0x68cc35*/
    }
    *(_BYTE *)this |= 0x20u; /*0x68cc38*/
  }
}
