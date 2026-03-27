0x8B1060: push    ebx
0x8B1061: mov     ebx, [esp+4+arg_0]
0x8B1065: push    ebp
0x8B1066: push    esi
0x8B1067: push    edi
0x8B1068: mov     esi, ecx
0x8B106A: mov     ecx, ds:0BA7D98h
0x8B1070: mov     edi, [esi+8]
0x8B1073: mov     eax, [ecx]
0x8B1075: mov     ebp, [esi]
0x8B1077: push    14h
0x8B1079: lea     edx, ds:0[ebx*8]
0x8B1080: push    edx
0x8B1081: inc     edi
0x8B1082: call    dword ptr [eax+10h]
0x8B1085: lea     ecx, ds:0[ebx*4]
0x8B108C: push    ecx
0x8B108D: push    0
0x8B108F: push    eax
0x8B1090: mov     [esi], eax
0x8B1092: call    sub_8B18C0
0x8B1097: add     esp, 0Ch
0x8B109A: dec     ebx
0x8B109B: mov     [esi+8], ebx
0x8B109E: xor     ebx, ebx
0x8B10A0: test    edi, edi
0x8B10A2: mov     dword ptr [esi+4], 0
0x8B10A9: jle     short loc_8B10DA
0x8B10AB: lea     edx, [ebp+edi*4+0]
0x8B10AF: mov     [esp+10h+arg_0], edx
0x8B10B3: mov     eax, [ebp+ebx*4+0]
0x8B10B7: test    eax, eax
0x8B10B9: jz      short loc_8B10CA
0x8B10BB: mov     ecx, [esp+10h+arg_0]
0x8B10BF: mov     edx, [ecx]
0x8B10C1: push    edx
0x8B10C2: push    eax
0x8B10C3: mov     ecx, esi
0x8B10C5: call    sub_8B0E80
0x8B10CA: mov     ecx, [esp+10h+arg_0]
0x8B10CE: inc     ebx
0x8B10CF: add     ecx, 4
0x8B10D2: cmp     ebx, edi
0x8B10D4: mov     [esp+10h+arg_0], ecx
0x8B10D8: jl      short loc_8B10B3
0x8B10DA: mov     ecx, ds:0BA7D98h
0x8B10E0: mov     eax, [ecx]
0x8B10E2: push    14h
0x8B10E4: lea     edx, ds:0[edi*8]
0x8B10EB: push    edx
0x8B10EC: push    ebp
0x8B10ED: call    dword ptr [eax+14h]
0x8B10F0: pop     edi
0x8B10F1: pop     esi
0x8B10F2: pop     ebp
0x8B10F3: pop     ebx
0x8B10F4: retn    4
