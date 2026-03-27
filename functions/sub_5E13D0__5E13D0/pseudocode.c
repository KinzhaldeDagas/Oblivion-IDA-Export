void __thiscall sub_5E13D0(TESObjectREFR *this, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *AnimData; // eax
  _DWORD *v7; // eax
  ActorAnimData *v8; // eax

  if ( ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this) )
  {
    v3 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x164))(v3) )
    {
      v4 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this);
      v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x164))(v4);
      sub_473200(v5, a2);
    }
  }
  if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    if ( Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) )
    {
      AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
      sub_473200(AnimData, a2);
    }
    if ( Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0) )
    {
      v7 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
      sub_473200(v7, a2);
    }
  }
  else if ( this->vtbl->GetAnimData(this) )
  {
    v8 = this->vtbl->GetAnimData(this);
    sub_473200(v8, a2);
  }
}
