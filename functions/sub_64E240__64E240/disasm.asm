0x64E240: add     ecx, 3Ch ; '<'
0x64E243: jz      short locret_64E2A5
0x64E245: xor     edx, edx
0x64E247: mov     eax, ecx
0x64E249: lea     esp, [esp+0]
0x64E250: cmp     dword ptr [eax], 0
0x64E253: jz      short loc_64E258
0x64E255: add     edx, 1
0x64E258: mov     eax, [eax+4]
0x64E25B: test    eax, eax
0x64E25D: jnz     short loc_64E250
0x64E25F: test    edx, edx
0x64E261: push    ebx
0x64E262: push    edi
0x64E263: mov     edi, edx
0x64E265: mov     bl, 1
0x64E267: jz      short loc_64E2A3
0x64E269: push    ebp
0x64E26A: push    esi
0x64E26B: jmp     short loc_64E270
0x64E26D: align 10h
0x64E270: test    bl, bl
0x64E272: jz      short loc_64E2A1
0x64E274: xor     bl, bl
0x64E276: test    ecx, ecx
0x64E278: mov     eax, ecx
0x64E27A: jz      short loc_64E299
0x64E27C: lea     esp, [esp+0]
0x64E280: mov     edx, [ecx]
0x64E282: mov     esi, [eax]
0x64E284: mov     ebp, [edx+1Ch]
0x64E287: cmp     ebp, [esi+1Ch]
0x64E28A: jle     short loc_64E292
0x64E28C: mov     [ecx], esi
0x64E28E: mov     [eax], edx
0x64E290: mov     bl, 1
0x64E292: mov     eax, [eax+4]
0x64E295: test    eax, eax
0x64E297: jnz     short loc_64E280
0x64E299: sub     edi, 1
0x64E29C: mov     ecx, [ecx+4]
0x64E29F: jnz     short loc_64E270
0x64E2A1: pop     esi
0x64E2A2: pop     ebp
0x64E2A3: pop     edi
0x64E2A4: pop     ebx
0x64E2A5: retn
