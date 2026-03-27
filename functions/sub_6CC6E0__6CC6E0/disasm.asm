0x6CC6E0: push    0FFFFFFFFh
0x6CC6E2: push    offset SEH_6CC6E0
0x6CC6E7: mov     eax, large fs:0
0x6CC6ED: push    eax
0x6CC6EE: push    ecx
0x6CC6EF: push    ebx
0x6CC6F0: push    ebp
0x6CC6F1: push    esi
0x6CC6F2: push    edi
0x6CC6F3: mov     eax, ds:0B30AACh
0x6CC6F8: xor     eax, esp
0x6CC6FA: push    eax
0x6CC6FB: lea     eax, [esp+24h+var_C]
0x6CC6FF: mov     large fs:0, eax
0x6CC705: mov     esi, ecx
0x6CC707: movzx   eax, [esp+24h+arg_4]
0x6CC70C: xor     ebx, ebx
0x6CC70E: mov     [esp+24h+var_10], ebx
0x6CC712: mov     ecx, [esi+14h]
0x6CC715: mov     edx, [esp+24h+arg_0]
0x6CC719: lea     eax, [eax+eax*2]
0x6CC71C: lea     edi, [ecx+eax*8]
0x6CC71F: mov     eax, [edi]
0x6CC721: cmp     eax, ebx
0x6CC723: mov     [edx], eax
0x6CC725: jz      short loc_6CC731
0x6CC727: add     eax, 4
0x6CC72A: push    eax; lpAddend
0x6CC72B: call    dword ptr ds:0A28078h
0x6CC731: mov     ebp, [edi]
0x6CC733: test    ebp, ebp
0x6CC735: mov     [esp+24h+var_4], ebx
0x6CC739: mov     bl, [edi+0Ch]
0x6CC73C: mov     [esp+24h+var_10], 1
0x6CC744: jz      short loc_6CC769
0x6CC746: lea     eax, [ebp+4]
0x6CC749: push    eax; lpAddend
0x6CC74A: call    dword ptr ds:0A2807Ch
0x6CC750: test    eax, eax
0x6CC752: jnz     short loc_6CC763
0x6CC754: test    ebp, ebp
0x6CC756: jz      short loc_6CC763
0x6CC758: mov     edx, [ebp+0]
0x6CC75B: mov     eax, [edx]
0x6CC75D: push    1
0x6CC75F: mov     ecx, ebp
0x6CC761: call    eax
0x6CC763: mov     dword ptr [edi], 0
0x6CC769: fldz
0x6CC76B: mov     byte ptr [edi+0Ch], 0
0x6CC76F: fst     dword ptr [edi+4]
0x6CC772: fst     dword ptr [edi+8]
0x6CC775: fstp    dword ptr [edi+10h]
0x6CC778: fld     dword ptr ds:0A79F00h
0x6CC77E: fstp    dword ptr [edi+14h]
0x6CC781: cmp     bl, [esi+10h]
0x6CC784: jz      short loc_6CC78B
0x6CC786: cmp     bl, [esi+11h]
0x6CC789: jnz     short loc_6CC7D6
0x6CC78B: mov     al, 80h ; '€'
0x6CC78D: xor     bl, bl
0x6CC78F: cmp     [esi+0Dh], bl
0x6CC792: mov     [esi+11h], al
0x6CC795: mov     [esi+10h], al
0x6CC798: jbe     short loc_6CC7D6
0x6CC79A: mov     edi, [esi+14h]
0x6CC79D: lea     ecx, [ecx+0]
0x6CC7A0: movzx   eax, bl
0x6CC7A3: lea     ecx, [eax+eax*2]
0x6CC7A6: cmp     dword ptr [edi+ecx*8], 0
0x6CC7AA: lea     eax, [edi+ecx*8]
0x6CC7AD: jz      short loc_6CC7CE
0x6CC7AF: mov     cl, [eax+0Ch]
0x6CC7B2: cmp     cl, [esi+11h]
0x6CC7B5: jle     short loc_6CC7CE
0x6CC7B7: mov     dl, [esi+10h]
0x6CC7BA: cmp     cl, dl
0x6CC7BC: jle     short loc_6CC7C9
0x6CC7BE: mov     [esi+11h], dl
0x6CC7C1: mov     dl, [eax+0Ch]
0x6CC7C4: mov     [esi+10h], dl
0x6CC7C7: jmp     short loc_6CC7CE
0x6CC7C9: jge     short loc_6CC7CE
0x6CC7CB: mov     [esi+11h], cl
0x6CC7CE: add     bl, 1
0x6CC7D1: cmp     bl, [esi+0Dh]
0x6CC7D4: jb      short loc_6CC7A0
0x6CC7D6: mov     cl, 0FFh
0x6CC7D8: add     [esi+0Eh], cl
0x6CC7DB: mov     al, [esi+0Eh]
0x6CC7DE: cmp     al, 1
0x6CC7E0: jnz     short loc_6CC82E
0x6CC7E2: mov     cl, [esi+0Dh]
0x6CC7E5: cmp     cl, 2
0x6CC7E8: jnz     short loc_6CC7F7
0x6CC7EA: cmp     [esp+24h+arg_4], 0
0x6CC7EF: setz    al
0x6CC7F2: mov     [esi+0Fh], al
0x6CC7F5: jmp     short loc_6CC816
0x6CC7F7: xor     al, al
0x6CC7F9: test    cl, cl
0x6CC7FB: jbe     short loc_6CC816
0x6CC7FD: mov     edx, [esi+14h]
0x6CC800: movzx   ecx, al
0x6CC803: lea     ecx, [ecx+ecx*2]
0x6CC806: cmp     dword ptr [edx+ecx*8], 0
0x6CC80A: jz      short loc_6CC80F
0x6CC80C: mov     [esi+0Fh], al
0x6CC80F: add     al, 1
0x6CC811: cmp     al, [esi+0Dh]
0x6CC814: jb      short loc_6CC800
0x6CC816: movzx   eax, byte ptr [esi+0Fh]
0x6CC81A: lea     edx, [eax+eax*2]
0x6CC81D: mov     eax, [esi+14h]
0x6CC820: mov     ecx, [eax+edx*8]
0x6CC823: lea     eax, [eax+edx*8]
0x6CC826: mov     [esi+18h], ecx
0x6CC829: fld     dword ptr [eax+14h]
0x6CC82C: jmp     short loc_6CC842
0x6CC82E: test    al, al
0x6CC830: jnz     short loc_6CC845
0x6CC832: fld     dword ptr ds:0A79F00h
0x6CC838: mov     [esi+0Fh], cl
0x6CC83B: mov     dword ptr [esi+18h], 0
0x6CC842: fstp    dword ptr [esi+20h]
0x6CC845: fld     dword ptr ds:0A7DEB4h
0x6CC84B: mov     eax, [esp+24h+arg_0]
0x6CC84F: fchs
0x6CC851: fstp    dword ptr [esi+24h]
0x6CC854: fld     dword ptr ds:0A7DEB4h
0x6CC85A: fchs
0x6CC85C: fstp    dword ptr [esi+28h]
0x6CC85F: fld     dword ptr ds:0A7DEB4h
0x6CC865: or      byte ptr [esi+0Ch], 4
0x6CC869: fchs
0x6CC86B: fstp    dword ptr [esi+2Ch]
0x6CC86E: mov     ecx, dword ptr [esp+24h+var_C]
0x6CC872: mov     large fs:0, ecx
0x6CC879: pop     ecx
0x6CC87A: pop     edi
0x6CC87B: pop     esi
0x6CC87C: pop     ebp
0x6CC87D: pop     ebx
0x6CC87E: add     esp, 10h
0x6CC881: retn    8
