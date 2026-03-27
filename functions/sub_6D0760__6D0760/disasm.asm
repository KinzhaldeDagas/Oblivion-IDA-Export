0x6D0760: push    esi
0x6D0761: push    edi
0x6D0762: mov     edi, [esp+8+arg_0]
0x6D0766: mov     eax, [edi]
0x6D0768: mov     edx, [eax+0Ch]
0x6D076B: mov     esi, ecx
0x6D076D: mov     ecx, edi
0x6D076F: call    edx
0x6D0771: test    eax, eax
0x6D0773: mov     ecx, esi
0x6D0775: jz      short loc_6D0798
0x6D0777: push    edi
0x6D0778: call    NiTimeController__SetTarget
0x6D077D: cmp     dword ptr [esi+50h], 0
0x6D0781: jz      short loc_6D079F
0x6D0783: mov     eax, [esi]
0x6D0785: mov     edx, [eax+0A8h]
0x6D078B: mov     ecx, esi
0x6D078D: call    edx
0x6D078F: pop     edi
0x6D0790: mov     byte ptr [esi+5Bh], 1
0x6D0794: pop     esi
0x6D0795: retn    4
0x6D0798: push    0
0x6D079A: call    NiTimeController__SetTarget
0x6D079F: pop     edi
0x6D07A0: pop     esi
0x6D07A1: retn    4
