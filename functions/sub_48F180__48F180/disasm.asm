0x48F180: push    ecx
0x48F181: push    ebx
0x48F182: mov     ebx, [ecx]
0x48F184: mov     eax, ebx
0x48F186: test    eax, eax
0x48F188: mov     [esp+8+var_4], ebx
0x48F18C: jz      loc_48F381
0x48F192: push    ebp
0x48F193: push    esi
0x48F194: push    edi
0x48F195: mov     eax, ebx
0x48F197: mov     ebp, [eax]
0x48F199: test    ebp, ebp
0x48F19B: jz      loc_48F37E
0x48F1A1: mov     eax, [ebp+0]
0x48F1A4: test    eax, eax
0x48F1A6: jz      loc_48F32C
0x48F1AC: lea     esp, [esp+0]
0x48F1B0: mov     edi, [eax]
0x48F1B2: test    edi, edi
0x48F1B4: jz      loc_48F32C
0x48F1BA: mov     ecx, [eax+4]
0x48F1BD: test    ecx, ecx
0x48F1BF: jz      short loc_48F1D6
0x48F1C1: mov     edx, [ecx+4]
0x48F1C4: mov     [eax+4], edx
0x48F1C7: mov     edx, [ecx]
0x48F1C9: push    ecx
0x48F1CA: mov     [eax], edx
0x48F1CC: call    FormHeapFree
0x48F1D1: add     esp, 4
0x48F1D4: jmp     short loc_48F1DC
0x48F1D6: mov     dword ptr [eax], 0
0x48F1DC: test    edi, edi
0x48F1DE: jz      loc_48F31D
0x48F1E4: mov     ecx, edi
0x48F1E6: call    sub_41E790
0x48F1EB: mov     esi, eax
0x48F1ED: test    esi, esi
0x48F1EF: jz      loc_48F31D
0x48F1F5: mov     ecx, esi; this
0x48F1F7: call    TESObjectREFR_GetContainer
0x48F1FC: test    eax, eax
0x48F1FE: mov     ecx, edi
0x48F200: jz      loc_48F303
0x48F206: call    sub_4234B0
0x48F20B: mov     ecx, edi
0x48F20D: call    BaseExtraList_Count
0x48F212: cmp     eax, 2
0x48F215: jnb     short loc_48F22A
0x48F217: mov     ecx, edi
0x48F219: call    ExtraDataList_GetExtraCount
0x48F21E: test    ax, ax
0x48F221: jz      short loc_48F22A
0x48F223: mov     ecx, edi
0x48F225: call    sub_41F620
0x48F22A: mov     ecx, [ebp+0]
0x48F22D: push    edi
0x48F22E: call    BSSimpleList_Remove
0x48F233: lea     ecx, [esi+44h]; this
0x48F236: call    ExtraDataList_GetContainerChanges
0x48F23B: test    eax, eax
0x48F23D: mov     bl, 1
0x48F23F: jz      short loc_48F299
0x48F241: mov     eax, [eax]
0x48F243: test    eax, eax
0x48F245: mov     esi, [ebp+8]
0x48F248: mov     dl, bl
0x48F24A: jz      short loc_48F299
0x48F24C: lea     esp, [esp+0]
0x48F250: test    dl, dl
0x48F252: jz      short loc_48F26C
0x48F254: mov     ecx, [eax]
0x48F256: test    ecx, ecx
0x48F258: jz      short loc_48F263
0x48F25A: cmp     [ecx+8], esi
0x48F25D: jnz     short loc_48F263
0x48F25F: xor     dl, dl
0x48F261: jmp     short loc_48F266
0x48F263: mov     eax, [eax+4]
0x48F266: test    eax, eax
0x48F268: jnz     short loc_48F250
0x48F26A: jmp     short loc_48F299
0x48F26C: test    eax, eax
0x48F26E: jz      short loc_48F299
0x48F270: mov     eax, [eax]
0x48F272: test    eax, eax
0x48F274: jz      short loc_48F299
0x48F276: mov     eax, [eax]
0x48F278: test    eax, eax
0x48F27A: jz      short loc_48F299
0x48F27C: mov     ecx, eax
0x48F27E: mov     edi, edi
0x48F280: mov     eax, [ecx]
0x48F282: test    eax, eax
0x48F284: jz      short loc_48F299
0x48F286: test    bl, bl
0x48F288: jz      short loc_48F299
0x48F28A: cmp     eax, edi
0x48F28C: jnz     short loc_48F292
0x48F28E: xor     bl, bl
0x48F290: jmp     short loc_48F295
0x48F292: mov     ecx, [ecx+4]
0x48F295: test    ecx, ecx
0x48F297: jnz     short loc_48F280
0x48F299: mov     ecx, ds:0B333C4h
0x48F29F: add     ecx, 44h ; 'D'; this
0x48F2A2: call    ExtraDataList_GetContainerChanges
0x48F2A7: test    eax, eax
0x48F2A9: jz      short loc_48F2FD
0x48F2AB: mov     eax, [eax]
0x48F2AD: test    eax, eax
0x48F2AF: mov     esi, [ebp+8]
0x48F2B2: mov     dl, 1
0x48F2B4: jz      short loc_48F2FD
0x48F2B6: test    dl, dl
0x48F2B8: jz      short loc_48F2D2
0x48F2BA: mov     ecx, [eax]
0x48F2BC: test    ecx, ecx
0x48F2BE: jz      short loc_48F2C9
0x48F2C0: cmp     [ecx+8], esi
0x48F2C3: jnz     short loc_48F2C9
0x48F2C5: xor     dl, dl
0x48F2C7: jmp     short loc_48F2CC
0x48F2C9: mov     eax, [eax+4]
0x48F2CC: test    eax, eax
0x48F2CE: jnz     short loc_48F2B6
0x48F2D0: jmp     short loc_48F2FD
0x48F2D2: test    eax, eax
0x48F2D4: jz      short loc_48F2FD
0x48F2D6: mov     eax, [eax]
0x48F2D8: test    eax, eax
0x48F2DA: jz      short loc_48F2FD
0x48F2DC: mov     eax, [eax]
0x48F2DE: test    eax, eax
0x48F2E0: jz      short loc_48F2FD
0x48F2E2: mov     ecx, eax
0x48F2E4: mov     eax, [ecx]
0x48F2E6: test    eax, eax
0x48F2E8: jz      short loc_48F2FD
0x48F2EA: test    bl, bl
0x48F2EC: jz      short loc_48F31D
0x48F2EE: cmp     eax, edi
0x48F2F0: jnz     short loc_48F2F6
0x48F2F2: xor     bl, bl
0x48F2F4: jmp     short loc_48F2F9
0x48F2F6: mov     ecx, [ecx+4]
0x48F2F9: test    ecx, ecx
0x48F2FB: jnz     short loc_48F2E4
0x48F2FD: test    bl, bl
0x48F2FF: jz      short loc_48F31D
0x48F301: jmp     short loc_48F313
0x48F303: call    sub_4234B0
0x48F308: mov     ecx, edi
0x48F30A: call    ExtraDataList_GetExtraScript
0x48F30F: test    eax, eax
0x48F311: jnz     short loc_48F31D
0x48F313: mov     eax, [edi]
0x48F315: mov     edx, [eax]
0x48F317: push    1
0x48F319: mov     ecx, edi
0x48F31B: call    edx
0x48F31D: mov     eax, [ebp+0]
0x48F320: test    eax, eax
0x48F322: mov     ebx, [esp+14h+var_4]
0x48F326: jnz     loc_48F1B0
0x48F32C: push    ebp
0x48F32D: mov     ecx, ebx
0x48F32F: call    BSSimpleList_Remove
0x48F334: mov     esi, [ebp+0]
0x48F337: test    esi, esi
0x48F339: jz      short loc_48F35D
0x48F33B: cmp     dword ptr [esi+4], 0
0x48F33F: jz      short loc_48F357
0x48F341: mov     eax, [esi+4]
0x48F344: mov     edi, [eax+4]
0x48F347: push    eax
0x48F348: call    FormHeapFree
0x48F34D: add     esp, 4
0x48F350: test    edi, edi
0x48F352: mov     [esi+4], edi
0x48F355: jnz     short loc_48F341
0x48F357: mov     dword ptr [esi], 0
0x48F35D: mov     eax, [ebp+0]
0x48F360: push    eax
0x48F361: call    FormHeapFree
0x48F366: push    ebp
0x48F367: mov     dword ptr [ebp+0], 0
0x48F36E: call    FormHeapFree
0x48F373: add     esp, 8
0x48F376: test    ebx, ebx
0x48F378: jnz     loc_48F195
0x48F37E: pop     edi
0x48F37F: pop     esi
0x48F380: pop     ebp
0x48F381: pop     ebx
0x48F382: pop     ecx
0x48F383: retn
