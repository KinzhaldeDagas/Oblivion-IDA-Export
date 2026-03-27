0x890660: push    ebp
0x890661: mov     ebp, esp
0x890663: and     esp, 0FFFFFFF0h
0x890666: push    ecx
0x890667: push    ebx
0x890668: push    esi
0x890669: push    edi
0x89066A: mov     edi, [ebp+arg_0]
0x89066D: mov     ebx, ecx
0x89066F: test    ebx, ebx
0x890671: mov     [esp+10h+var_4], edi
0x890675: jz      short loc_8906E6
0x890677: mov     ecx, [ebx+8]
0x89067A: test    ecx, ecx
0x89067C: jz      short loc_8906E6
0x89067E: call    sub_8AC0C0
0x890683: mov     esi, eax
0x890685: test    esi, esi
0x890687: jz      short loc_8906E6
0x890689: test    edi, edi
0x89068B: mov     eax, [esi+14h]
0x89068E: jz      short loc_890695
0x890690: mov     edi, [edi+8]
0x890693: jmp     short loc_890697
0x890695: xor     edi, edi
0x890697: cmp     eax, edi
0x890699: jz      short loc_8906E6
0x89069B: mov     ecx, [ebx+8]
0x89069E: test    ecx, ecx
0x8906A0: mov     edi, [esi+8]
0x8906A3: jz      short loc_8906AA
0x8906A5: call    sub_8AC070
0x8906AA: test    edi, edi
0x8906AC: jz      short loc_8906B6
0x8906AE: push    esi
0x8906AF: mov     ecx, edi
0x8906B1: call    sub_899B30
0x8906B6: mov     eax, [esp+10h+var_4]
0x8906BA: test    eax, eax
0x8906BC: jz      short loc_8906C3
0x8906BE: mov     eax, [eax+8]
0x8906C1: jmp     short loc_8906C5
0x8906C3: xor     eax, eax
0x8906C5: mov     edx, [esi]
0x8906C7: push    eax
0x8906C8: mov     eax, [edx+8]
0x8906CB: mov     ecx, esi
0x8906CD: call    eax
0x8906CF: test    edi, edi
0x8906D1: jz      short loc_8906DB
0x8906D3: push    esi
0x8906D4: mov     ecx, edi
0x8906D6: call    sub_899A50
0x8906DB: mov     al, 1
0x8906DD: pop     edi
0x8906DE: pop     esi
0x8906DF: pop     ebx
0x8906E0: mov     esp, ebp
0x8906E2: pop     ebp
0x8906E3: retn    8
0x8906E6: pop     edi
0x8906E7: pop     esi
0x8906E8: xor     al, al
0x8906EA: pop     ebx
0x8906EB: mov     esp, ebp
0x8906ED: pop     ebp
0x8906EE: retn    8
