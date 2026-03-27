0x4533F0: cmp     byte ptr [esp+arg_4], 0
0x4533F5: push    esi
0x4533F6: push    edi
0x4533F7: mov     edi, [esp+8+arg_0]
0x4533FB: mov     esi, ecx
0x4533FD: jz      short loc_45342B
0x4533FF: mov     ecx, [esi+4]
0x453402: test    ecx, ecx
0x453404: jz      short loc_45342B
0x453406: mov     edx, [edi+0Ch]
0x453409: lea     eax, [esp+8+arg_4]
0x45340D: push    eax
0x45340E: push    edx
0x45340F: mov     [esp+10h+arg_4], 0
0x453417: call    NiTMap_GetAt
0x45341C: mov     eax, [esp+8+arg_4]
0x453420: test    eax, eax
0x453422: jz      short loc_45342B
0x453424: mov     eax, [eax]
0x453426: pop     edi
0x453427: pop     esi
0x453428: retn    8
0x45342B: mov     ecx, [edi+0Ch]
0x45342E: lea     eax, [esp+8+arg_4]
0x453432: push    eax
0x453433: push    ecx
0x453434: mov     ecx, [esi]
0x453436: mov     [esp+10h+arg_4], 0
0x45343E: call    NiTMap_GetAt
0x453443: mov     eax, [esp+8+arg_4]
0x453447: test    eax, eax
0x453449: jnz     short loc_453424
0x45344B: pop     edi
0x45344C: pop     esi
0x45344D: retn    8
