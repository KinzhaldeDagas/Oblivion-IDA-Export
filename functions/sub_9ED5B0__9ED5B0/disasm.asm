0x9ED5B0: push    offset aEffectsWatersp; "Effects\\waterSplash.NIF"
0x9ED5B5: push    offset aSsplashparticl; "sSplashParticles"
0x9ED5BA: mov     ecx, 0B37B38h; self
0x9ED5BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ED5C4: push    offset sub_A1FD90; void (__cdecl *)()
0x9ED5C9: call    _atexit
0x9ED5CE: pop     ecx
0x9ED5CF: retn
