0x45A300: mov     ecx, [ecx+1Ch]
0x45A303: test    ecx, ecx
0x45A305: jz      short locret_45A36E
0x45A307: push    esi
0x45A308: mov     esi, [ecx+0Ch]
0x45A30B: xor     eax, eax
0x45A30D: test    esi, esi
0x45A30F: jbe     short loc_45A36D
0x45A311: mov     edx, [ecx+4]
0x45A314: push    ebx
0x45A315: mov     ebx, [esp+8+arg_0]
0x45A319: push    edi
0x45A31A: lea     ebx, [ebx+0]
0x45A320: mov     edi, [edx]
0x45A322: test    edi, edi
0x45A324: jz      short loc_45A32A
0x45A326: cmp     [edi], ebx
0x45A328: jz      short loc_45A33A
0x45A32A: add     eax, 1
0x45A32D: add     edx, 4
0x45A330: cmp     eax, esi
0x45A332: jb      short loc_45A320
0x45A334: pop     edi
0x45A335: pop     ebx
0x45A336: pop     esi
0x45A337: retn    4
0x45A33A: cmp     eax, esi
0x45A33C: jnb     short loc_45A362
0x45A33E: mov     edx, [ecx+4]
0x45A341: mov     esi, [edx+eax*4]
0x45A344: test    esi, esi
0x45A346: lea     edx, [edx+eax*4]
0x45A349: mov     dword ptr [edx], 0
0x45A34F: jz      short loc_45A355
0x45A351: add     dword ptr [ecx+10h], 0FFFFFFFFh
0x45A355: mov     edx, [ecx+0Ch]
0x45A358: add     edx, 0FFFFFFFFh
0x45A35B: cmp     eax, edx
0x45A35D: jnz     short loc_45A362
0x45A35F: mov     [ecx+0Ch], edx
0x45A362: push    edi
0x45A363: call    FormHeapFree
0x45A368: add     esp, 4
0x45A36B: pop     edi
0x45A36C: pop     ebx
0x45A36D: pop     esi
0x45A36E: retn    4
