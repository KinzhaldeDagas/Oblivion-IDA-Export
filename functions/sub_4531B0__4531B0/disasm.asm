0x4531B0: push    ebx
0x4531B1: push    esi
0x4531B2: push    edi
0x4531B3: push    8; Size
0x4531B5: mov     ebx, ecx
0x4531B7: call    FormHeapAlloc
0x4531BC: mov     esi, [esp+10h+arg_4]
0x4531C0: mov     edi, eax
0x4531C2: mov     eax, [esp+10h+arg_0]
0x4531C6: mov     [edi], eax
0x4531C8: mov     eax, esi
0x4531CA: add     esp, 4
0x4531CD: lea     edx, [eax+1]
0x4531D0: mov     cl, [eax]
0x4531D2: add     eax, 1
0x4531D5: test    cl, cl
0x4531D7: jnz     short loc_4531D0
0x4531D9: sub     eax, edx
0x4531DB: push    1
0x4531DD: add     eax, 1
0x4531E0: push    eax
0x4531E1: mov     ecx, offset FormHeap
0x4531E6: call    j_MemoryHeap_Alloc
0x4531EB: mov     [edi+4], eax
0x4531EE: mov     ecx, esi
0x4531F0: mov     edx, eax
0x4531F2: mov     al, [ecx]
0x4531F4: mov     [edx], al
0x4531F6: add     ecx, 1
0x4531F9: add     edx, 1
0x4531FC: test    al, al
0x4531FE: jnz     short loc_4531F2
0x453200: mov     esi, [ebx+4]
0x453203: cmp     dword ptr [esi], 0
0x453206: jz      short loc_45323D
0x453208: push    8; Size
0x45320A: call    FormHeapAlloc
0x45320F: add     esp, 4
0x453212: test    eax, eax
0x453214: jz      short loc_453232
0x453216: mov     ecx, [esi]
0x453218: mov     [eax], ecx
0x45321A: mov     dword ptr [eax+4], 0
0x453221: mov     edx, [esi+4]
0x453224: mov     [eax+4], edx
0x453227: mov     [esi], edi
0x453229: pop     edi
0x45322A: mov     [esi+4], eax
0x45322D: pop     esi
0x45322E: pop     ebx
0x45322F: retn    8
0x453232: mov     edx, [esi+4]
0x453235: xor     eax, eax
0x453237: mov     [eax+4], edx
0x45323A: mov     [esi+4], eax
0x45323D: mov     [esi], edi
0x45323F: pop     edi
0x453240: pop     esi
0x453241: pop     ebx
0x453242: retn    8
