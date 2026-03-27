0x4DB760: push    ebx
0x4DB761: push    esi
0x4DB762: mov     esi, ecx
0x4DB764: call    TESObjectREFR_GetOwner
0x4DB769: xor     bl, bl
0x4DB76B: test    eax, eax
0x4DB76D: jz      short loc_4DB791
0x4DB76F: mov     cl, [eax+4]
0x4DB772: cmp     cl, 6
0x4DB775: jnz     short loc_4DB782
0x4DB777: movzx   eax, byte ptr [eax+34h]
0x4DB77B: shr     eax, 1
0x4DB77D: pop     esi
0x4DB77E: and     al, 1
0x4DB780: pop     ebx
0x4DB781: retn
0x4DB782: cmp     cl, 23h ; '#'
0x4DB785: jnz     short loc_4DB7BD
0x4DB787: pop     esi
0x4DB788: lea     ecx, [eax+24h]
0x4DB78B: pop     ebx
0x4DB78C: jmp     TESActorBaseData_AllFactionsAreEvil
0x4DB791: mov     eax, [esi]
0x4DB793: mov     edx, [eax+128h]
0x4DB799: mov     ecx, esi
0x4DB79B: call    edx
0x4DB79D: test    eax, eax
0x4DB79F: jnz     short loc_4DB7AD
0x4DB7A1: mov     eax, [esi]
0x4DB7A3: mov     edx, [eax+170h]
0x4DB7A9: mov     ecx, esi
0x4DB7AB: call    edx
0x4DB7AD: cmp     byte ptr [eax+4], 23h ; '#'
0x4DB7B1: jnz     short loc_4DB7BD
0x4DB7B3: pop     esi
0x4DB7B4: lea     ecx, [eax+24h]
0x4DB7B7: pop     ebx
0x4DB7B8: jmp     TESActorBaseData_AllFactionsAreEvil
0x4DB7BD: pop     esi
0x4DB7BE: mov     al, bl
0x4DB7C0: pop     ebx
0x4DB7C1: retn
