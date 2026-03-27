0x5E6C60: push    esi
0x5E6C61: mov     esi, ecx
0x5E6C63: call    Actor_IsNPC
0x5E6C68: test    al, al
0x5E6C6A: jz      short loc_5E6CC3
0x5E6C6C: mov     ecx, esi; this
0x5E6C6E: call    Actor_IsNPC
0x5E6C73: test    al, al
0x5E6C75: jz      short loc_5E6CC3
0x5E6C77: mov     eax, [esi]
0x5E6C79: mov     edx, [eax+170h]
0x5E6C7F: mov     ecx, esi
0x5E6C81: call    edx
0x5E6C83: test    eax, eax
0x5E6C85: jz      short loc_5E6CC3
0x5E6C87: cmp     dword ptr [eax+104h], 0
0x5E6C8E: jz      short loc_5E6CC3
0x5E6C90: mov     ecx, esi; this
0x5E6C92: call    Actor_IsNPC
0x5E6C97: test    al, al
0x5E6C99: jz      short loc_5E6CB9
0x5E6C9B: mov     eax, [esi]
0x5E6C9D: mov     edx, [eax+170h]
0x5E6CA3: mov     ecx, esi
0x5E6CA5: call    edx
0x5E6CA7: test    eax, eax
0x5E6CA9: jz      short loc_5E6CB9
0x5E6CAB: mov     eax, [eax+104h]
0x5E6CB1: mov     ecx, eax
0x5E6CB3: pop     esi
0x5E6CB4: jmp     TESClass__IsGuardClass
0x5E6CB9: xor     eax, eax
0x5E6CBB: mov     ecx, eax
0x5E6CBD: pop     esi
0x5E6CBE: jmp     TESClass__IsGuardClass
0x5E6CC3: xor     al, al
0x5E6CC5: pop     esi
0x5E6CC6: retn
