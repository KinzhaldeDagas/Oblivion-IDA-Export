0x8A10D0: sub     esp, 8
0x8A10D3: push    ebp
0x8A10D4: push    esi
0x8A10D5: mov     esi, ecx
0x8A10D7: mov     eax, [esi]
0x8A10D9: mov     edx, [eax+74h]
0x8A10DC: push    edi
0x8A10DD: lea     ecx, [esp+14h+var_5]
0x8A10E1: push    ecx
0x8A10E2: mov     ecx, esi
0x8A10E4: mov     [esp+18h+var_4], esi
0x8A10E8: call    edx
0x8A10EA: mov     ebp, [esp+14h+arg_4]
0x8A10EE: mov     edi, eax
0x8A10F0: test    edi, edi
0x8A10F2: jz      short loc_8A114E
0x8A10F4: push    ebx
0x8A10F5: xor     ebx, ebx
0x8A10F7: cmp     [edi+8], ebx
0x8A10FA: jle     short loc_8A114D
0x8A10FC: lea     esp, [esp+0]
0x8A1100: mov     eax, [edi+4]
0x8A1103: mov     eax, [eax+ebx*4]
0x8A1106: test    eax, eax
0x8A1108: jz      short loc_8A110F
0x8A110A: mov     esi, [eax+8]
0x8A110D: jmp     short loc_8A1111
0x8A110F: xor     esi, esi
0x8A1111: test    esi, esi
0x8A1113: jz      short loc_8A1141
0x8A1115: mov     edx, [esi]
0x8A1117: mov     eax, [edx+8Ch]
0x8A111D: push    ebp
0x8A111E: mov     ecx, esi
0x8A1120: call    eax
0x8A1122: test    al, al
0x8A1124: jnz     short loc_8A1141
0x8A1126: mov     edx, [esi]
0x8A1128: mov     eax, [edx+18h]
0x8A112B: push    ebp
0x8A112C: mov     ecx, esi
0x8A112E: call    eax
0x8A1130: test    eax, eax
0x8A1132: jz      short loc_8A1139
0x8A1134: mov     eax, [eax+8]
0x8A1137: jmp     short loc_8A113B
0x8A1139: xor     eax, eax
0x8A113B: mov     ecx, [edi+4]
0x8A113E: mov     [ecx+ebx*4], eax
0x8A1141: add     ebx, 1
0x8A1144: cmp     ebx, [edi+8]
0x8A1147: jl      short loc_8A1100
0x8A1149: mov     esi, [esp+18h+var_4]
0x8A114D: pop     ebx
0x8A114E: mov     edx, [esp+14h+arg_0]
0x8A1152: push    ebp
0x8A1153: push    edx
0x8A1154: mov     ecx, esi
0x8A1156: call    sub_8A2670
0x8A115B: pop     edi
0x8A115C: pop     esi
0x8A115D: pop     ebp
0x8A115E: add     esp, 8
0x8A1161: retn    8
