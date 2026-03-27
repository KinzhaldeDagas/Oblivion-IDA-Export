0x6A4D80: push    ebx
0x6A4D81: mov     ebx, ecx
0x6A4D83: mov     ecx, [ebx+20h]; this
0x6A4D86: test    ecx, ecx
0x6A4D88: push    esi
0x6A4D89: push    edi
0x6A4D8A: jz      short loc_6A4D95
0x6A4D8C: call    MagicTarget_GetParentActor
0x6A4D91: mov     edi, eax
0x6A4D93: jmp     short loc_6A4D97
0x6A4D95: xor     edi, edi
0x6A4D97: mov     ecx, [ebx+24h]; this
0x6A4D9A: test    ecx, ecx
0x6A4D9C: jz      short loc_6A4DA7
0x6A4D9E: call    MagicCaster_GetParentActor
0x6A4DA3: mov     esi, eax
0x6A4DA5: jmp     short loc_6A4DA9
0x6A4DA7: xor     esi, esi
0x6A4DA9: test    edi, edi
0x6A4DAB: jz      short loc_6A4DD5
0x6A4DAD: mov     eax, [edi]
0x6A4DAF: mov     edx, [eax+198h]
0x6A4DB5: push    0
0x6A4DB7: mov     ecx, edi
0x6A4DB9: call    edx
0x6A4DBB: test    al, al
0x6A4DBD: jnz     short loc_6A4DD5
0x6A4DBF: test    esi, esi
0x6A4DC1: jz      short loc_6A4DD5
0x6A4DC3: mov     eax, [esi]
0x6A4DC5: mov     edx, [eax+198h]
0x6A4DCB: push    0
0x6A4DCD: mov     ecx, esi
0x6A4DCF: call    edx
0x6A4DD1: test    al, al
0x6A4DD3: jz      short loc_6A4DDE
0x6A4DD5: push    0
0x6A4DD7: mov     ecx, ebx
0x6A4DD9: call    ActiveEffect_Base_Remove
0x6A4DDE: pop     edi
0x6A4DDF: pop     esi
0x6A4DE0: pop     ebx
0x6A4DE1: retn    4
