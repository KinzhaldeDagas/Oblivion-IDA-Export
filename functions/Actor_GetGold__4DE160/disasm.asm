0x4DE160: push    ebx
0x4DE161: push    edi
0x4DE162: mov     edi, ecx
0x4DE164: xor     ebx, ebx
0x4DE166: call    TESObjectREFR_GetContainer
0x4DE16B: test    eax, eax
0x4DE16D: jz      short loc_4DE1AD
0x4DE16F: push    esi
0x4DE170: push    eax
0x4DE171: push    edi; a1
0x4DE172: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DE177: mov     ecx, ds:0B33A98h
0x4DE17D: add     esp, 8
0x4DE180: push    0Fh
0x4DE182: mov     esi, eax
0x4DE184: call    TESDataHandler_LookupFormByID
0x4DE189: test    eax, eax
0x4DE18B: jz      short loc_4DE197
0x4DE18D: push    eax; a2
0x4DE18E: mov     ecx, esi; this
0x4DE190: call    ContainerExtraData_GetItemCount
0x4DE195: mov     ebx, eax
0x4DE197: mov     esi, [esi]
0x4DE199: cmp     dword ptr [esi+4], 0
0x4DE19D: jnz     short loc_4DE1AC
0x4DE19F: cmp     dword ptr [esi], 0
0x4DE1A2: jnz     short loc_4DE1AC
0x4DE1A4: lea     ecx, [edi+44h]
0x4DE1A7: call    ExtraDataList_RemoveContainerExtraData
0x4DE1AC: pop     esi
0x4DE1AD: pop     edi
0x4DE1AE: mov     eax, ebx
0x4DE1B0: pop     ebx
0x4DE1B1: retn
