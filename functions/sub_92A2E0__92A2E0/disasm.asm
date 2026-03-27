0x92A2E0: mov     eax, [esp+arg_4]
0x92A2E4: push    esi
0x92A2E5: mov     edx, ecx
0x92A2E7: mov     ecx, [esp+4+arg_8]
0x92A2EB: mov     esi, eax
0x92A2ED: xor     esi, ecx
0x92A2EF: test    esi, 0FFFF0000h
0x92A2F5: jnz     short loc_92A32F
0x92A2F7: test    eax, 0FFFF0000h
0x92A2FC: jz      short loc_92A32F
0x92A2FE: mov     edx, ecx
0x92A300: shr     edx, 5
0x92A303: xor     edx, eax
0x92A305: test    edx, 3E0h
0x92A30B: jnz     short loc_92A318
0x92A30D: mov     eax, [esp+4+arg_0]
0x92A311: mov     byte ptr [eax], 0
0x92A314: pop     esi
0x92A315: retn    0Ch
0x92A318: shr     eax, 5
0x92A31B: xor     eax, ecx
0x92A31D: test    eax, 3E0h
0x92A322: mov     eax, [esp+4+arg_0]
0x92A326: jz      short loc_92A311
0x92A328: mov     byte ptr [eax], 1
0x92A32B: pop     esi
0x92A32C: retn    0Ch
0x92A32F: and     ecx, 1Fh
0x92A332: mov     esi, 1
0x92A337: shl     esi, cl
0x92A339: and     eax, 1Fh
0x92A33C: mov     ecx, [edx+eax*4+1Ch]
0x92A340: mov     eax, [esp+4+arg_0]
0x92A344: test    ecx, esi
0x92A346: setnz   cl
0x92A349: mov     [eax], cl
0x92A34B: pop     esi
0x92A34C: retn    0Ch
