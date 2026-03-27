0x4FD520: push    ebx
0x4FD521: push    edi
0x4FD522: lea     edi, [ecx+44h]
0x4FD525: xor     ebx, ebx
0x4FD527: cmp     edi, ebx
0x4FD529: jz      short loc_4FD57D
0x4FD52B: push    esi
0x4FD52C: lea     esp, [esp+0]
0x4FD530: mov     ecx, edi
0x4FD532: call    BSSimpleList_IsEmpty
0x4FD537: test    al, al
0x4FD539: jnz     short loc_4FD57C
0x4FD53B: mov     esi, [edi]
0x4FD53D: cmp     esi, ebx
0x4FD53F: jz      short loc_4FD55C
0x4FD541: mov     eax, [esi]
0x4FD543: push    eax
0x4FD544: call    FormHeapFree
0x4FD549: push    esi
0x4FD54A: mov     [esi], ebx
0x4FD54C: mov     [esi+6], bx
0x4FD550: mov     [esi+4], bx
0x4FD554: call    FormHeapFree
0x4FD559: add     esp, 8
0x4FD55C: mov     eax, [edi+4]
0x4FD55F: cmp     eax, ebx
0x4FD561: jz      short loc_4FD578
0x4FD563: mov     ecx, [eax+4]
0x4FD566: mov     [edi+4], ecx
0x4FD569: mov     edx, [eax]
0x4FD56B: push    eax
0x4FD56C: mov     [edi], edx
0x4FD56E: call    FormHeapFree
0x4FD573: add     esp, 4
0x4FD576: jmp     short loc_4FD530
0x4FD578: mov     [edi], ebx
0x4FD57A: jmp     short loc_4FD530
0x4FD57C: pop     esi
0x4FD57D: pop     edi
0x4FD57E: pop     ebx
0x4FD57F: retn
