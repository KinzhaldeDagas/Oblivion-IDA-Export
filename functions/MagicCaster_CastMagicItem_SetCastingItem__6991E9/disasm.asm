0x6991E9: mov     eax, [esi]
0x6991EB: mov     edx, [eax+34h]
0x6991EE: push    edi
0x6991EF: mov     ecx, esi
0x6991F1: call    edx
0x6991F3: mov     eax, [esi]
0x6991F5: mov     edi, [esp+4+arg_C]
0x6991F9: mov     edx, [eax+3Ch]
0x6991FC: push    edi
0x6991FD: mov     ecx, esi
0x6991FF: call    edx
0x699201: mov     ecx, ebx
0x699203: call    EffectItemList_HasOnTarget
0x699208: test    al, al
0x69920A: jz      short loc_699221
0x69920C: test    edi, edi
0x69920E: jz      short loc_699221
0x699210: mov     eax, [esi]
0x699212: mov     edx, [eax+10h]
0x699215: mov     ecx, esi
0x699217: call    edx
0x699219: pop     edi
0x69921A: pop     esi
0x69921B: mov     al, 1
0x69921D: pop     ebx
0x69921E: retn    0Ch
0x699221: mov     eax, [esi]
0x699223: mov     edx, [eax+14h]
0x699226: mov     ecx, esi
0x699228: call    edx
0x69922A: pop     edi
0x69922B: pop     esi
0x69922C: mov     al, 1
0x69922E: pop     ebx
0x69922F: retn    0Ch
