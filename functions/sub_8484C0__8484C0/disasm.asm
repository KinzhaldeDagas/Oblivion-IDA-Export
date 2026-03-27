0x8484C0: push    0FFFFFFFFh
0x8484C2: push    offset SEH_851CA0
0x8484C7: mov     eax, large fs:0
0x8484CD: push    eax
0x8484CE: push    ecx
0x8484CF: push    ebx
0x8484D0: push    ebp
0x8484D1: push    esi
0x8484D2: push    edi
0x8484D3: mov     eax, ds:0B30AACh
0x8484D8: xor     eax, esp
0x8484DA: push    eax
0x8484DB: lea     eax, [esp+24h+var_C]
0x8484DF: mov     large fs:0, eax
0x8484E5: mov     edi, ecx
0x8484E7: mov     esi, ds:0B45B24h
0x8484ED: mov     ecx, [esp+24h+arg_C]
0x8484F1: mov     eax, [esi+24h]
0x8484F4: mov     ebp, [eax]
0x8484F6: push    0
0x8484F8: push    ecx
0x8484F9: mov     ecx, edi
0x8484FB: call    sub_848FD0
0x848500: mov     ebx, [ebp+4]
0x848503: cmp     ebx, eax
0x848505: mov     [esp+24h+var_10], eax
0x848509: jz      short loc_848540
0x84850B: test    ebx, ebx
0x84850D: jz      short loc_84852F
0x84850F: lea     edx, [ebx+4]
0x848512: push    edx; lpAddend
0x848513: call    dword ptr ds:0A2807Ch
0x848519: test    eax, eax
0x84851B: jnz     short loc_84852B
0x84851D: test    ebx, ebx
0x84851F: jz      short loc_84852B
0x848521: mov     eax, [ebx]
0x848523: mov     edx, [eax]
0x848525: push    1
0x848527: mov     ecx, ebx
0x848529: call    edx
0x84852B: mov     eax, [esp+24h+var_10]
0x84852F: test    eax, eax
0x848531: mov     [ebp+4], eax
0x848534: jz      short loc_848540
0x848536: add     eax, 4
0x848539: push    eax; lpAddend
0x84853A: call    dword ptr ds:0A28078h
0x848540: mov     eax, [esp+24h+arg_C]
0x848544: push    eax
0x848545: push    ebp
0x848546: mov     ecx, edi
0x848548: call    sub_848FA0
0x84854D: mov     ebx, 1
0x848552: add     [esi+60h], ebx
0x848555: mov     [esp+24h+arg_C], esi
0x848559: mov     edx, [edi+38h]
0x84855C: lea     ecx, [esp+24h+arg_C]
0x848560: push    ecx
0x848561: push    edx
0x848562: lea     ecx, [edi+40h]
0x848565: mov     [esp+2Ch+var_4], 0
0x84856D: call    sub_76CE40
0x848572: or      eax, 0FFFFFFFFh
0x848575: add     [esi+60h], eax
0x848578: mov     [esp+24h+var_4], eax
0x84857C: jnz     short loc_848585
0x84857E: mov     ecx, esi
0x848580: call    sub_7604D0
0x848585: add     [edi+38h], ebx
0x848588: mov     ecx, dword ptr [esp+24h+var_C]
0x84858C: mov     large fs:0, ecx
0x848593: pop     ecx
0x848594: pop     edi
0x848595: pop     esi
0x848596: pop     ebp
0x848597: pop     ebx
0x848598: add     esp, 10h
0x84859B: retn    10h
