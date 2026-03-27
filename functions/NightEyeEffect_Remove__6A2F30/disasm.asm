0x6A2F30: push    esi
0x6A2F31: mov     esi, ecx
0x6A2F33: call    ValueModifierEffect_Remove
0x6A2F38: mov     ecx, [esi+20h]
0x6A2F3B: mov     eax, [ecx]
0x6A2F3D: mov     edx, [eax+4]
0x6A2F40: call    edx
0x6A2F42: cmp     eax, ds:0B333C4h
0x6A2F48: pop     esi
0x6A2F49: jnz     short locret_6A2F50
0x6A2F4B: jmp     NightEyeEffect_SetPlayerShader?
0x6A2F50: retn
