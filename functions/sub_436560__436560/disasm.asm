0x436560: movsx   eax, [esp+arg_0]
0x436565: push    esi
0x436566: push    edi
0x436567: push    1
0x436569: cdq
0x43656A: push    0
0x43656C: push    edx
0x43656D: push    eax
0x43656E: mov     esi, ecx
0x436570: call    __allmul
0x436575: mov     ecx, [esp+8+arg_4]
0x436579: xor     edi, edi
0x43657B: push    edi
0x43657C: add     eax, ecx
0x43657E: push    100h
0x436583: adc     edx, edi
0x436585: push    edx
0x436586: push    eax
0x436587: call    __allmul
0x43658C: mov     ecx, eax
0x43658E: movzx   eax, [esp+8+arg_8]
0x436593: mov     edi, edx
0x436595: cdq
0x436596: push    0
0x436598: add     ecx, eax
0x43659A: push    10000h
0x43659F: adc     edi, edx
0x4365A1: push    edi
0x4365A2: push    ecx
0x4365A3: call    __allmul
0x4365A8: mov     ecx, eax
0x4365AA: movzx   eax, [esp+8+arg_C]
0x4365AF: mov     edi, edx
0x4365B1: cdq
0x4365B2: add     ecx, eax
0x4365B4: adc     edi, edx
0x4365B6: mov     [esi+14h], edi
0x4365B9: pop     edi
0x4365BA: mov     [esi+10h], ecx
0x4365BD: pop     esi
0x4365BE: retn    10h
