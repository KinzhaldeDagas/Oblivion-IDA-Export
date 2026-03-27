0x9ED5B0: push    offset aEffectsWatersp; "Effects\\waterSplash.NIF"
0x9ED5B5: push    offset aSsplashparticl; "sSplashParticles"
0x9ED5BA: mov     ecx, offset dword_B37B38
0x9ED5BF: call    GameSetting_ConstrAndReg
0x9ED5C4: push    offset sub_A1FD90; void (__cdecl *)()
0x9ED5C9: call    _atexit
0x9ED5CE: pop     ecx
0x9ED5CF: retn
