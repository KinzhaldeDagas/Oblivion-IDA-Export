int __thiscall Actor_MagicCaster_GetMagicNode(_DWORD *this)
{
  _DWORD *v2; // edi
  _DWORD *AnimData; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v2 = this + 0xFFFFFFE9;
  if ( (*(int (__thiscall **)(_DWORD *))(*(this + 0xFFFFFFE9) + 0x154))(this + 0xFFFFFFE9)
    && (this + 0xFFFFFFE9 != (_DWORD *)TESDataHandler_g_PlayerRef
     || !PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)
     || (PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)->members.super.m_flags & 1) == 0
      ? (AnimData = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 0x164))(v2))
      : (AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1)),
        AnimData
     && (v4 = AnimData[0x26]) != 0
     && (v5 = *(_DWORD *)(v4 + 0x7C)) != 0
     && (v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 0x4C))(v5, "magicNode")) != 0) )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  }
  else
  {
    return 0;
  }
}
