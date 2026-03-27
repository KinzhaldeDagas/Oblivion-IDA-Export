0x5E1CF0: push    ebx
0x5E1CF1: push    esi
0x5E1CF2: mov     esi, ecx
0x5E1CF4: mov     eax, [esi]
0x5E1CF6: mov     edx, [eax+170h]
0x5E1CFC: push    edi
0x5E1CFD: xor     ebx, ebx
0x5E1CFF: call    edx
0x5E1D01: mov     edi, eax
0x5E1D03: test    edi, edi
0x5E1D05: jz      short loc_5E1D19
0x5E1D07: mov     eax, [esi]
0x5E1D09: mov     edx, [eax+190h]
0x5E1D0F: mov     ecx, esi
0x5E1D11: call    edx
0x5E1D13: test    al, al
0x5E1D15: jz      short loc_5E1D19
0x5E1D17: mov     ebx, edi
0x5E1D19: pop     edi
0x5E1D1A: pop     esi
0x5E1D1B: mov     ecx, ebx
0x5E1D1D: pop     ebx
0x5E1D1E: jmp     TESActorBase_CanUseWeaponAndShield
