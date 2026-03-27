0x703500: push    ebx
0x703501: push    ebp
0x703502: push    esi
0x703503: push    edi
0x703504: mov     edi, [esp+10h+arg_0]
0x703508: push    edi
0x703509: mov     esi, ecx
0x70350B: call    sub_71FEC0
0x703510: mov     eax, [edi+21Ch]
0x703516: mov     edx, [eax+4]
0x703519: push    1
0x70351B: lea     ecx, [esp+14h+arg_0]
0x70351F: push    ecx
0x703520: mov     ebx, 2
0x703525: push    ebx
0x703526: lea     ebp, [esi+60h]
0x703529: push    ebp
0x70352A: push    eax
0x70352B: mov     [esp+24h+arg_0], ebx
0x70352F: call    edx
0x703531: movzx   eax, word ptr [ebp+0]
0x703535: xor     ecx, ecx
0x703537: mov     edx, 8
0x70353C: mul     edx
0x70353E: seto    cl
0x703541: neg     ecx
0x703543: or      ecx, eax
0x703545: push    ecx; Size
0x703546: call    FormHeapAlloc
0x70354B: mov     [esi+58h], eax
0x70354E: movzx   eax, word ptr [ebp+0]
0x703552: xor     ecx, ecx
0x703554: mov     edx, ebx
0x703556: mul     edx
0x703558: seto    cl
0x70355B: neg     ecx
0x70355D: or      ecx, eax
0x70355F: push    ecx; Size
0x703560: call    FormHeapAlloc
0x703565: movzx   ebp, word ptr [ebp+0]
0x703569: push    1
0x70356B: lea     ecx, [esp+30h+arg_0]
0x70356F: push    ecx
0x703570: mov     ecx, [esi+58h]
0x703573: lea     edx, ds:0[ebp*8]
0x70357A: push    edx
0x70357B: mov     [esi+5Ch], eax
0x70357E: mov     eax, [edi+21Ch]
0x703584: mov     edx, [eax+4]
0x703587: push    ecx
0x703588: push    eax
0x703589: mov     [esp+40h+arg_0], 8
0x703591: call    edx
0x703593: mov     eax, [edi+21Ch]
0x703599: push    1
0x70359B: lea     ecx, [esp+44h+arg_0]
0x70359F: push    ecx
0x7035A0: mov     ecx, [esi+5Ch]
0x7035A3: lea     edx, [ebp+ebp+0]
0x7035A7: push    edx
0x7035A8: mov     edx, [eax+4]
0x7035AB: push    ecx
0x7035AC: push    eax
0x7035AD: mov     [esp+54h+arg_0], ebx
0x7035B1: call    edx
0x7035B3: mov     eax, [edi+21Ch]
0x7035B9: add     esp, 44h
0x7035BC: push    1
0x7035BE: lea     ecx, [esp+14h+arg_0]
0x7035C2: push    ecx
0x7035C3: push    ebx
0x7035C4: lea     edx, [esi+62h]
0x7035C7: push    edx
0x7035C8: push    eax
0x7035C9: mov     eax, [eax+4]
0x7035CC: mov     [esp+24h+arg_0], ebx
0x7035D0: call    eax
0x7035D2: mov     eax, [edi+21Ch]
0x7035D8: mov     [esp+24h+arg_0], ebx
0x7035DC: push    1
0x7035DE: lea     ecx, [esp+28h+arg_0]
0x7035E2: push    ecx
0x7035E3: push    ebx
0x7035E4: lea     edx, [esi+64h]
0x7035E7: push    edx
0x7035E8: push    eax
0x7035E9: mov     eax, [eax+4]
0x7035EC: call    eax
0x7035EE: mov     eax, [edi+21Ch]
0x7035F4: push    1
0x7035F6: lea     ecx, [esp+3Ch+arg_0]
0x7035FA: push    ecx
0x7035FB: push    ebx
0x7035FC: lea     edx, [esi+66h]
0x7035FF: push    edx
0x703600: push    eax
0x703601: mov     eax, [eax+4]
0x703604: mov     [esp+4Ch+arg_0], ebx
0x703608: call    eax
0x70360A: mov     eax, [edi+21Ch]
0x703610: push    1
0x703612: lea     ecx, [esp+50h+arg_0]
0x703616: push    ecx
0x703617: push    ebx
0x703618: lea     edx, [esi+68h]
0x70361B: push    edx
0x70361C: push    eax
0x70361D: mov     eax, [eax+4]
0x703620: mov     [esp+60h+arg_0], ebx
0x703624: call    eax
0x703626: mov     eax, [edi+21Ch]
0x70362C: add     esp, 50h
0x70362F: push    1
0x703631: lea     ecx, [esp+14h+arg_0]
0x703635: push    ecx
0x703636: push    ebx
0x703637: lea     edx, [esi+6Ah]
0x70363A: push    edx
0x70363B: push    eax
0x70363C: mov     eax, [eax+4]
0x70363F: mov     [esp+24h+arg_0], ebx
0x703643: call    eax
0x703645: mov     edi, [edi+21Ch]
0x70364B: mov     edx, [edi+4]
0x70364E: push    1
0x703650: lea     ecx, [esp+28h+arg_0]
0x703654: push    ecx
0x703655: push    ebx
0x703656: add     esi, 6Ch ; 'l'
0x703659: push    esi
0x70365A: push    edi
0x70365B: mov     [esp+38h+arg_0], ebx
0x70365F: call    edx
0x703661: add     esp, 28h
0x703664: pop     edi
0x703665: pop     esi
0x703666: pop     ebp
0x703667: pop     ebx
0x703668: retn    4
