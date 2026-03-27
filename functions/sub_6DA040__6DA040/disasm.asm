0x6DA040: push    ebx
0x6DA041: push    ebp
0x6DA042: push    esi
0x6DA043: push    edi
0x6DA044: mov     edi, [esp+10h+arg_0]
0x6DA048: push    edi
0x6DA049: mov     esi, ecx
0x6DA04B: call    nullsub_returnvVoid_1arg
0x6DA050: mov     eax, [edi+220h]
0x6DA056: mov     edx, [eax+8]
0x6DA059: push    1
0x6DA05B: lea     ecx, [esp+14h+arg_0]
0x6DA05F: push    ecx
0x6DA060: mov     ebp, 4
0x6DA065: push    ebp
0x6DA066: lea     ebx, [esi+8]
0x6DA069: push    ebx
0x6DA06A: push    eax
0x6DA06B: mov     [esp+24h+arg_0], ebp
0x6DA06F: call    edx
0x6DA071: add     esp, 14h
0x6DA074: cmp     dword ptr [ebx], 0
0x6DA077: jbe     short loc_6DA0AD
0x6DA079: mov     eax, [edi+220h]
0x6DA07F: mov     edx, [eax+8]
0x6DA082: push    1
0x6DA084: lea     ecx, [esp+14h+arg_0]
0x6DA088: push    ecx
0x6DA089: mov     [esp+18h+arg_0], ebp
0x6DA08D: push    4
0x6DA08F: lea     ebp, [esi+10h]
0x6DA092: push    ebp
0x6DA093: push    eax
0x6DA094: call    edx
0x6DA096: mov     ecx, [ebx]
0x6DA098: mov     edx, [esi+0Ch]
0x6DA09B: mov     eax, [ebp+0]
0x6DA09E: mov     eax, ds:0B3D5D8h[eax*4]
0x6DA0A5: push    ecx
0x6DA0A6: push    edx
0x6DA0A7: push    edi
0x6DA0A8: call    eax ; dword_B3D5D8
0x6DA0AA: add     esp, 20h
0x6DA0AD: pop     edi
0x6DA0AE: pop     esi
0x6DA0AF: pop     ebp
0x6DA0B0: pop     ebx
0x6DA0B1: retn    4
