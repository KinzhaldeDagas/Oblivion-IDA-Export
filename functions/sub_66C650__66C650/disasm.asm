0x66C650: push    esi
0x66C651: mov     esi, ecx
0x66C653: cmp     byte ptr [esi+589h], 0
0x66C65A: jz      short loc_66C69D
0x66C65C: mov     ecx, [esi+58h]
0x66C65F: mov     eax, [ecx]
0x66C661: mov     edx, [eax+2D0h]
0x66C667: call    edx
0x66C669: cmp     eax, 0FFFFFFFFh
0x66C66C: jnz     short loc_66C69D
0x66C66E: mov     ecx, [esi+58h]
0x66C671: mov     eax, [ecx]
0x66C673: mov     edx, [eax+2E4h]
0x66C679: call    edx
0x66C67B: test    eax, eax
0x66C67D: jnz     short loc_66C69D
0x66C67F: cmp     [esi+58Ah], al
0x66C685: mov     [esi+589h], al
0x66C68B: jz      short loc_66C696
0x66C68D: push    1; a1
0x66C68F: mov     ecx, esi; this
0x66C691: call    TogglePOV
0x66C696: mov     byte ptr [esi+58Ah], 0
0x66C69D: pop     esi
0x66C69E: retn
