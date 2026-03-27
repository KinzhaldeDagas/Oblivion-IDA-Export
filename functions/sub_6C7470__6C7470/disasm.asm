0x6C7470: sub     esp, 10h
0x6C7473: push    ebx
0x6C7474: mov     ebx, [esp+14h+arg0]
0x6C7478: push    ebp
0x6C7479: push    esi
0x6C747A: push    edi
0x6C747B: push    ebx; arg0
0x6C747C: mov     edi, ecx
0x6C747E: call    sub_700750
0x6C7483: mov     ecx, [ebx]
0x6C7485: lea     eax, [esp+20h+a2]
0x6C7489: push    eax
0x6C748A: push    edi
0x6C748B: call    NiTMap_GetAt
0x6C7490: mov     ebp, [esp+20h+a2]
0x6C7494: xor     esi, esi
0x6C7496: cmp     [edi+0Ch], esi
0x6C7499: mov     [esp+20h+var_C], ebp
0x6C749D: mov     [esp+20h+var_8], esi
0x6C74A1: jbe     loc_6C763A
0x6C74A7: jmp     short loc_6C74B0
0x6C74A9: align 10h
0x6C74B0: mov     ecx, [edi+14h]
0x6C74B3: cmp     dword ptr [ecx+esi], 0
0x6C74B7: lea     eax, [ecx+esi]
0x6C74BA: jz      loc_6C7623
0x6C74C0: cmp     dword ptr [edi+40h], 0
0x6C74C4: jnz     short loc_6C74EC
0x6C74C6: mov     ecx, [eax]
0x6C74C8: mov     edx, [ecx]
0x6C74CA: mov     eax, [edx+38h]
0x6C74CD: push    ebx
0x6C74CE: call    eax
0x6C74D0: mov     ecx, [edi+14h]
0x6C74D3: mov     ecx, [ecx+esi+4]
0x6C74D7: test    ecx, ecx
0x6C74D9: jz      loc_6C7623
0x6C74DF: mov     edx, [ecx]
0x6C74E1: mov     eax, [edx+38h]
0x6C74E4: push    ebx
0x6C74E5: call    eax
0x6C74E7: jmp     loc_6C7623
0x6C74EC: cmp     dword ptr [edi+44h], 0
0x6C74F0: mov     eax, [eax]
0x6C74F2: jnz     short loc_6C7500
0x6C74F4: mov     edx, [eax]
0x6C74F6: mov     ecx, eax
0x6C74F8: mov     eax, [edx+38h]
0x6C74FB: push    ebx
0x6C74FC: call    eax
0x6C74FE: jmp     short loc_6C752D
0x6C7500: lea     ecx, [esp+20h+a2]
0x6C7504: push    ecx
0x6C7505: mov     ecx, [ebx]
0x6C7507: push    eax
0x6C7508: call    NiTMap_GetAt
0x6C750D: mov     ecx, [ebp+14h]
0x6C7510: add     ecx, esi; this
0x6C7512: test    al, al
0x6C7514: jz      short loc_6C7522
0x6C7516: mov     edx, [esp+20h+a2]
0x6C751A: push    edx; a2
0x6C751B: call    NiSmartPointer_Set??
0x6C7520: jmp     short loc_6C752D
0x6C7522: mov     eax, [edi+14h]
0x6C7525: add     eax, esi
0x6C7527: push    eax
0x6C7528: call    sub_55E2A0
0x6C752D: mov     ecx, [edi+14h]
0x6C7530: mov     eax, [ecx+esi+4]
0x6C7534: mov     ecx, [ebx]
0x6C7536: lea     edx, [esp+20h+a2]
0x6C753A: push    edx
0x6C753B: push    eax
0x6C753C: call    NiTMap_GetAt
0x6C7541: test    al, al
0x6C7543: jz      short loc_6C7585
0x6C7545: mov     eax, [ebp+14h]
0x6C7548: mov     ebx, [esi+eax+4]
0x6C754C: lea     ebp, [esi+eax+4]
0x6C7550: mov     eax, [esp+20h+a2]
0x6C7554: cmp     ebx, eax
0x6C7556: jz      loc_6C75DC
0x6C755C: test    ebx, ebx
0x6C755E: jz      short loc_6C7580
0x6C7560: lea     ecx, [ebx+4]
0x6C7563: push    ecx; lpAddend
0x6C7564: call    dword ptr ds:0A2807Ch
0x6C756A: test    eax, eax
0x6C756C: jnz     short loc_6C757C
