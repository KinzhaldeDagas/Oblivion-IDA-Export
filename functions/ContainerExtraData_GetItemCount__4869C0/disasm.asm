0x4869C0: push    ebx
0x4869C1: push    esi
0x4869C2: mov     esi, ecx
0x4869C4: mov     ecx, [esi+4]; this
0x4869C7: test    ecx, ecx
0x4869C9: push    edi
0x4869CA: jz      short loc_4869D3
0x4869CC: call    TESObjectREFR_GetContainer
0x4869D1: jmp     short ContainerExtraData_GetItemCount___GetBaseContainerCount
0x4869D3: xor     eax, eax
0x4869D5: mov     edi, [esp+0Ch+a2]
0x4869D9: push    edi
0x4869DA: mov     ecx, eax
0x4869DC: call    TESContainer_GetFormCount
0x4869E1: test    eax, eax
0x4869E3: jge     short loc_4869E7
0x4869E5: neg     eax
0x4869E7: mov     ecx, [esi]
0x4869E9: test    ecx, ecx
0x4869EB: mov     bl, 1
0x4869ED: jz      short ContainerExtraData_GetItemCount___Done
0x4869EF: nop
0x4869F0: test    bl, bl
0x4869F2: jz      short ContainerExtraData_GetItemCount___AddExtraCountDelta
0x4869F4: mov     edx, [ecx]
0x4869F6: test    edx, edx
0x4869F8: jz      short ContainerExtraData_GetItemCount___EntryLoop_Next
0x4869FA: cmp     [edx+8], edi
0x4869FD: jnz     short ContainerExtraData_GetItemCount___EntryLoop_Next
0x4869FF: xor     bl, bl
0x486A01: jmp     short loc_486A06
0x486A03: mov     ecx, [ecx+4]
0x486A06: test    ecx, ecx
0x486A08: jnz     short ContainerExtraData_GetItemCount___EntryLoop
0x486A0A: pop     edi
0x486A0B: pop     esi
0x486A0C: pop     ebx
0x486A0D: retn    4
0x486A10: test    ecx, ecx
0x486A12: jz      short ContainerExtraData_GetItemCount___Done
0x486A14: mov     ecx, [ecx]
0x486A16: test    ecx, ecx
0x486A18: jz      short ContainerExtraData_GetItemCount___Done
0x486A1A: test    eax, eax
0x486A1C: jnz     short loc_486A2E
0x486A1E: cmp     [ecx+4], eax
0x486A21: jnz     short loc_486A2E
0x486A23: pop     edi
0x486A24: pop     esi
0x486A25: mov     eax, 1
0x486A2A: pop     ebx
0x486A2B: retn    4
0x486A2E: add     eax, [ecx+4]
0x486A31: pop     edi
0x486A32: pop     esi
0x486A33: pop     ebx
0x486A34: retn    4
