void __thiscall VampirismEffect_Remove(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  TESObjectREFR *v4; // esi
  TESObjectCELL *ParentCell; // eax
  UInt8 cellProcessLevel; // al
  float v7; // [esp+8h] [ebp-Ch]

  v2 = *((MagicTarget **)this + 8);
  if ( v2 )
  {
    ParentActor = MagicTarget_GetParentActor(v2);
    v4 = (TESObjectREFR *)ParentActor;
    if ( ParentActor )
    {
      if ( ParentActor == (Actor *)TESDataHandler_g_PlayerRef )
      {
        v7 = -*(this + 6);
        ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->ModBaseAV_F)(ParentActor, 0x45, LODWORD(v7));
      }
      ParentCell = TESObjectREFR_GetParentCell(v4);
      if ( ParentCell )
      {
        cellProcessLevel = ParentCell->members.cellProcessLevel;
        if ( cellProcessLevel == 6 || cellProcessLevel == 3 || cellProcessLevel == 5 || cellProcessLevel == 2 )
        {
          sub_60E2E0(v4, 0.0);
          g_bUpdatePlayerModel = 1;
          (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v4[1].vtbl->super.super.InitializeComponent + 0xC7))(
            v4[1].vtbl,
            1);
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))v4[1].vtbl->super.super.InitializeComponent
           + 0xC6))(
            v4[1].vtbl,
            v4);
          g_bUpdatePlayerModel = 0;
        }
      }
    }
  }
}
