0x68E80F: fldz; Verified first-application completion: sets ActiveEffect.bApplied=1 and resets timeElapsed to 0 before update processing.
0x68E811: mov     byte ptr [esi+10h], 1; Verified: after first Apply processing and HUD/effect-setting checks, sets bApplied=true and resets timeElapsed to 0.
0x68E815: fstp    dword ptr [esi+4]
