0x683500: sub     esp, 0Ch
0x683503: push    ebx
0x683504: push    ebp
0x683505: mov     ebx, ecx
0x683507: xor     ebp, ebp
0x683509: cmp     [ebx+40h], ebp
0x68350C: push    esi
0x68350D: push    edi
0x68350E: jz      short loc_683518
0x683510: call    sub_683490
0x683515: mov     [ebx+40h], ebp
0x683518: mov     ecx, [ebx+24h]
0x68351B: lea     edi, [ebx+20h]
0x68351E: xor     eax, eax
0x683520: cmp     ecx, ebp
0x683522: jbe     short loc_683542
0x683524: mov     esi, [edi+8]
0x683527: mov     edx, esi
0x683529: lea     esp, [esp+0]
0x683530: cmp     [edx], ebp
0x683532: jnz     loc_6836BE
0x683538: add     eax, 1
0x68353B: add     edx, 4
0x68353E: cmp     eax, ecx
0x683540: jb      short loc_683530
0x683542: xor     eax, eax
0x683544: cmp     eax, ebp
0x683546: mov     [esp+1Ch+var_C], eax
0x68354A: jz      short loc_6835A0
0x68354C: lea     esp, [esp+0]
0x683550: lea     eax, [esp+1Ch+var_8]
0x683554: push    eax
0x683555: lea     ecx, [esp+20h+var_4]
0x683559: push    ecx
0x68355A: lea     edx, [esp+24h+var_C]
0x68355E: push    edx
0x68355F: mov     ecx, edi
0x683561: mov     [esp+28h+var_8], ebp
0x683565: call    sub_452600
0x68356A: mov     esi, [esp+1Ch+var_8]
0x68356E: cmp     esi, ebp
0x683570: jz      short loc_68359A
0x683572: mov     ecx, [esi+4]
0x683575: cmp     ecx, ebp
0x683577: jz      short loc_683582
0x683579: mov     eax, [ecx]
0x68357B: mov     edx, [eax+10h]
0x68357E: push    1
0x683580: call    edx
0x683582: mov     ecx, [esi+8]
0x683585: cmp     ecx, ebp
0x683587: jz      short loc_683591
0x683589: mov     eax, [ecx]
0x68358B: mov     edx, [eax]
0x68358D: push    1
0x68358F: call    edx
0x683591: push    esi
0x683592: call    FormHeapFree
0x683597: add     esp, 4
0x68359A: cmp     [esp+1Ch+var_C], ebp
0x68359E: jnz     short loc_683550
0x6835A0: mov     ecx, edi
0x6835A2: call    NiTMap_Clear
0x6835A7: mov     ecx, [ebx+14h]
0x6835AA: lea     edi, [ebx+10h]
0x6835AD: xor     eax, eax
0x6835AF: cmp     ecx, ebp
0x6835B1: jbe     short loc_6835CA
0x6835B3: mov     esi, [edi+8]
0x6835B6: mov     edx, esi
0x6835B8: cmp     [edx], ebp
0x6835BA: jnz     loc_6836C6
0x6835C0: add     eax, 1
0x6835C3: add     edx, 4
0x6835C6: cmp     eax, ecx
0x6835C8: jb      short loc_6835B8
0x6835CA: xor     eax, eax
0x6835CC: cmp     eax, ebp
0x6835CE: mov     [esp+1Ch+var_C], eax
0x6835D2: jz      short loc_683624
0x6835D4: lea     eax, [esp+1Ch+var_8]
0x6835D8: push    eax
0x6835D9: lea     ecx, [esp+20h+var_4]
0x6835DD: push    ecx
0x6835DE: lea     edx, [esp+24h+var_C]
0x6835E2: push    edx
0x6835E3: mov     ecx, edi
0x6835E5: mov     [esp+28h+var_8], ebp
0x6835E9: call    sub_452600
0x6835EE: mov     esi, [esp+1Ch+var_8]
0x6835F2: cmp     esi, ebp
0x6835F4: jz      short loc_68361E
0x6835F6: mov     ecx, [esi+4]
0x6835F9: cmp     ecx, ebp
0x6835FB: jz      short loc_683606
0x6835FD: mov     eax, [ecx]
0x6835FF: mov     edx, [eax+10h]
0x683602: push    1
0x683604: call    edx
0x683606: mov     ecx, [esi+8]
0x683609: cmp     ecx, ebp
0x68360B: jz      short loc_683615
0x68360D: mov     eax, [ecx]
0x68360F: mov     edx, [eax]
0x683611: push    1
0x683613: call    edx
0x683615: push    esi
0x683616: call    FormHeapFree
0x68361B: add     esp, 4
0x68361E: cmp     [esp+1Ch+var_C], ebp
0x683622: jnz     short loc_6835D4
0x683624: mov     ecx, edi
0x683626: call    NiTMap_Clear
0x68362B: mov     ecx, [ebx+34h]
0x68362E: lea     edi, [ebx+30h]
0x683631: xor     eax, eax
0x683633: cmp     ecx, ebp
0x683635: jbe     short loc_683652
0x683637: mov     esi, [edi+8]
0x68363A: mov     edx, esi
0x68363C: lea     esp, [esp+0]
0x683640: cmp     [edx], ebp
0x683642: jnz     loc_6836CE
0x683648: add     eax, 1
0x68364B: add     edx, 4
0x68364E: cmp     eax, ecx
0x683650: jb      short loc_683640
0x683652: xor     eax, eax
0x683654: cmp     eax, ebp
0x683656: mov     [esp+1Ch+var_C], eax
0x68365A: jz      short loc_6836B0
0x68365C: lea     esp, [esp+0]
0x683660: lea     eax, [esp+1Ch+var_8]
0x683664: push    eax
0x683665: lea     ecx, [esp+20h+var_4]
0x683669: push    ecx
0x68366A: lea     edx, [esp+24h+var_C]
0x68366E: push    edx
0x68366F: mov     ecx, edi
0x683671: mov     [esp+28h+var_8], ebp
0x683675: call    sub_452600
0x68367A: mov     esi, [esp+1Ch+var_8]
0x68367E: cmp     esi, ebp
0x683680: jz      short loc_6836AA
0x683682: mov     ecx, [esi+4]
0x683685: cmp     ecx, ebp
0x683687: jz      short loc_683692
0x683689: mov     eax, [ecx]
0x68368B: mov     edx, [eax+10h]
0x68368E: push    1
0x683690: call    edx
0x683692: mov     ecx, [esi+8]
0x683695: cmp     ecx, ebp
0x683697: jz      short loc_6836A1
0x683699: mov     eax, [ecx]
0x68369B: mov     edx, [eax]
0x68369D: push    1
0x68369F: call    edx
0x6836A1: push    esi
0x6836A2: call    FormHeapFree
0x6836A7: add     esp, 4
0x6836AA: cmp     [esp+1Ch+var_C], ebp
0x6836AE: jnz     short loc_683660
0x6836B0: mov     ecx, edi
0x6836B2: pop     edi
0x6836B3: pop     esi
0x6836B4: pop     ebp
0x6836B5: pop     ebx
0x6836B6: add     esp, 0Ch
0x6836B9: jmp     NiTMap_Clear
0x6836BE: mov     eax, [esi+eax*4]
0x6836C1: jmp     loc_683544
0x6836C6: mov     eax, [esi+eax*4]
0x6836C9: jmp     loc_6835CC
0x6836CE: mov     eax, [esi+eax*4]
0x6836D1: jmp     loc_683654
