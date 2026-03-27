0x6070B0: mov     edx, [esp+arg_4]
0x6070B4: xor     eax, eax
0x6070B6: push    esi
0x6070B7: mov     esi, ecx
0x6070B9: mov     ecx, [esp+4+arg_0]
0x6070BD: mov     [esi+1Ch], eax
0x6070C0: mov     [esi+20h], eax
0x6070C3: push    edi
0x6070C4: mov     edi, [esp+8+arg_C]
0x6070C8: mov     [esi+8], edx
0x6070CB: mov     edx, [esp+8+arg_8]
0x6070CF: mov     [esi+14h], edi
0x6070D2: mov     edi, [esp+8+arg_10]
0x6070D6: push    edx
0x6070D7: mov     [esi+18h], edi
0x6070DA: mov     edi, [esp+0Ch+arg_14]
0x6070DE: mov     [esi+4], ecx
0x6070E1: push    ecx
0x6070E2: mov     ecx, offset ActorProcessManager_ptr
0x6070E7: mov     [esi], eax
0x6070E9: mov     [esi+0Ch], edx
0x6070EC: mov     [esi+10h], al
0x6070EF: mov     [esi+11h], al
0x6070F2: mov     [esi+24h], edi
0x6070F5: mov     [esi+2Ch], al
0x6070F8: call    sub_675EF0
0x6070FD: add     eax, 1
0x607100: mov     [esi+28h], eax
0x607103: pop     edi
0x607104: mov     eax, esi
0x607106: pop     esi
0x607107: retn    18h
