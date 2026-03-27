0x8C2E70: push    esi
0x8C2E71: push    edi
0x8C2E72: mov     edi, [esp+8+arg_0]
0x8C2E76: push    edi
0x8C2E77: mov     esi, ecx
0x8C2E79: call    sub_8A0C30
0x8C2E7E: mov     esi, [esi+4]
0x8C2E81: mov     eax, [edi+21Ch]
0x8C2E87: mov     edx, [eax+4]
0x8C2E8A: push    0
0x8C2E8C: push    0
0x8C2E8E: push    10h
0x8C2E90: lea     ecx, [esi+10h]
0x8C2E93: push    ecx
0x8C2E94: push    eax
0x8C2E95: call    edx
0x8C2E97: mov     edi, [edi+21Ch]
0x8C2E9D: mov     eax, [edi+4]
0x8C2EA0: push    0
0x8C2EA2: push    0
0x8C2EA4: push    10h
0x8C2EA6: add     esi, 20h ; ' '
0x8C2EA9: push    esi
0x8C2EAA: push    edi
0x8C2EAB: call    eax
0x8C2EAD: add     esp, 28h
0x8C2EB0: pop     edi
0x8C2EB1: pop     esi
0x8C2EB2: retn    4
