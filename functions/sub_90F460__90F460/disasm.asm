0x90F460: sub     esp, 0Ch
0x90F463: push    esi
0x90F464: mov     esi, ecx
0x90F466: mov     ecx, [esp+10h+arg_0]
0x90F46A: cmp     dword ptr [ecx], 0
0x90F46D: push    edi
0x90F46E: jz      short loc_90F4B9
0x90F470: mov     edi, [esi+124h]
0x90F476: dec     edi
0x90F477: js      short loc_90F48F
0x90F479: mov     eax, [esi+120h]
0x90F47F: lea     eax, [eax+edi*8+4]
0x90F483: cmp     [eax], ecx
0x90F485: jz      short loc_90F4C1
0x90F487: dec     edi
0x90F488: sub     eax, 8
0x90F48B: test    edi, edi
0x90F48D: jge     short loc_90F483
0x90F48F: mov     edi, [esi+54h]
0x90F492: dec     edi
0x90F493: mov     [esp+14h+var_8], ecx
0x90F497: mov     [esp+14h+var_C], esi
0x90F49B: mov     [esp+14h+var_4], 0
0x90F4A0: js      short loc_90F4B9
0x90F4A2: mov     eax, [esi+50h]
0x90F4A5: mov     ecx, [eax+edi*4]
0x90F4A8: test    ecx, ecx
0x90F4AA: jz      short loc_90F4B6
0x90F4AC: mov     edx, [ecx]
0x90F4AE: lea     eax, [esp+14h+var_C]
0x90F4B2: push    eax
0x90F4B3: call    dword ptr [edx+4]
0x90F4B6: dec     edi
0x90F4B7: jns     short loc_90F4A2
0x90F4B9: pop     edi
0x90F4BA: pop     esi
0x90F4BB: add     esp, 0Ch
0x90F4BE: retn    4
0x90F4C1: push    ecx
0x90F4C2: mov     eax, esp
0x90F4C4: push    ecx
0x90F4C5: mov     ecx, esi
0x90F4C7: mov     byte ptr [eax], 1
0x90F4CA: call    sub_88D7D0
0x90F4CF: mov     ecx, [esi+120h]
0x90F4D5: mov     ecx, [ecx+edi*8]
0x90F4D8: test    ecx, ecx
0x90F4DA: jz      short loc_90F4E1
0x90F4DC: mov     edx, [ecx]
0x90F4DE: call    dword ptr [edx+18h]
0x90F4E1: mov     eax, [esi+124h]
0x90F4E7: dec     eax
0x90F4E8: mov     [esi+124h], eax
0x90F4EE: mov     esi, [esi+120h]
0x90F4F4: mov     ecx, [esi+eax*8]
0x90F4F7: mov     [esi+edi*8], ecx
0x90F4FA: mov     edx, [esi+eax*8+4]
0x90F4FE: mov     [esi+edi*8+4], edx
0x90F502: pop     edi
0x90F503: pop     esi
0x90F504: add     esp, 0Ch
0x90F507: retn    4
