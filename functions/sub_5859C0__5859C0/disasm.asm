0x5859C0: push    ebx
0x5859C1: push    esi
0x5859C2: mov     esi, ecx
0x5859C4: mov     al, [esi+31h]
0x5859C7: xor     ebx, ebx
0x5859C9: cmp     al, bl
0x5859CB: jnz     short loc_5859D9
0x5859CD: push    1
0x5859CF: call    sub_585720
0x5859D4: pop     esi
0x5859D5: mov     al, 1
0x5859D7: pop     ebx
0x5859D8: retn
0x5859D9: cmp     al, 1
0x5859DB: jnz     short loc_585A33
0x5859DD: push    1; arg1
0x5859DF: push    ebx; canCreate
0x5859E0: call    InterfaceManager_GetSingleton
0x5859E5: mov     eax, [eax+118h]
0x5859EB: shr     eax, 2
0x5859EE: add     esp, 8
0x5859F1: test    al, 1
0x5859F3: jz      short loc_585A33
0x5859F5: push    ebx
0x5859F6: push    1; arg1
0x5859F8: push    ebx; canCreate
0x5859F9: call    InterfaceManager_GetSingleton
0x5859FE: add     esp, 8
0x585A01: mov     ecx, eax
0x585A03: call    sub_57CFA0
0x585A08: cmp     eax, 3
0x585A0B: jnz     short loc_585A33
0x585A0D: push    1
0x585A0F: push    1; arg1
0x585A11: push    ebx; canCreate
0x585A12: call    InterfaceManager_GetSingleton
0x585A17: add     esp, 8
0x585A1A: mov     ecx, eax
0x585A1C: call    sub_57CFA0
0x585A21: test    eax, eax
0x585A23: jnz     short loc_585A33
0x585A25: push    2
0x585A27: mov     ecx, esi
0x585A29: call    sub_585720
0x585A2E: pop     esi
0x585A2F: xor     al, al
0x585A31: pop     ebx
0x585A32: retn
0x585A33: mov     al, [esi+31h]
0x585A36: cmp     al, bl
0x585A38: mov     [esi+31h], bl
0x585A3B: jle     short loc_585A5F
0x585A3D: push    1
0x585A3F: call    sub_571F90
0x585A44: add     esp, 4
0x585A47: mov     ecx, eax
0x585A49: call    sub_571820
0x585A4E: push    1; arg1
0x585A50: push    ebx; canCreate
0x585A51: call    InterfaceManager_GetSingleton
0x585A56: mov     [eax+0BCh], ebx
0x585A5C: add     esp, 8
0x585A5F: pop     esi
0x585A60: xor     al, al
0x585A62: pop     ebx
0x585A63: retn
