0x6C11C0: push    esi
0x6C11C1: push    edi
0x6C11C2: mov     edi, [esp+8+arg_0]
0x6C11C6: push    edi
0x6C11C7: mov     esi, ecx
0x6C11C9: call    sub_6BD510
0x6C11CE: mov     eax, [edi+21Ch]
0x6C11D4: push    1
0x6C11D6: lea     ecx, [esp+0Ch+arg_0]
0x6C11DA: push    ecx
0x6C11DB: push    4
0x6C11DD: lea     edx, [esi+14h]
0x6C11E0: push    edx
0x6C11E1: push    eax
0x6C11E2: mov     eax, [eax+4]
0x6C11E5: mov     [esp+1Ch+arg_0], 4
0x6C11ED: call    eax
0x6C11EF: mov     eax, [edi+21Ch]
0x6C11F5: push    1
0x6C11F7: lea     ecx, [esp+20h+arg_0]
0x6C11FB: push    ecx
0x6C11FC: push    4
0x6C11FE: lea     edx, [esi+18h]
0x6C1201: push    edx
0x6C1202: push    eax
0x6C1203: mov     eax, [eax+4]
0x6C1206: mov     [esp+30h+arg_0], 4
0x6C120E: call    eax
0x6C1210: mov     edi, [edi+21Ch]
0x6C1216: mov     edx, [edi+4]
0x6C1219: push    1
0x6C121B: lea     ecx, [esp+34h+arg_0]
0x6C121F: push    ecx
0x6C1220: push    4
0x6C1222: add     esi, 1Ch
0x6C1225: push    esi
0x6C1226: push    edi
0x6C1227: mov     [esp+44h+arg_0], 4
0x6C122F: call    edx
0x6C1231: add     esp, 3Ch
0x6C1234: pop     edi
0x6C1235: pop     esi
0x6C1236: retn    4
