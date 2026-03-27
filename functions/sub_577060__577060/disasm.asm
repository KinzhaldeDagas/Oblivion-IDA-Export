0x577060: push    0FFFFFFFFh
0x577062: push    offset SEH_8C8970
0x577067: mov     eax, large fs:0
0x57706D: push    eax
0x57706E: push    ecx
0x57706F: push    esi
0x577070: push    edi
0x577071: mov     eax, ds:0B30AACh
0x577076: xor     eax, esp
0x577078: push    eax
0x577079: lea     eax, [esp+1Ch+var_C]
0x57707D: mov     large fs:0, eax
0x577083: mov     esi, ecx
0x577085: push    38h ; '8'; Size
0x577087: call    FormHeapAlloc
0x57708C: add     esp, 4
0x57708F: mov     [esp+1Ch+var_10], eax
0x577093: test    eax, eax
0x577095: mov     [esp+1Ch+var_4], 0
0x57709D: jz      short loc_5770D2
0x57709F: mov     ecx, [esi+18h]
0x5770A2: push    ecx
0x5770A3: mov     ecx, [esi+8]
0x5770A6: sub     esp, 10h
0x5770A9: mov     edx, esp
0x5770AB: mov     [edx], ecx
0x5770AD: mov     ecx, [esi+0Ch]
0x5770B0: mov     [edx+4], ecx
0x5770B3: mov     ecx, [esi+10h]
0x5770B6: mov     [edx+8], ecx
0x5770B9: mov     ecx, [esi+14h]
0x5770BC: mov     [edx+0Ch], ecx
0x5770BF: movzx   edx, byte ptr [esi+4]
0x5770C3: mov     ecx, [esi]
0x5770C5: push    edx
0x5770C6: push    ecx
0x5770C7: mov     ecx, eax
0x5770C9: call    sub_576F30
0x5770CE: mov     edi, eax
0x5770D0: jmp     short loc_5770D4
0x5770D2: xor     edi, edi
0x5770D4: mov     edx, [esi+1Ch]
0x5770D7: push    0; a3
0x5770D9: push    edx; a2
0x5770DA: lea     ecx, [edi+1Ch]; this
0x5770DD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5770E5: call    BSStringT_Set
0x5770EA: mov     eax, [esi+24h]
0x5770ED: mov     [edi+24h], eax
0x5770F0: mov     ecx, [esi+28h]
0x5770F3: mov     [edi+28h], ecx
0x5770F6: mov     edx, [esi+2Ch]
0x5770F9: mov     [edi+2Ch], edx
0x5770FC: mov     eax, [esi+34h]
0x5770FF: mov     [edi+34h], eax
0x577102: mov     dword ptr [edi+30h], 0
0x577109: mov     eax, edi
0x57710B: mov     ecx, [esp+1Ch+var_C]
0x57710F: mov     large fs:0, ecx
0x577116: pop     ecx
0x577117: pop     edi
0x577118: pop     esi
0x577119: add     esp, 10h
0x57711C: retn
