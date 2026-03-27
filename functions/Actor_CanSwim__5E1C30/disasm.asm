0x5E1C30: push    ebx
0x5E1C31: push    esi
0x5E1C32: mov     esi, ecx
0x5E1C34: mov     eax, [esi]
0x5E1C36: mov     edx, [eax+170h]
0x5E1C3C: push    edi
0x5E1C3D: xor     ebx, ebx
0x5E1C3F: call    edx
0x5E1C41: mov     edi, eax
0x5E1C43: test    edi, edi
0x5E1C45: jz      short loc_5E1C59
0x5E1C47: mov     eax, [esi]
0x5E1C49: mov     edx, [eax+190h]
0x5E1C4F: mov     ecx, esi
0x5E1C51: call    edx
0x5E1C53: test    al, al
0x5E1C55: jz      short loc_5E1C59
0x5E1C57: mov     ebx, edi
0x5E1C59: pop     edi
0x5E1C5A: pop     esi
0x5E1C5B: mov     ecx, ebx
0x5E1C5D: pop     ebx
0x5E1C5E: jmp     TESActorBase_CanSwim
