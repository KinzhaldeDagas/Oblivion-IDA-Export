0x8BF2F0: push    esi
0x8BF2F1: mov     esi, [esp+4+arg_0]
0x8BF2F5: push    edi
0x8BF2F6: push    esi
0x8BF2F7: mov     edi, ecx
0x8BF2F9: call    sub_8A0C80
0x8BF2FE: mov     edi, [edi+4]
0x8BF301: mov     eax, [edi+0Ch]
0x8BF304: push    eax
0x8BF305: push    esi
0x8BF306: call    sub_8E80C0
0x8BF30B: mov     eax, [esi+220h]
0x8BF311: push    1
0x8BF313: lea     ecx, [esp+14h+arg_0]
0x8BF317: push    ecx
0x8BF318: push    4
0x8BF31A: lea     edx, [edi+10h]
0x8BF31D: push    edx
0x8BF31E: push    eax
0x8BF31F: mov     eax, [eax+8]
0x8BF322: mov     [esp+24h+arg_0], 4
0x8BF32A: call    eax
0x8BF32C: mov     esi, [esi+220h]
0x8BF332: mov     edx, [esi+8]
0x8BF335: push    1
0x8BF337: lea     ecx, [esp+28h+arg_0]
0x8BF33B: push    ecx
0x8BF33C: push    4
0x8BF33E: add     edi, 14h
0x8BF341: push    edi
0x8BF342: push    esi
0x8BF343: mov     [esp+38h+arg_0], 4
0x8BF34B: call    edx
0x8BF34D: add     esp, 30h
0x8BF350: pop     edi
0x8BF351: pop     esi
0x8BF352: retn    4
