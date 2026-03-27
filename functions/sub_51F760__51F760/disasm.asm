0x51F760: push    0FFFFFFFFh
0x51F762: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x51F767: mov     eax, large fs:0
0x51F76D: push    eax
0x51F76E: push    ecx
0x51F76F: push    ebx
0x51F770: push    esi
0x51F771: push    edi
0x51F772: mov     eax, ds:0B30AACh
0x51F777: xor     eax, esp
0x51F779: push    eax
0x51F77A: lea     eax, [esp+20h+var_C]
0x51F77E: mov     large fs:0, eax
0x51F784: mov     esi, ecx
0x51F786: push    1Ch; Size
0x51F788: xor     edi, edi
0x51F78A: call    FormHeapAlloc
0x51F78F: add     esp, 4
0x51F792: mov     [esp+20h+var_10], eax
0x51F796: test    eax, eax
0x51F798: mov     [esp+20h+var_4], edi
0x51F79C: jz      short loc_51F7A7
0x51F79E: mov     ecx, eax
0x51F7A0: call    sub_51F570
0x51F7A5: jmp     short loc_51F7A9
0x51F7A7: xor     eax, eax
0x51F7A9: lea     ebx, [esi+3Ch]
0x51F7AC: mov     edx, ebx
0x51F7AE: xor     ecx, ecx
0x51F7B0: test    edx, edx
0x51F7B2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x51F7BA: jz      short loc_51F7F5
0x51F7BC: lea     esp, [esp+0]
0x51F7C0: mov     esi, [edx+4]
0x51F7C3: test    esi, esi
0x51F7C5: jnz     short loc_51F7CB
0x51F7C7: cmp     [edx], esi
0x51F7C9: jz      short loc_51F7D6
0x51F7CB: mov     ecx, edx
0x51F7CD: mov     edx, esi
0x51F7CF: add     edi, 1
0x51F7D2: test    edx, edx
0x51F7D4: jnz     short loc_51F7C0
0x51F7D6: test    ecx, ecx
0x51F7D8: jz      short loc_51F7F5
0x51F7DA: push    eax
0x51F7DB: call    BSSimpleList_PushBack
0x51F7E0: mov     eax, edi
0x51F7E2: mov     ecx, [esp+20h+var_C]
0x51F7E6: mov     large fs:0, ecx
0x51F7ED: pop     ecx
0x51F7EE: pop     edi
0x51F7EF: pop     esi
0x51F7F0: pop     ebx
0x51F7F1: add     esp, 10h
0x51F7F4: retn
0x51F7F5: push    eax
0x51F7F6: mov     ecx, ebx
0x51F7F8: call    BSSimpleList_PushFront
0x51F7FD: mov     eax, edi
0x51F7FF: mov     ecx, [esp+20h+var_C]
0x51F803: mov     large fs:0, ecx
0x51F80A: pop     ecx
0x51F80B: pop     edi
0x51F80C: pop     esi
0x51F80D: pop     ebx
0x51F80E: add     esp, 10h
0x51F811: retn
