0x68E708: mov     eax, [eax+98h]
0x68E70E: push    eax
0x68E70F: call    Magic_GetShieldType
0x68E714: add     esp, 4
0x68E717: test    eax, eax
0x68E719: jz      ActiveEffect_Base_ProcessEffect___UpdateHUDActiveEffectList
0x68E71F: fld     dword ptr [esi+18h]
0x68E722: fcomp   qword ptr ds:0A309F0h
0x68E728: fnstsw  ax
0x68E72A: test    ah, 5
0x68E72D: jp      ActiveEffect_Base_ProcessEffect___UpdateHUDActiveEffectList
0x68E733: cmp     dword ptr [esi+28h], 4
0x68E737: jnz     short ActiveEffect_Base_ProcessEffect___TestIngred
0x68E739: or      dword ptr [esi+14h], 4
