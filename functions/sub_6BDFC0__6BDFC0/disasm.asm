0x6BDFC0: push    esi
0x6BDFC1: mov     esi, [esp+4+arg_4]
0x6BDFC5: push    edi
0x6BDFC6: mov     edi, [esp+8+arg_0]
0x6BDFCA: push    esi
0x6BDFCB: push    edi
0x6BDFCC: call    sub_6D3660
0x6BDFD1: cmp     byte ptr [esi+4], 0
0x6BDFD5: push    1
0x6BDFD7: lea     ecx, [esp+14h+arg_0]
0x6BDFDB: push    ecx
0x6BDFDC: setnz   al
0x6BDFDF: mov     byte ptr [esp+18h+arg_4], al
0x6BDFE3: mov     eax, [edi+220h]
0x6BDFE9: push    1
0x6BDFEB: lea     edx, [esp+1Ch+arg_4]
0x6BDFEF: push    edx
0x6BDFF0: push    eax
0x6BDFF1: mov     eax, [eax+8]
0x6BDFF4: mov     [esp+24h+arg_0], 1
0x6BDFFC: call    eax
0x6BDFFE: add     esp, 1Ch
0x6BE001: pop     edi
0x6BE002: pop     esi
0x6BE003: retn
