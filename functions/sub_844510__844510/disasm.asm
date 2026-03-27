0x844510: push    0FFFFFFFFh
0x844512: push    offset SEH_880560
0x844517: mov     eax, large fs:0
0x84451D: push    eax
0x84451E: push    ebx
0x84451F: push    ebp
0x844520: push    esi
0x844521: push    edi
0x844522: mov     eax, ds:0B30AACh
0x844527: xor     eax, esp
0x844529: push    eax
0x84452A: lea     eax, [esp+20h+var_C]
0x84452E: mov     large fs:0, eax
0x844534: mov     esi, ecx
0x844536: mov     eax, [esp+20h+arg_8]
0x84453A: mov     eax, [eax+10h]
0x84453D: mov     edx, [esi]
0x84453F: mov     edx, [edx+0BCh]
0x844545: mov     edi, ds:0B45A1Ch
0x84454B: push    eax
0x84454C: mov     eax, [esp+24h+arg_0]
0x844550: push    0
0x844552: push    eax
0x844553: call    edx
0x844555: mov     ecx, [esp+20h+arg_C]
0x844559: mov     eax, [edi+24h]
0x84455C: mov     ebp, [eax]
0x84455E: push    0
0x844560: push    ecx
0x844561: mov     ecx, esi
0x844563: call    sub_848FD0
0x844568: mov     ebx, [ebp+4]
0x84456B: cmp     ebx, eax
0x84456D: mov     [esp+20h+arg_8], eax
0x844571: jz      short loc_8445A8
0x844573: test    ebx, ebx
0x844575: jz      short loc_844597
0x844577: lea     edx, [ebx+4]
0x84457A: push    edx; lpAddend
0x84457B: call    dword ptr ds:0A2807Ch
0x844581: test    eax, eax
0x844583: jnz     short loc_844593
0x844585: test    ebx, ebx
0x844587: jz      short loc_844593
0x844589: mov     eax, [ebx]
0x84458B: mov     edx, [eax]
0x84458D: push    1
0x84458F: mov     ecx, ebx
0x844591: call    edx
0x844593: mov     eax, [esp+20h+arg_8]
0x844597: test    eax, eax
0x844599: mov     [ebp+4], eax
0x84459C: jz      short loc_8445A8
0x84459E: add     eax, 4
0x8445A1: push    eax; lpAddend
0x8445A2: call    dword ptr ds:0A28078h
0x8445A8: mov     eax, [esp+20h+arg_C]
0x8445AC: push    eax
0x8445AD: push    ebp
0x8445AE: mov     ecx, esi
0x8445B0: call    sub_848FA0
0x8445B5: mov     ecx, [edi+24h]
0x8445B8: mov     ebx, [ecx+10h]
0x8445BB: mov     eax, ds:0B43108h
0x8445C0: mov     ebp, [ebx+4]
0x8445C3: add     ebx, 4
0x8445C6: cmp     ebp, eax
0x8445C8: mov     [esp+20h+arg_C], eax
0x8445CC: jz      short loc_844603
0x8445CE: test    ebp, ebp
0x8445D0: jz      short loc_8445F3
0x8445D2: lea     edx, [ebp+4]
0x8445D5: push    edx; lpAddend
0x8445D6: call    dword ptr ds:0A2807Ch
0x8445DC: test    eax, eax
0x8445DE: jnz     short loc_8445EF
0x8445E0: test    ebp, ebp
0x8445E2: jz      short loc_8445EF
0x8445E4: mov     eax, [ebp+0]
0x8445E7: mov     edx, [eax]
0x8445E9: push    1
0x8445EB: mov     ecx, ebp
0x8445ED: call    edx
0x8445EF: mov     eax, [esp+20h+arg_C]
0x8445F3: test    eax, eax
0x8445F5: mov     [ebx], eax
0x8445F7: jz      short loc_844603
0x8445F9: add     eax, 4
0x8445FC: push    eax; lpAddend
0x8445FD: call    dword ptr ds:0A28078h
0x844603: mov     eax, [edi+24h]
0x844606: mov     ebp, [eax+14h]
0x844609: mov     eax, ds:0B4310Ch
0x84460E: mov     ebx, [ebp+4]
0x844611: cmp     ebx, eax
0x844613: mov     ecx, eax
0x844615: mov     [esp+20h+arg_C], ecx
0x844619: jz      short loc_844650
0x84461B: test    ebx, ebx
0x84461D: jz      short loc_84463F
0x84461F: lea     ecx, [ebx+4]
0x844622: push    ecx; lpAddend
0x844623: call    dword ptr ds:0A2807Ch
0x844629: test    eax, eax
0x84462B: jnz     short loc_84463B
0x84462D: test    ebx, ebx
0x84462F: jz      short loc_84463B
0x844631: mov     edx, [ebx]
0x844633: mov     eax, [edx]
0x844635: push    1
0x844637: mov     ecx, ebx
0x844639: call    eax
0x84463B: mov     ecx, [esp+20h+arg_C]
0x84463F: test    ecx, ecx
0x844641: mov     [ebp+4], ecx
0x844644: jz      short loc_844650
0x844646: add     ecx, 4
0x844649: push    ecx; lpAddend
0x84464A: call    dword ptr ds:0A28078h
0x844650: mov     ebx, 1
0x844655: add     [edi+60h], ebx
0x844658: mov     [esp+20h+arg_C], edi
0x84465C: mov     edx, [esi+38h]
0x84465F: lea     ecx, [esp+20h+arg_C]
0x844663: push    ecx
0x844664: push    edx
0x844665: lea     ecx, [esi+40h]
0x844668: mov     [esp+28h+var_4], 0
0x844670: call    sub_76CE40
0x844675: or      eax, 0FFFFFFFFh
0x844678: add     [edi+60h], eax
0x84467B: mov     [esp+20h+var_4], eax
0x84467F: jnz     short loc_844688
0x844681: mov     ecx, edi
0x844683: call    sub_7604D0
0x844688: add     [esi+38h], ebx
0x84468B: mov     ecx, dword ptr [esp+20h+var_C]
0x84468F: mov     large fs:0, ecx
0x844696: pop     ecx
0x844697: pop     edi
0x844698: pop     esi
0x844699: pop     ebp
0x84469A: pop     ebx
0x84469B: add     esp, 0Ch
0x84469E: retn    10h
