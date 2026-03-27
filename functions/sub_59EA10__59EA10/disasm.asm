0x59EA10: push    esi
0x59EA11: push    edi
0x59EA12: mov     esi, ecx
0x59EA14: call    sub_6B8660
0x59EA19: cmp     byte ptr [esi+96h], 0
0x59EA20: mov     edi, eax
0x59EA22: jz      short loc_59EA33
0x59EA24: push    1
0x59EA26: mov     ecx, esi
0x59EA28: mov     dword ptr [edi], 0
0x59EA2E: call    sub_59E2B0
0x59EA33: mov     eax, [esp+8+arg_4]
0x59EA37: mov     ecx, [esp+8+arg_0]
0x59EA3B: push    eax
0x59EA3C: push    ecx
0x59EA3D: mov     ecx, edi
0x59EA3F: call    sub_6B92C0
0x59EA44: mov     ecx, esi
0x59EA46: mov     [esi+88h], al
0x59EA4C: mov     byte ptr [esi+96h], 0
0x59EA53: call    sub_59E680
0x59EA58: pop     edi
0x59EA59: pop     esi
0x59EA5A: retn    8
