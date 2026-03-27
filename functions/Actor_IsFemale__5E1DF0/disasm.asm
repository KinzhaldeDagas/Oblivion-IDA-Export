0x5E1DF0: push    ebx
0x5E1DF1: push    esi
0x5E1DF2: mov     esi, ecx
0x5E1DF4: mov     eax, [esi]
0x5E1DF6: mov     edx, [eax+170h]
0x5E1DFC: push    edi
0x5E1DFD: xor     ebx, ebx
0x5E1DFF: call    edx
0x5E1E01: mov     edi, eax
0x5E1E03: test    edi, edi
0x5E1E05: jz      short loc_5E1E19
0x5E1E07: mov     eax, [esi]
0x5E1E09: mov     edx, [eax+190h]
0x5E1E0F: mov     ecx, esi
0x5E1E11: call    edx
0x5E1E13: test    al, al
0x5E1E15: jz      short loc_5E1E19
0x5E1E17: mov     ebx, edi
0x5E1E19: pop     edi
0x5E1E1A: pop     esi
0x5E1E1B: mov     ecx, ebx
0x5E1E1D: pop     ebx
0x5E1E1E: jmp     TESActorBase_IsFemale
