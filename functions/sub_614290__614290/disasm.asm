0x614290: push    esi; Returns current-target reachability at +0x174, additionally forcing false when a non-water-capable actor cannot fight a swimming target.
0x614291: mov     esi, ecx
0x614293: call    CombatController_GetCurrentTarget
0x614298: test    eax, eax
0x61429A: jz      short loc_6142C8
0x61429C: mov     ecx, esi
0x61429E: call    CombatController_GetCurrentTarget
0x6142A3: mov     ecx, eax; this
0x6142A5: call    Actor_IsSwimming; Return true only when Actor.process exists and its movement-state flags contain 0x800 (Swimming).
0x6142AA: test    al, al
0x6142AC: jz      short loc_6142C8
0x6142AE: mov     ecx, [esi+3Ch]; this
0x6142B1: call    Actor_IsSwimming; Return true only when Actor.process exists and its movement-state flags contain 0x800 (Swimming).
0x6142B6: test    al, al
0x6142B8: jnz     short loc_6142C8
0x6142BA: mov     ecx, [esi+3Ch]
0x6142BD: call    Actor_CanFightInWater
0x6142C2: test    al, al
0x6142C4: jnz     short loc_6142C8
0x6142C6: pop     esi
0x6142C7: retn
0x6142C8: mov     al, [esi+174h]
0x6142CE: pop     esi
0x6142CF: retn
