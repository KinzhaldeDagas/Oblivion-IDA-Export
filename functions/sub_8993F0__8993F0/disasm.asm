0x8993F0: mov     ecx, ds:0BA7D98h
0x8993F6: push    ebx
0x8993F7: mov     ebx, [esp+4+arg_0]
0x8993FB: push    ebp
0x8993FC: push    esi
0x8993FD: push    edi
0x8993FE: push    1Fh
0x899400: mov     esi, eax
0x899402: mov     eax, [ecx]
0x899404: mov     ebp, 0Ch
0x899409: push    ebp
0x89940A: call    dword ptr [eax+10h]
0x89940D: push    esi
0x89940E: mov     ecx, eax
0x899410: mov     [eax+4], bp
0x899414: call    sub_8DBB90
0x899419: mov     ecx, ds:0BA7D98h
0x89941F: mov     edx, [ecx]
0x899421: push    1Fh
0x899423: push    ebp
0x899424: mov     edi, eax
0x899426: call    dword ptr [edx+10h]
0x899429: push    esi
0x89942A: mov     ecx, eax
0x89942C: mov     [eax+4], bp
0x899430: call    sub_8DB4E0
0x899435: mov     ecx, ds:0BA7D98h
0x89943B: push    4
0x89943D: mov     ebp, eax
0x89943F: mov     eax, [ecx]
0x899441: push    10h
0x899443: call    dword ptr [eax+10h]
0x899446: mov     esi, eax
0x899448: mov     eax, 1
0x89944D: push    eax
0x89944E: mov     word ptr [esi+4], 10h
0x899454: mov     [esi+6], ax
0x899458: mov     dword ptr [esi], offset off_A96B58
0x89945E: push    edi
0x89945F: mov     ecx, ebx
0x899461: mov     [esi+0Eh], ax
0x899465: mov     dword ptr [esi+8], offset off_A96AB4
0x89946C: call    sub_8DA3F0
0x899471: push    2
0x899473: push    ebp
0x899474: mov     ecx, ebx
0x899476: call    sub_8DA3F0
0x89947B: push    3
0x89947D: push    esi
0x89947E: mov     ecx, ebx
0x899480: call    sub_8DA3F0
0x899485: cmp     word ptr [edi+4], 0
0x89948A: jz      short loc_89949F
0x89948C: dec     word ptr [edi+6]
0x899490: cmp     word ptr [edi+6], 0
0x899495: jnz     short loc_89949F
0x899497: mov     edx, [edi]
0x899499: push    1
0x89949B: mov     ecx, edi
0x89949D: call    dword ptr [edx]
0x89949F: cmp     word ptr [ebp+4], 0
0x8994A4: jz      short loc_8994BA
0x8994A6: dec     word ptr [ebp+6]
0x8994AA: cmp     word ptr [ebp+6], 0
0x8994AF: jnz     short loc_8994BA
0x8994B1: mov     eax, [ebp+0]
0x8994B4: push    1
0x8994B6: mov     ecx, ebp
0x8994B8: call    dword ptr [eax]
0x8994BA: cmp     word ptr [esi+4], 0
0x8994BF: jz      short loc_8994D4
0x8994C1: dec     word ptr [esi+6]
0x8994C5: cmp     word ptr [esi+6], 0
0x8994CA: jnz     short loc_8994D4
0x8994CC: mov     edx, [esi]
0x8994CE: push    1
0x8994D0: mov     ecx, esi
0x8994D2: call    dword ptr [edx]
0x8994D4: pop     edi
0x8994D5: pop     esi
0x8994D6: pop     ebp
0x8994D7: pop     ebx
0x8994D8: retn
