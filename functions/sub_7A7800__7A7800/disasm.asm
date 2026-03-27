0x7A7800: push    ebx
0x7A7801: push    esi
0x7A7802: mov     esi, ecx
0x7A7804: push    edi
0x7A7805: mov     edi, [esi+58h]
0x7A7808: xor     ebx, ebx
0x7A780A: cmp     edi, ebx
0x7A780C: jz      short loc_7A781E
0x7A780E: mov     ecx, edi
0x7A7810: call    sub_784B60
0x7A7815: push    edi
0x7A7816: call    FormHeapFree
0x7A781B: add     esp, 4
0x7A781E: mov     edi, [esi+5Ch]
0x7A7821: cmp     edi, ebx
0x7A7823: jz      short loc_7A7835
0x7A7825: mov     ecx, edi
0x7A7827: call    sub_784B60
0x7A782C: push    edi
0x7A782D: call    FormHeapFree
0x7A7832: add     esp, 4
0x7A7835: mov     edi, [esi+54h]
0x7A7838: cmp     edi, ebx
0x7A783A: jz      short loc_7A784C
0x7A783C: mov     ecx, edi
0x7A783E: call    sub_784B60
0x7A7843: push    edi
0x7A7844: call    FormHeapFree
0x7A7849: add     esp, 4
0x7A784C: mov     edi, [esi+50h]
0x7A784F: cmp     edi, ebx
0x7A7851: jz      short loc_7A7863
0x7A7853: mov     ecx, edi
0x7A7855: call    sub_784B60
0x7A785A: push    edi
0x7A785B: call    FormHeapFree
0x7A7860: add     esp, 4
0x7A7863: mov     edi, [esi+6Ch]
0x7A7866: cmp     edi, ebx
0x7A7868: jz      short loc_7A787A
0x7A786A: mov     ecx, edi
0x7A786C: call    sub_784B60
0x7A7871: push    edi
0x7A7872: call    FormHeapFree
0x7A7877: add     esp, 4
0x7A787A: mov     edi, [esi+64h]
0x7A787D: cmp     edi, ebx
0x7A787F: jz      short loc_7A7891
0x7A7881: mov     ecx, edi
0x7A7883: call    sub_784B60
0x7A7888: push    edi
0x7A7889: call    FormHeapFree
0x7A788E: add     esp, 4
0x7A7891: mov     edi, [esi+68h]
0x7A7894: cmp     edi, ebx
0x7A7896: jz      short loc_7A78A8
0x7A7898: mov     ecx, edi
0x7A789A: call    sub_784B60
0x7A789F: push    edi
0x7A78A0: call    FormHeapFree
0x7A78A5: add     esp, 4
0x7A78A8: mov     edi, [esi+60h]
0x7A78AB: cmp     edi, ebx
0x7A78AD: jz      short loc_7A78BF
0x7A78AF: mov     ecx, edi
0x7A78B1: call    sub_784B60
0x7A78B6: push    edi
0x7A78B7: call    FormHeapFree
0x7A78BC: add     esp, 4
0x7A78BF: mov     edi, [esi+70h]
0x7A78C2: cmp     edi, ebx
0x7A78C4: jz      short loc_7A78D6
0x7A78C6: mov     ecx, edi
0x7A78C8: call    sub_784B60
0x7A78CD: push    edi
0x7A78CE: call    FormHeapFree
0x7A78D3: add     esp, 4
0x7A78D6: pop     edi
0x7A78D7: mov     [esi+58h], ebx
0x7A78DA: mov     [esi+5Ch], ebx
0x7A78DD: mov     [esi+54h], ebx
0x7A78E0: mov     [esi+50h], ebx
0x7A78E3: mov     [esi+6Ch], ebx
0x7A78E6: mov     [esi+64h], ebx
0x7A78E9: mov     [esi+68h], ebx
0x7A78EC: mov     [esi+60h], ebx
0x7A78EF: mov     [esi+70h], ebx
0x7A78F2: pop     esi
0x7A78F3: pop     ebx
0x7A78F4: retn
