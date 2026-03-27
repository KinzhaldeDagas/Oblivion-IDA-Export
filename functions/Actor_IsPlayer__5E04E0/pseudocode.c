BOOL __thiscall Actor_IsPlayer(TESObjectREFR *this)
{
  return this == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
}
