0x44FBC0: push    esi
0x44FBC1: push    edi
0x44FBC2: mov     esi, ecx
0x44FBC4: xor     edi, edi
0x44FBC6: cmp     [esi+3E0h], edi
0x44FBCC: jz      short loc_44FC13
0x44FBCE: mov     edi, edi
0x44FBD0: mov     eax, [esi+3E0h]
0x44FBD6: push    eax
0x44FBD7: call    FormHeapFree
0x44FBDC: mov     eax, [esi+3E4h]
0x44FBE2: add     esp, 4
0x44FBE5: cmp     eax, edi
0x44FBE7: jz      short loc_44FC05
0x44FBE9: mov     ecx, [eax+4]
0x44FBEC: mov     [esi+3E4h], ecx
0x44FBF2: mov     edx, [eax]
0x44FBF4: push    eax
0x44FBF5: mov     [esi+3E0h], edx
0x44FBFB: call    FormHeapFree
0x44FC00: add     esp, 4
0x44FC03: jmp     short loc_44FC0B
0x44FC05: mov     [esi+3E0h], edi
0x44FC0B: cmp     [esi+3E0h], edi
0x44FC11: jnz     short loc_44FBD0
0x44FC13: cmp     [esi+3E8h], edi
0x44FC19: jz      short loc_44FC63
0x44FC1B: jmp     short loc_44FC20
0x44FC1D: align 10h
0x44FC20: mov     eax, [esi+3E8h]
0x44FC26: push    eax
0x44FC27: call    FormHeapFree
0x44FC2C: mov     eax, [esi+3ECh]
0x44FC32: add     esp, 4
0x44FC35: cmp     eax, edi
0x44FC37: jz      short loc_44FC55
0x44FC39: mov     ecx, [eax+4]
0x44FC3C: mov     [esi+3ECh], ecx
0x44FC42: mov     edx, [eax]
0x44FC44: push    eax
0x44FC45: mov     [esi+3E8h], edx
0x44FC4B: call    FormHeapFree
0x44FC50: add     esp, 4
0x44FC53: jmp     short loc_44FC5B
0x44FC55: mov     [esi+3E8h], edi
0x44FC5B: cmp     [esi+3E8h], edi
0x44FC61: jnz     short loc_44FC20
0x44FC63: mov     [esi+3F0h], edi
0x44FC69: pop     edi
0x44FC6A: pop     esi
0x44FC6B: retn
