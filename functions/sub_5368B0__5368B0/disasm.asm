0x5368B0: push    ebx
0x5368B1: push    edi
0x5368B2: mov     edi, [esp+8+arg_0]
0x5368B6: xor     bl, bl
0x5368B8: test    edi, edi
0x5368BA: jz      loc_53694F
0x5368C0: push    esi
0x5368C1: push    edi
0x5368C2: call    sub_47FAC0
0x5368C7: add     esp, 4
0x5368CA: test    eax, eax
0x5368CC: jz      short loc_5368FD
0x5368CE: mov     esi, [eax+10h]
0x5368D1: test    esi, esi
0x5368D3: jz      short loc_5368FD
0x5368D5: mov     eax, [esi+8]
0x5368D8: test    eax, eax
0x5368DA: jz      short loc_5368EB
0x5368DC: mov     ecx, [eax+50h]
0x5368DF: mov     eax, [ecx]
0x5368E1: mov     edx, [eax+8]
0x5368E4: call    edx
0x5368E6: cmp     eax, 6
0x5368E9: jz      short loc_5368FD
0x5368EB: mov     ecx, esi
0x5368ED: call    sub_4B6D90
0x5368F2: cmp     eax, 7
0x5368F5: jz      short loc_5368FD
0x5368F7: mov     al, 1
0x5368F9: pop     esi
0x5368FA: pop     edi
0x5368FB: pop     ebx
0x5368FC: retn
0x5368FD: mov     eax, [edi]
0x5368FF: mov     edx, [eax+8]
0x536902: mov     ecx, edi
0x536904: call    edx
0x536906: mov     edi, eax
0x536908: test    edi, edi
0x53690A: jz      short loc_536949
0x53690C: movzx   ecx, word ptr [edi+0B6h]
0x536913: xor     esi, esi
0x536915: test    ecx, ecx
0x536917: jbe     short loc_536949
0x536919: cmp     ecx, esi
0x53691B: ja      short loc_536921
0x53691D: xor     eax, eax
0x53691F: jmp     short loc_53692A
0x536921: mov     eax, [edi+0B0h]
0x536927: mov     eax, [eax+esi*4]
0x53692A: push    eax
0x53692B: call    sub_5368B0
0x536930: add     esp, 4
0x536933: test    al, al
0x536935: jnz     short loc_5368F9
0x536937: movzx   ecx, word ptr [edi+0B6h]
0x53693E: add     esi, 1
0x536941: cmp     ecx, esi
0x536943: ja      short loc_536921
0x536945: pop     esi
0x536946: pop     edi
0x536947: pop     ebx
0x536948: retn
0x536949: pop     esi
0x53694A: pop     edi
0x53694B: mov     al, bl
0x53694D: pop     ebx
0x53694E: retn
0x53694F: pop     edi
0x536950: mov     al, bl
0x536952: pop     ebx
0x536953: retn
