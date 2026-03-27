0x69F190: push    ebx
0x69F191: push    esi
0x69F192: push    1; a2
0x69F194: mov     esi, ecx
0x69F196: mov     bl, 1
0x69F198: call    TESObjectREFR_GetParentCell
0x69F19D: mov     ecx, ds:0B333A0h
0x69F1A3: push    eax; a1
0x69F1A4: call    TESObjectCELL_IsProcessLevel?LowHigh
0x69F1A9: test    al, al
0x69F1AB: jnz     short loc_69F1C1
0x69F1AD: test    esi, esi
0x69F1AF: jz      short loc_69F1BC
0x69F1B1: mov     eax, [esi]
0x69F1B3: mov     edx, [eax+10h]
0x69F1B6: push    1
0x69F1B8: mov     ecx, esi
0x69F1BA: call    edx
0x69F1BC: pop     esi
0x69F1BD: xor     al, al
0x69F1BF: pop     ebx
0x69F1C0: retn
0x69F1C1: pop     esi
0x69F1C2: mov     al, bl
0x69F1C4: pop     ebx
0x69F1C5: retn
