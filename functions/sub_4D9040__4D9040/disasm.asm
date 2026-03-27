0x4D9040: push    ebx
0x4D9041: push    esi
0x4D9042: mov     esi, ecx
0x4D9044: xor     bl, bl
0x4D9046: call    TESObjectREFR_GetContainer
0x4D904B: test    eax, eax
0x4D904D: jz      short loc_4D9062
0x4D904F: push    eax
0x4D9050: push    esi; a1
0x4D9051: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D9056: add     esp, 8
0x4D9059: pop     esi
0x4D905A: mov     ecx, eax
0x4D905C: pop     ebx
0x4D905D: jmp     sub_487B60
0x4D9062: pop     esi
0x4D9063: mov     al, bl
0x4D9065: pop     ebx
0x4D9066: retn
