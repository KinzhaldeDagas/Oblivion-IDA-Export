void __thiscall MagicTarget_ProcessEffects(MagicTarget *this, int a2)
{
  MagicTarget *v3; // esi
  TESObjectREFR *v4; // eax
  TESObjectREFR *v5; // eax
  TESObjectREFR *v6; // eax
  TESObjectCELL *ParentCell; // eax

  this->vtbl->GetEffectList(this);
  if ( !this->vtbl->GetActiveEffectList(this) )
    goto LABEL_9;
  v3 = this + 0xFFFFFFF3;
  if ( this == (MagicTarget *)0x68 || v3[0xB].vtbl )
  {
    v4 = this->vtbl->GetParent(this);
    if ( v4->vtbl->GetNiNode(v4) )
    {
      v5 = this->vtbl->GetParent(this);
      if ( TESObjectREFR_GetParentCell(v5) )
      {
        v6 = this->vtbl->GetParent(this);
        ParentCell = TESObjectREFR_GetParentCell(v6);
        if ( TESObjectCELL_GetNiNode_(ParentCell) )
        {
          if ( !LOBYTE(v3[0xF].vtbl) )
            sub_45A500(SaveLoad_CurrentSavegame);
LABEL_9:
          MagicTarget_ProcessEffects_::ActvEffLoop_Start();
          return;
        }
      }
    }
  }
  MagicTarget_ProcessEffects_::Done(a2);
}
