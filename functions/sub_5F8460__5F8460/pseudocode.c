void __thiscall sub_5F8460(TESObjectREFR *this)
{
  _DWORD *AnimData; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  ActorAnimData *v5; // eax
  ActorAnimData *v6; // eax
  int v7; // eax
  TESObjectREFR *v8; // ecx
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  float v12; // [esp+0h] [ebp-8h]
  float v13; // [esp+0h] [ebp-8h]

  if ( *((_DWORD *)this + 0x16) )
  {
    if ( (unsigned int)((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2D0))(*((_DWORD *)this + 0x16))
                      - 2) <= 3 )
    {
      v12 = 0.0;
      if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
        sub_470FC0(AnimData, 3, v12);
        v3 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
        sub_470FC0(v3, 3, 0.0);
        v4 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
        sub_470FC0(v4, 1, 0.0);
        v13 = 0.0;
        v5 = (ActorAnimData *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 0);
      }
      else
      {
        v6 = this->vtbl->GetAnimData(this);
        sub_470FC0(v6, 3, v12);
        v13 = 0.0;
        v5 = this->vtbl->GetAnimData(this);
      }
      sub_470FC0(v5, 1, v13);
      (*(void (__thiscall **)(_DWORD, unsigned int, _DWORD))(**((_DWORD **)this + 0x16) + 0x2D8))(
        *((_DWORD *)this + 0x16),
        0xFFFFFFFF,
        0);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x138))(*((_DWORD *)this + 0x16)) )
      {
        if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          v7 = sub_6600D0(TESDataHandler_g_PlayerRef, 0);
        else
          v7 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl->Unk_5A)(this);
        v8 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        v9 = v7;
        v10 = 1;
        if ( this != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          goto LABEL_15;
        v10 = 2;
        do
        {
          if ( this == v8 && v10 == 1 )
            v9 = sub_6600D0(v8, 1);
LABEL_15:
          v11 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0x12C))(*((_DWORD *)this + 0x16), v9);
          if ( v11 )
            sub_477EF0((_WORD *)(v11 + 0xAC));
          v8 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          if ( this != (TESObjectREFR *)TESDataHandler_g_PlayerRef || v10 == 2 )
          {
            sub_5F8300(this, v9, 0);
            v8 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          }
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
