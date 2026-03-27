0x4A8560: push    ebx
0x4A8561: push    edi
0x4A8562: mov     edi, ecx
0x4A8564: cmp     dword ptr [edi+108h], 0
0x4A856B: setnz   bl
0x4A856E: test    bl, bl
0x4A8570: jz      short loc_4A859B
0x4A8572: push    esi
0x4A8573: lea     esi, [edi+10Ch]
0x4A8579: test    esi, esi
0x4A857B: jz      short loc_4A8595
0x4A857D: lea     ecx, [ecx+0]
0x4A8580: mov     eax, [esi]
0x4A8582: mov     edx, [edi]
0x4A8584: push    eax
0x4A8585: mov     eax, [edx+0Ch]
0x4A8588: mov     ecx, edi
0x4A858A: call    eax
0x4A858C: mov     esi, [esi+4]
0x4A858F: and     bl, al
0x4A8591: test    esi, esi
0x4A8593: jnz     short loc_4A8580
0x4A8595: pop     esi
0x4A8596: pop     edi
0x4A8597: mov     al, bl
0x4A8599: pop     ebx
0x4A859A: retn
0x4A859B: pop     edi
0x4A859C: mov     al, bl
0x4A859E: pop     ebx
0x4A859F: retn
