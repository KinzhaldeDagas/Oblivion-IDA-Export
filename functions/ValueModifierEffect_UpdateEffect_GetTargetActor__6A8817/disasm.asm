0x6A8817: mov     ecx, [esi+20h]; this
0x6A881A: test    ecx, ecx
0x6A881C: push    edi
0x6A881D: jz      short loc_6A8828
0x6A881F: call    MagicTarget_GetParentActor
0x6A8824: mov     edi, eax
0x6A8826: jmp     short ValueModifierEffect_UpdateEffect___TestImmediate
0x6A8828: xor     edi, edi
