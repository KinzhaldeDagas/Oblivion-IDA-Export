0x76FCF0: push    esi
0x76FCF1: mov     esi, ecx
0x76FCF3: mov     ecx, [esp+4+arg_0]
0x76FCF7: cmp     ecx, [esi+1Ch]
0x76FCFA: jb      short loc_76FD02
0x76FCFC: xor     al, al
0x76FCFE: pop     esi
0x76FCFF: retn    8
0x76FD02: mov     eax, [esp+4+arg_4]
0x76FD06: cmp     eax, [esi+20h]
0x76FD09: jnb     short loc_76FCFC
0x76FD0B: mov     edx, [esi+24h]
0x76FD0E: push    edi
0x76FD0F: shl     eax, 4
0x76FD12: mov     eax, [edx+eax+8]
0x76FD16: lea     edi, ds:0[ecx*8]
0x76FD1D: sub     edi, ecx
0x76FD1F: lea     eax, [eax+edi*4]
0x76FD22: mov     dword ptr [eax+8], 0FFFFFFFFh
0x76FD29: mov     dword ptr [eax+0Ch], 11h
0x76FD30: mov     eax, [esi+30h]
0x76FD33: test    eax, eax
0x76FD35: mov     byte ptr [esi+28h], 1
0x76FD39: pop     edi
0x76FD3A: jz      short loc_76FD4B
0x76FD3C: mov     ecx, [eax]
0x76FD3E: mov     edx, [ecx+8]
0x76FD41: push    eax
0x76FD42: call    edx
0x76FD44: mov     dword ptr [esi+30h], 0
0x76FD4B: mov     al, 1
0x76FD4D: pop     esi
0x76FD4E: retn    8
