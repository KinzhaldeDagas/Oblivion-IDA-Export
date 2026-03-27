0x4DE770: sub     esp, 8
0x4DE773: push    ebx
0x4DE774: push    esi
0x4DE775: mov     esi, ecx
0x4DE777: xor     bl, bl
0x4DE779: call    TESObjectREFR_GetOwner
0x4DE77E: test    eax, eax
0x4DE780: jz      loc_4DE873
0x4DE786: push    edi
0x4DE787: mov     ecx, esi; this
0x4DE789: call    TESObjectREFR_GetOwner
0x4DE78E: mov     ecx, esi
0x4DE790: mov     edi, eax
0x4DE792: call    sub_4DB830
0x4DE797: mov     ecx, esi
0x4DE799: mov     [esp+14h+var_4], eax
0x4DE79D: call    sub_4DB7D0
0x4DE7A2: test    edi, edi
0x4DE7A4: mov     [esp+14h+var_8], eax
0x4DE7A8: jz      loc_4DE85C
0x4DE7AE: push    ebp
0x4DE7AF: mov     ebp, [esp+18h+arg_0]
0x4DE7B3: test    ebp, ebp
0x4DE7B5: jz      loc_4DE867
0x4DE7BB: mov     eax, [ebp+0]
0x4DE7BE: mov     edx, [eax+128h]
0x4DE7C4: mov     ecx, ebp
0x4DE7C6: mov     bl, 1
0x4DE7C8: call    edx
0x4DE7CA: mov     esi, eax
0x4DE7CC: test    esi, esi
0x4DE7CE: jnz     short loc_4DE7DF
0x4DE7D0: mov     eax, [ebp+0]
0x4DE7D3: mov     edx, [eax+170h]
0x4DE7D9: mov     ecx, ebp
0x4DE7DB: call    edx
0x4DE7DD: mov     esi, eax
0x4DE7DF: movzx   eax, byte ptr [esi+4]
0x4DE7E3: add     eax, 0FFFFFFDDh
0x4DE7E6: xor     edx, edx
0x4DE7E8: cmp     eax, 1
0x4DE7EB: ja      short loc_4DE804
0x4DE7ED: push    edx; int
0x4DE7EE: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4DE7F3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4DE7F8: push    edx; int
0x4DE7F9: push    esi; void *
0x4DE7FA: call    OblivionDynamicCast
0x4DE7FF: add     esp, 14h
0x4DE802: mov     edx, eax
0x4DE804: cmp     edi, esi
0x4DE806: jz      short loc_4DE867
0x4DE808: xor     ecx, ecx
0x4DE80A: cmp     byte ptr [edi+4], 6
0x4DE80E: jnz     short loc_4DE819
0x4DE810: cmp     [esp+18h+arg_4], 0
0x4DE815: mov     ecx, edi
0x4DE817: jnz     short loc_4DE82F
0x4DE819: mov     eax, [esp+18h+var_8]
0x4DE81D: test    eax, eax
0x4DE81F: jz      short loc_4DE82D
0x4DE821: fldz
0x4DE823: fcomp   dword ptr [eax+24h]
0x4DE826: fnstsw  ax
0x4DE828: test    ah, 44h
0x4DE82B: jp      short loc_4DE82F
0x4DE82D: xor     bl, bl
0x4DE82F: test    ecx, ecx
0x4DE831: jz      short loc_4DE867
0x4DE833: test    edx, edx
0x4DE835: jz      short loc_4DE867
0x4DE837: cmp     ebp, ds:0B333C4h
0x4DE83D: setz    al
0x4DE840: push    eax
0x4DE841: push    ecx
0x4DE842: lea     ecx, [edx+24h]
0x4DE845: call    TESActorBaseData_GetFactionRank
0x4DE84A: cmp     eax, [esp+18h+var_4]
0x4DE84E: jge     short loc_4DE867
0x4DE850: pop     ebp
0x4DE851: pop     edi
0x4DE852: pop     esi
0x4DE853: xor     al, al
0x4DE855: pop     ebx
0x4DE856: add     esp, 8
0x4DE859: retn    8
0x4DE85C: pop     edi
0x4DE85D: pop     esi
0x4DE85E: mov     al, bl
0x4DE860: pop     ebx
0x4DE861: add     esp, 8
0x4DE864: retn    8
0x4DE867: pop     ebp
0x4DE868: pop     edi
0x4DE869: pop     esi
0x4DE86A: mov     al, bl
0x4DE86C: pop     ebx
0x4DE86D: add     esp, 8
0x4DE870: retn    8
0x4DE873: pop     esi
0x4DE874: mov     al, bl
0x4DE876: pop     ebx
0x4DE877: add     esp, 8
0x4DE87A: retn    8
