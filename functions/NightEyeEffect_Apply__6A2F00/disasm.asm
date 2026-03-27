0x6A2F00: fld1
0x6A2F02: push    esi
0x6A2F03: mov     esi, ecx
0x6A2F05: fstp    dword ptr [esi+18h]
0x6A2F08: call    ValueModifierEffect_Apply
0x6A2F0D: mov     ecx, [esi+20h]
0x6A2F10: mov     eax, [ecx]
0x6A2F12: mov     edx, [eax+4]
0x6A2F15: call    edx
0x6A2F17: cmp     eax, ds:0B333C4h
0x6A2F1D: pop     esi
0x6A2F1E: jnz     short NightEyeEffect_Apply___Done
0x6A2F20: jmp     NightEyeEffect_SetPlayerShader?
