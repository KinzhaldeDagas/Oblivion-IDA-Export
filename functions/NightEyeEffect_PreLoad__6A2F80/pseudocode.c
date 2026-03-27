void __stdcall NightEyeEffect_PreLoad(PlayerCharacter *a1)
{
  UInt32 v1; // eax

  nullsub_returnvVoid_1arg((int)a1);
  v1 = SaveLoad_CurrentSavegame->unk030[5];
  if ( (v1 == 0x1FFFF000 || v1 == 0x7FFFF000) && a1 == TESDataHandler_g_PlayerRef )
    NightEyeEffect_SetPlayerShader_();
}
