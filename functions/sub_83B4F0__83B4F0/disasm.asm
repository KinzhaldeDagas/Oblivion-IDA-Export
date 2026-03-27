0x83B4F0: push    0FFFFFFFFh
0x83B4F2: push    offset SEH_882120
0x83B4F7: mov     eax, large fs:0
0x83B4FD: push    eax
0x83B4FE: push    ebx
0x83B4FF: push    ebp
0x83B500: push    esi
0x83B501: push    edi
0x83B502: mov     eax, ds:0B30AACh
0x83B507: xor     eax, esp
0x83B509: push    eax
0x83B50A: lea     eax, [esp+20h+var_C]
0x83B50E: mov     large fs:0, eax
0x83B514: mov     esi, ecx
0x83B516: mov     ebx, [esp+20h+arg_8]
0x83B51A: mov     eax, [ebx+10h]
0x83B51D: mov     edi, ds:0B45794h
0x83B523: push    eax
0x83B524: call    sub_848C40
0x83B529: mov     ebx, [ebx+0Ch]
0x83B52C: push    ebx
0x83B52D: mov     ecx, esi
0x83B52F: call    sub_848E50
0x83B534: mov     ecx, [esp+20h+arg_0]
0x83B538: mov     eax, [esi]
0x83B53A: mov     edx, [eax+0BCh]
0x83B540: push    0
0x83B542: push    ebx
0x83B543: push    ecx
0x83B544: mov     ecx, esi
0x83B546: call    edx
0x83B548: mov     eax, [edi+24h]
0x83B54B: mov     ebx, [esp+20h+arg_C]
0x83B54F: mov     ebp, [eax]
0x83B551: mov     edx, [ebx]
0x83B553: mov     eax, [edx+88h]
0x83B559: push    0
0x83B55B: mov     ecx, ebx
0x83B55D: mov     [esp+24h+arg_8], ebp
0x83B561: call    eax
0x83B563: mov     ebp, [ebp+4]
0x83B566: cmp     ebp, eax
0x83B568: mov     [esp+20h+arg_0], eax
0x83B56C: jz      short loc_83B5A8
0x83B56E: test    ebp, ebp
0x83B570: jz      short loc_83B593
0x83B572: lea     ecx, [ebp+4]
0x83B575: push    ecx; lpAddend
0x83B576: call    dword ptr ds:0A2807Ch
0x83B57C: test    eax, eax
0x83B57E: jnz     short loc_83B58F
0x83B580: test    ebp, ebp
0x83B582: jz      short loc_83B58F
0x83B584: mov     edx, [ebp+0]
0x83B587: mov     eax, [edx]
0x83B589: push    1
0x83B58B: mov     ecx, ebp
0x83B58D: call    eax
0x83B58F: mov     eax, [esp+20h+arg_0]
0x83B593: test    eax, eax
0x83B595: mov     ecx, [esp+20h+arg_8]
0x83B599: mov     [ecx+4], eax
0x83B59C: jz      short loc_83B5A8
0x83B59E: add     eax, 4
0x83B5A1: push    eax; lpAddend
0x83B5A2: call    dword ptr ds:0A28078h
0x83B5A8: mov     edx, [esp+20h+arg_8]
0x83B5AC: push    ebx
0x83B5AD: push    edx
0x83B5AE: mov     ecx, esi
0x83B5B0: call    sub_848FA0
0x83B5B5: mov     eax, [edi+24h]
0x83B5B8: mov     ebp, [eax+4]
0x83B5BB: push    0
0x83B5BD: push    ebx
0x83B5BE: mov     ecx, esi
0x83B5C0: mov     [esp+28h+arg_8], ebp
0x83B5C4: call    sub_848FD0
0x83B5C9: mov     ebp, [ebp+4]
0x83B5CC: cmp     ebp, eax
0x83B5CE: mov     [esp+20h+arg_0], eax
0x83B5D2: jz      short loc_83B60E
0x83B5D4: test    ebp, ebp
0x83B5D6: jz      short loc_83B5F9
0x83B5D8: lea     ecx, [ebp+4]
0x83B5DB: push    ecx; lpAddend
0x83B5DC: call    dword ptr ds:0A2807Ch
0x83B5E2: test    eax, eax
0x83B5E4: jnz     short loc_83B5F5
0x83B5E6: test    ebp, ebp
0x83B5E8: jz      short loc_83B5F5
0x83B5EA: mov     edx, [ebp+0]
0x83B5ED: mov     eax, [edx]
0x83B5EF: push    1
0x83B5F1: mov     ecx, ebp
0x83B5F3: call    eax
0x83B5F5: mov     eax, [esp+20h+arg_0]
0x83B5F9: test    eax, eax
0x83B5FB: mov     ecx, [esp+20h+arg_8]
0x83B5FF: mov     [ecx+4], eax
0x83B602: jz      short loc_83B60E
0x83B604: add     eax, 4
0x83B607: push    eax; lpAddend
0x83B608: call    dword ptr ds:0A28078h
0x83B60E: mov     edx, [esp+20h+arg_8]
0x83B612: push    ebx
0x83B613: push    edx
0x83B614: mov     ecx, esi
0x83B616: call    sub_848FA0
0x83B61B: mov     ebx, 1
0x83B620: add     [edi+60h], ebx
0x83B623: mov     [esp+20h+arg_8], edi
0x83B627: mov     ecx, [esi+38h]
0x83B62A: lea     eax, [esp+20h+arg_8]
0x83B62E: push    eax
0x83B62F: push    ecx
0x83B630: lea     ecx, [esi+40h]
0x83B633: mov     [esp+28h+var_4], 0
0x83B63B: call    sub_76CE40
0x83B640: or      eax, 0FFFFFFFFh
0x83B643: add     [edi+60h], eax
0x83B646: mov     [esp+20h+var_4], eax
0x83B64A: jnz     short loc_83B653
0x83B64C: mov     ecx, edi
0x83B64E: call    sub_7604D0
0x83B653: add     [esi+38h], ebx
0x83B656: mov     ecx, [esp+20h+var_C]
0x83B65A: mov     large fs:0, ecx
0x83B661: pop     ecx
0x83B662: pop     edi
0x83B663: pop     esi
0x83B664: pop     ebp
0x83B665: pop     ebx
0x83B666: add     esp, 0Ch
0x83B669: retn    10h
