0x9EA0D0: push    offset aEffectsBloodsp; "Effects\\BloodSpray.nif"
0x9EA0D5: push    offset aSbloodparticle; "sBloodParticleDefault"
0x9EA0DA: mov     ecx, offset sBloodParticleDefault
0x9EA0DF: call    GameSetting_ConstrAndReg
0x9EA0E4: push    offset sub_A1EA80; void (__cdecl *)()
0x9EA0E9: call    _atexit
0x9EA0EE: pop     ecx
0x9EA0EF: retn
