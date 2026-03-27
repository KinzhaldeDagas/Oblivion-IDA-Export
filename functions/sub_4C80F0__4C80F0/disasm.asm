0x4C80F0: sub     esp, 24h
0x4C80F3: push    ebp
0x4C80F4: mov     ebp, ecx
0x4C80F6: test    byte ptr [ebp+1Ch], 8
0x4C80FA: jz      loc_4C8201
0x4C8100: cmp     [esp+28h+arg_0], 0
0x4C8105: jnz     short loc_4C811D
0x4C8107: lea     eax, [esp+28h+var_20]
0x4C810B: push    0
0x4C810D: mov     ecx, eax
0x4C810F: push    0
0x4C8111: push    ecx
0x4C8112: mov     ecx, ebp
0x4C8114: mov     [esp+34h+arg_0], eax
0x4C8118: call    sub_4C7A30
0x4C811D: push    ebx
0x4C811E: push    esi
0x4C811F: push    edi
0x4C8120: xor     ebx, ebx
0x4C8122: xor     esi, esi
0x4C8124: xor     edi, edi
0x4C8126: jmp     short loc_4C8130
0x4C8128: align 10h
0x4C8130: lea     ecx, [esi+1]
0x4C8133: lea     edx, [ecx-12h]
0x4C8136: cmp     edx, 0FFh
0x4C813C: mov     [esp+34h+var_24], ecx
0x4C8140: ja      short loc_4C816E
0x4C8142: mov     eax, 78787879h
0x4C8147: imul    esi
0x4C8149: sar     edx, 3
0x4C814C: mov     eax, edx
0x4C814E: shr     eax, 1Fh
0x4C8151: add     eax, edx
0x4C8153: mov     edx, eax
0x4C8155: shl     edx, 4
0x4C8158: add     edx, eax
0x4C815A: mov     eax, esi
0x4C815C: sub     eax, edx
0x4C815E: jz      short loc_4C816E
0x4C8160: mov     eax, ecx
0x4C8162: cdq
0x4C8163: mov     ecx, 11h
0x4C8168: idiv    ecx
0x4C816A: test    edx, edx
0x4C816C: jnz     short loc_4C81A8
0x4C816E: mov     eax, [esp+34h+arg_4]
0x4C8172: test    eax, eax
0x4C8174: jz      short loc_4C818E
0x4C8176: mov     edx, [ebp+24h]
0x4C8179: mov     ecx, [edx+4]
0x4C817C: mov     edx, [ecx+ebx*4]
0x4C817F: add     edx, edi
0x4C8181: push    edx
0x4C8182: push    eax
0x4C8183: mov     ecx, ebp
0x4C8185: call    sub_4C1080
0x4C818A: test    al, al
0x4C818C: jz      short loc_4C81A8
0x4C818E: mov     ecx, [ebp+24h]
0x4C8191: mov     eax, [esp+34h+arg_0]
0x4C8195: mov     edx, [ecx+8]
0x4C8198: push    eax
0x4C8199: mov     eax, [edx+ebx*4]
0x4C819C: add     eax, edi
0x4C819E: push    eax
0x4C819F: push    esi
0x4C81A0: push    ebx
0x4C81A1: mov     ecx, ebp
0x4C81A3: call    sub_4C3C90
0x4C81A8: mov     esi, [esp+34h+var_24]
0x4C81AC: add     edi, 0Ch
0x4C81AF: cmp     edi, 0D8Ch
0x4C81B5: jl      loc_4C8130
0x4C81BB: add     ebx, 1
0x4C81BE: cmp     ebx, 4
0x4C81C1: jl      loc_4C8122
0x4C81C7: mov     eax, [esp+34h+arg_0]
0x4C81CB: cmp     dword ptr [eax+8], 0
0x4C81CF: pop     edi
0x4C81D0: pop     esi
0x4C81D1: pop     ebx
0x4C81D2: jz      short loc_4C8201
0x4C81D4: cmp     dword ptr [eax+4], 0
0x4C81D8: jz      short loc_4C8201
0x4C81DA: cmp     dword ptr [eax], 0
0x4C81DD: jz      short loc_4C8201
0x4C81DF: cmp     dword ptr [eax+1Ch], 0
0x4C81E3: jz      short loc_4C8201
0x4C81E5: cmp     dword ptr [eax+18h], 0
0x4C81E9: jz      short loc_4C8201
0x4C81EB: cmp     dword ptr [eax+14h], 0
0x4C81EF: jz      short loc_4C8201
0x4C81F1: cmp     dword ptr [eax+10h], 0
0x4C81F5: jz      short loc_4C8201
0x4C81F7: cmp     dword ptr [eax+0Ch], 0
0x4C81FB: jz      short loc_4C8201
0x4C81FD: or      dword ptr [ebp+1Ch], 10h
0x4C8201: pop     ebp
0x4C8202: add     esp, 24h
0x4C8205: retn    8
