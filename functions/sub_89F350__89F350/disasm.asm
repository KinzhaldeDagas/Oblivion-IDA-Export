0x89F350: push    ebx
0x89F351: mov     ebx, [esp+4+arg_0]
0x89F355: push    esi
0x89F356: mov     esi, ecx
0x89F358: push    edi
0x89F359: mov     ecx, ebx
0x89F35B: call    sub_7124A0
0x89F360: mov     edi, eax
0x89F362: mov     eax, [esi]
0x89F364: mov     edx, [eax+74h]
0x89F367: lea     ecx, [esp+0Ch+arg_0]
0x89F36B: push    ecx
0x89F36C: mov     ecx, esi
0x89F36E: call    edx
0x89F370: test    eax, eax
0x89F372: jz      short loc_89F37E
0x89F374: test    edi, edi
0x89F376: jz      short loc_89F37E
0x89F378: mov     ecx, [edi+8]
0x89F37B: mov     [eax+4], ecx
0x89F37E: push    ebx
0x89F37F: mov     ecx, esi
0x89F381: call    sub_89D6C0
0x89F386: pop     edi
0x89F387: pop     esi
0x89F388: pop     ebx
0x89F389: retn    4
