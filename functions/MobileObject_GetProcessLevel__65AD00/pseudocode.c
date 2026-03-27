UInt32 __thiscall MobileObject_GetProcessLevel(MobileObject *this)
{
  TESObjectCELL *ParentCell; // edi

  if ( sub_45A500(SaveLoad_CurrentSavegame) || !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
    if ( !sub_45A500(SaveLoad_CurrentSavegame) && !this->super.niNode && !sub_4354F0(ModelLoaderPtr, (int)this) )
      goto LABEL_20;
    if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 1) )
      return 0;
    if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
    {
      return 1;
    }
    else
    {
LABEL_20:
      if ( ParentCell && TESObjectCELL_HasMiddleLowProcess(ParentCell)
        || TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
      {
        return 2;
      }
      else
      {
        return 3;
      }
    }
  }
  else if ( this->process )
  {
    return this->process->GetProcessLevel(this->process);
  }
  else
  {
    return 0xFFFFFFFF;
  }
}
