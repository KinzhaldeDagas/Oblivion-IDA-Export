0x8747D0: push    0FFFFFFFFh
0x8747D2: push    offset SEH_880560
0x8747D7: mov     eax, large fs:0
0x8747DD: push    eax
0x8747DE: push    ebx
0x8747DF: push    ebp
0x8747E0: push    esi
0x8747E1: push    edi
0x8747E2: mov     eax, ds:0B30AACh
0x8747E7: xor     eax, esp
0x8747E9: push    eax
0x8747EA: lea     eax, [esp+20h+var_C]
0x8747EE: mov     large fs:0, eax
0x8747F4: mov     esi, ecx
0x8747F6: mov     ebx, [esp+20h+arg_8]
0x8747FA: mov     eax, [ebx+10h]
0x8747FD: mov     edi, ds:0B47640h
0x874803: push    eax
0x874804: call    sub_848C40
0x874809: mov     ebx, [ebx+0Ch]
0x87480C: push    ebx
0x87480D: mov     ecx, esi
0x87480F: call    sub_848E50
0x874814: mov     ecx, [esp+20h+arg_0]
0x874818: mov     eax, [esi]
0x87481A: mov     edx, [eax+0BCh]
0x874820: push    0
0x874822: push    ebx
0x874823: push    ecx
0x874824: mov     ecx, esi
0x874826: call    edx
0x874828: mov     eax, [edi+24h]
0x87482B: mov     ecx, [esp+20h+arg_C]
0x87482F: mov     ebx, [eax]
0x874831: mov     edx, [ecx]
0x874833: mov     eax, [edx+88h]
0x874839: push    0
0x87483B: mov     [esp+24h+arg_8], ebx
0x87483F: call    eax
0x874841: mov     ebx, [ebx+4]
0x874844: mov     ebp, eax
0x874846: cmp     ebx, ebp
0x874848: jz      short loc_87487F
0x87484A: test    ebx, ebx
0x87484C: jz      short loc_87486A
0x87484E: lea     ecx, [ebx+4]
0x874851: push    ecx; lpAddend
0x874852: call    dword ptr ds:0A2807Ch
0x874858: test    eax, eax
0x87485A: jnz     short loc_87486A
0x87485C: test    ebx, ebx
0x87485E: jz      short loc_87486A
0x874860: mov     edx, [ebx]
0x874862: mov     eax, [edx]
0x874864: push    1
0x874866: mov     ecx, ebx
0x874868: call    eax
0x87486A: test    ebp, ebp
0x87486C: mov     ecx, [esp+20h+arg_8]
0x874870: mov     [ecx+4], ebp
0x874873: jz      short loc_87487F
0x874875: add     ebp, 4
0x874878: push    ebp; lpAddend
0x874879: call    dword ptr ds:0A28078h
0x87487F: mov     edx, [edi+24h]
0x874882: mov     eax, [esp+20h+arg_C]
0x874886: mov     ebx, [edx+4]
0x874889: push    0
0x87488B: push    eax
0x87488C: mov     ecx, esi
0x87488E: mov     [esp+28h+arg_8], ebx
0x874892: call    sub_848FD0
0x874897: mov     ebx, [ebx+4]
0x87489A: mov     ebp, eax
0x87489C: cmp     ebx, ebp
0x87489E: jz      short loc_8748D5
0x8748A0: test    ebx, ebx
0x8748A2: jz      short loc_8748C0
0x8748A4: lea     ecx, [ebx+4]
0x8748A7: push    ecx; lpAddend
0x8748A8: call    dword ptr ds:0A2807Ch
0x8748AE: test    eax, eax
0x8748B0: jnz     short loc_8748C0
0x8748B2: test    ebx, ebx
0x8748B4: jz      short loc_8748C0
0x8748B6: mov     edx, [ebx]
0x8748B8: mov     eax, [edx]
0x8748BA: push    1
0x8748BC: mov     ecx, ebx
0x8748BE: call    eax
0x8748C0: test    ebp, ebp
0x8748C2: mov     ecx, [esp+20h+arg_8]
0x8748C6: mov     [ecx+4], ebp
0x8748C9: jz      short loc_8748D5
0x8748CB: add     ebp, 4
0x8748CE: push    ebp; lpAddend
0x8748CF: call    dword ptr ds:0A28078h
0x8748D5: mov     edx, [edi+24h]
0x8748D8: mov     ebp, [edx+10h]
0x8748DB: mov     eax, ds:0B43110h
0x8748E0: mov     ebx, [ebp+4]
0x8748E3: cmp     ebx, eax
0x8748E5: mov     ecx, eax
0x8748E7: mov     [esp+20h+arg_C], ecx
0x8748EB: jz      short loc_874922
0x8748ED: test    ebx, ebx
0x8748EF: jz      short loc_874911
0x8748F1: lea     eax, [ebx+4]
0x8748F4: push    eax; lpAddend
0x8748F5: call    dword ptr ds:0A2807Ch
0x8748FB: test    eax, eax
0x8748FD: jnz     short loc_87490D
0x8748FF: test    ebx, ebx
0x874901: jz      short loc_87490D
0x874903: mov     edx, [ebx]
0x874905: mov     eax, [edx]
0x874907: push    1
0x874909: mov     ecx, ebx
0x87490B: call    eax
0x87490D: mov     ecx, [esp+20h+arg_C]
0x874911: test    ecx, ecx
0x874913: mov     [ebp+4], ecx
0x874916: jz      short loc_874922
0x874918: add     ecx, 4
0x87491B: push    ecx; lpAddend
0x87491C: call    dword ptr ds:0A28078h
0x874922: mov     ebx, 1
0x874927: add     [edi+60h], ebx
0x87492A: mov     [esp+20h+arg_C], edi
0x87492E: mov     edx, [esi+38h]
0x874931: lea     ecx, [esp+20h+arg_C]
0x874935: push    ecx
0x874936: push    edx
0x874937: lea     ecx, [esi+40h]
0x87493A: mov     [esp+28h+var_4], 0
0x874942: call    sub_76CE40
0x874947: or      eax, 0FFFFFFFFh
0x87494A: add     [edi+60h], eax
0x87494D: mov     [esp+20h+var_4], eax
0x874951: jnz     short loc_87495A
0x874953: mov     ecx, edi
0x874955: call    sub_7604D0
0x87495A: add     [esi+38h], ebx
0x87495D: mov     ecx, [esp+20h+var_C]
0x874961: mov     large fs:0, ecx
0x874968: pop     ecx
0x874969: pop     edi
0x87496A: pop     esi
0x87496B: pop     ebp
0x87496C: pop     ebx
0x87496D: add     esp, 0Ch
0x874970: retn    10h
