0x51C860: push    esi
0x51C861: mov     esi, ecx
0x51C863: mov     eax, [esi+28h]
0x51C866: shr     eax, 8
0x51C869: test    al, 1
0x51C86B: jz      short loc_51C893
0x51C86D: push    edi
0x51C86E: mov     edi, [esi+100h]
0x51C874: test    edi, edi
0x51C876: jz      short loc_51C888
0x51C878: mov     ecx, edi
0x51C87A: call    CreatureSoundArray_ClearAllSounds
0x51C87F: push    edi
0x51C880: call    FormHeapFree
0x51C885: add     esp, 4
0x51C888: mov     dword ptr [esi+100h], 0
0x51C892: pop     edi
0x51C893: mov     edx, [esi+11Ch]
0x51C899: mov     eax, [edx+4]
0x51C89C: lea     ecx, [esi+11Ch]
0x51C8A2: call    eax
0x51C8A4: mov     edx, [esi+134h]
0x51C8AA: mov     eax, [edx+4]
0x51C8AD: lea     ecx, [esi+134h]
0x51C8B3: call    eax
0x51C8B5: mov     ecx, esi
0x51C8B7: pop     esi
0x51C8B8: jmp     j_TESForm_ClearComponentReferences
