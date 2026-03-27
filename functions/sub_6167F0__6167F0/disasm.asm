0x6167F0: push    ecx
0x6167F1: push    esi
0x6167F2: mov     esi, ecx
0x6167F4: mov     eax, [esi+3Ch]
0x6167F7: test    eax, eax
0x6167F9: mov     [esp+8+var_4], 0
0x616801: jz      short loc_61681A
0x616803: mov     ecx, [eax+58h]
0x616806: test    ecx, ecx
0x616808: jz      short loc_61681A
0x61680A: mov     eax, [ecx]
0x61680C: mov     edx, [eax+33Ch]
0x616812: push    0
0x616814: call    edx
0x616816: mov     [esp+8+var_4], eax
0x61681A: mov     eax, [esp+8+arg_8]
0x61681E: mov     ecx, [esp+8+arg_4]
0x616822: mov     edx, [esp+8+arg_0]
0x616826: push    eax
0x616827: mov     eax, [esi+3Ch]
0x61682A: push    ecx
0x61682B: push    edx
0x61682C: push    eax
0x61682D: lea     ecx, [esp+18h+var_4]
0x616831: push    ecx
0x616832: call    sub_616530
0x616837: add     esp, 14h
0x61683A: pop     esi
0x61683B: pop     ecx
0x61683C: retn    0Ch
