0x96D8F0: push    esi
0x96D8F1: push    edi
0x96D8F2: mov     edi, [esp+8+arg_0]
0x96D8F6: mov     esi, ecx
0x96D8F8: mov     ecx, [edi]
0x96D8FA: mov     eax, [esi]
0x96D8FC: mov     edx, [eax+4Ch]
0x96D8FF: push    ecx
0x96D900: mov     ecx, esi
0x96D902: call    edx
0x96D904: mov     eax, [edi+4]
0x96D907: mov     [esi+24h], eax
0x96D90A: cmp     dword ptr [edi+8], 0
0x96D90E: jz      short loc_96D924
0x96D910: mov     ecx, [edi+0Ch]
0x96D913: push    ecx
0x96D914: call    sub_95DB10
0x96D919: add     esp, 4
0x96D91C: push    eax
0x96D91D: mov     ecx, esi
0x96D91F: call    sub_96D890
0x96D924: pop     edi
0x96D925: pop     esi
0x96D926: retn    4
