0x67A760: push    0FFFFFFFFh
0x67A762: push    offset SEH_7C77C0
0x67A767: mov     eax, large fs:0
0x67A76D: push    eax
0x67A76E: push    ebx
0x67A76F: push    esi
0x67A770: push    edi
0x67A771: mov     eax, ds:0B30AACh
0x67A776: xor     eax, esp
0x67A778: push    eax
0x67A779: lea     eax, [esp+1Ch+var_C]
0x67A77D: mov     large fs:0, eax
0x67A783: mov     esi, ecx
0x67A785: mov     ebx, [esp+1Ch+arg_0]
0x67A789: test    ebx, ebx
0x67A78B: mov     [esp+1Ch+var_4], 0
0x67A793: jz      short loc_67A80E
0x67A795: call    sub_677CA0
0x67A79A: test    al, al
0x67A79C: jnz     short loc_67A80E
0x67A79E: test    esi, esi
0x67A7A0: mov     ecx, esi
0x67A7A2: mov     eax, esi
0x67A7A4: jz      short loc_67A800
0x67A7A6: cmp     [ecx], ebx
0x67A7A8: jz      short loc_67A7C1
0x67A7AA: mov     eax, ecx
0x67A7AC: mov     ecx, [ecx+4]
0x67A7AF: test    ecx, ecx
0x67A7B1: jnz     short loc_67A7A6
0x67A7B3: lea     eax, [ebx+4]
0x67A7B6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x67A7BE: push    eax
0x67A7BF: jmp     short loc_67A81E
0x67A7C1: cmp     ecx, esi
0x67A7C3: jnz     short loc_67A7F3
0x67A7C5: mov     edi, [esi+4]
0x67A7C8: test    edi, edi
0x67A7CA: mov     ecx, esi; this
0x67A7CC: jz      short loc_67A7DE
0x67A7CE: mov     eax, [edi+4]
0x67A7D1: push    edi
0x67A7D2: mov     [esi+4], eax
0x67A7D5: call    sub_55E2A0
0x67A7DA: mov     ecx, edi
0x67A7DC: jmp     short loc_67A7F9
0x67A7DE: push    0; a2
0x67A7E0: call    NiSmartPointer_Set??
0x67A7E5: lea     eax, [ebx+4]
0x67A7E8: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x67A7F0: push    eax
0x67A7F1: jmp     short loc_67A81E
0x67A7F3: mov     edx, [ecx+4]
0x67A7F6: mov     [eax+4], edx
0x67A7F9: push    1
0x67A7FB: call    sub_67A1F0
0x67A800: lea     eax, [ebx+4]
0x67A803: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x67A80B: push    eax
0x67A80C: jmp     short loc_67A81E
0x67A80E: test    ebx, ebx
0x67A810: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x67A818: jz      short loc_67A832
0x67A81A: lea     ecx, [ebx+4]
0x67A81D: push    ecx; lpAddend
0x67A81E: call    dword ptr ds:0A2807Ch
0x67A824: test    eax, eax
0x67A826: jnz     short loc_67A832
0x67A828: mov     edx, [ebx]
0x67A82A: mov     eax, [edx]
0x67A82C: push    1
0x67A82E: mov     ecx, ebx
0x67A830: call    eax
0x67A832: mov     ecx, dword ptr [esp+1Ch+var_C]
0x67A836: mov     large fs:0, ecx
0x67A83D: pop     ecx
0x67A83E: pop     edi
0x67A83F: pop     esi
0x67A840: pop     ebx
0x67A841: add     esp, 0Ch
0x67A844: retn    4
