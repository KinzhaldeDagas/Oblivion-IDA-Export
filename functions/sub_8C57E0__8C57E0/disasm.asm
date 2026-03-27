0x8C57E0: sub     esp, 8
0x8C57E3: push    ebx
0x8C57E4: push    esi
0x8C57E5: mov     ebx, ecx
0x8C57E7: mov     eax, [ebx]
0x8C57E9: mov     edx, [eax+74h]
0x8C57EC: push    edi
0x8C57ED: lea     ecx, [esp+14h+var_8+3]
0x8C57F1: push    ecx
0x8C57F2: mov     ecx, ebx
0x8C57F4: call    edx
0x8C57F6: mov     esi, [esp+14h+arg_0]
0x8C57FA: push    esi
0x8C57FB: mov     ecx, ebx
0x8C57FD: mov     edi, eax
0x8C57FF: call    sub_8A25C0
0x8C5804: test    edi, edi
0x8C5806: jz      short loc_8C5850
0x8C5808: mov     eax, [esi+21Ch]
0x8C580E: push    1
0x8C5810: lea     ecx, [esp+18h+arg_0]
0x8C5814: push    ecx
0x8C5815: mov     ebx, 4
0x8C581A: push    ebx
0x8C581B: lea     edx, [edi+8]
0x8C581E: push    edx
0x8C581F: push    eax
0x8C5820: mov     eax, [eax+4]
0x8C5823: mov     [esp+28h+arg_0], ebx
0x8C5827: call    eax
0x8C5829: mov     eax, [esi+21Ch]
0x8C582F: push    1
0x8C5831: lea     ecx, [esp+2Ch+var_4]
0x8C5835: push    ecx
0x8C5836: push    10h
0x8C5838: add     edi, 10h
0x8C583B: mov     [esp+34h+var_4], ebx
0x8C583F: mov     edx, [eax+4]
0x8C5842: push    edi
0x8C5843: push    eax
0x8C5844: call    edx
0x8C5846: add     esp, 28h
0x8C5849: mov     ecx, esi
0x8C584B: call    sub_712A20
0x8C5850: pop     edi
0x8C5851: pop     esi
0x8C5852: pop     ebx
0x8C5853: add     esp, 8
0x8C5856: retn    4
