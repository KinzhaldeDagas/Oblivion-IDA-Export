0x844850: push    0FFFFFFFFh
0x844852: push    offset SEH_880560
0x844857: mov     eax, large fs:0
0x84485D: push    eax
0x84485E: push    ebx
0x84485F: push    ebp
0x844860: push    esi
0x844861: push    edi
0x844862: mov     eax, ds:0B30AACh
0x844867: xor     eax, esp
0x844869: push    eax
0x84486A: lea     eax, [esp+20h+var_C]
0x84486E: mov     large fs:0, eax
0x844874: mov     esi, ecx
0x844876: mov     eax, [esp+20h+arg_8]
0x84487A: mov     eax, [eax+10h]
0x84487D: mov     edx, [esi]
0x84487F: mov     edx, [edx+0BCh]
0x844885: mov     edi, ds:0B45A2Ch
0x84488B: push    eax
0x84488C: mov     eax, [esp+24h+arg_0]
0x844890: push    0
0x844892: push    eax
0x844893: call    edx
0x844895: mov     ecx, [esp+20h+arg_C]
0x844899: mov     eax, [edi+24h]
0x84489C: mov     ebp, [eax]
0x84489E: push    0
0x8448A0: push    ecx
0x8448A1: mov     ecx, esi
0x8448A3: call    sub_848FD0
0x8448A8: mov     ebx, [ebp+4]
0x8448AB: cmp     ebx, eax
0x8448AD: mov     [esp+20h+arg_8], eax
0x8448B1: jz      short loc_8448E8
0x8448B3: test    ebx, ebx
0x8448B5: jz      short loc_8448D7
0x8448B7: lea     edx, [ebx+4]
0x8448BA: push    edx; lpAddend
0x8448BB: call    dword ptr ds:0A2807Ch
0x8448C1: test    eax, eax
0x8448C3: jnz     short loc_8448D3
0x8448C5: test    ebx, ebx
0x8448C7: jz      short loc_8448D3
0x8448C9: mov     eax, [ebx]
0x8448CB: mov     edx, [eax]
0x8448CD: push    1
0x8448CF: mov     ecx, ebx
0x8448D1: call    edx
0x8448D3: mov     eax, [esp+20h+arg_8]
0x8448D7: test    eax, eax
0x8448D9: mov     [ebp+4], eax
0x8448DC: jz      short loc_8448E8
0x8448DE: add     eax, 4
0x8448E1: push    eax; lpAddend
0x8448E2: call    dword ptr ds:0A28078h
0x8448E8: mov     eax, [esp+20h+arg_C]
0x8448EC: push    eax
0x8448ED: push    ebp
0x8448EE: mov     ecx, esi
0x8448F0: call    sub_848FA0
0x8448F5: mov     ebx, 1
0x8448FA: add     [edi+60h], ebx
0x8448FD: mov     [esp+20h+arg_C], edi
0x844901: mov     edx, [esi+38h]
0x844904: lea     ecx, [esp+20h+arg_C]
0x844908: push    ecx
0x844909: push    edx
0x84490A: lea     ecx, [esi+40h]
0x84490D: mov     [esp+28h+var_4], 0
0x844915: call    sub_76CE40
0x84491A: or      eax, 0FFFFFFFFh
0x84491D: add     [edi+60h], eax
0x844920: mov     [esp+20h+var_4], eax
0x844924: jnz     short loc_84492D
0x844926: mov     ecx, edi
0x844928: call    sub_7604D0
0x84492D: add     [esi+38h], ebx
0x844930: mov     ecx, dword ptr [esp+20h+var_C]
0x844934: mov     large fs:0, ecx
0x84493B: pop     ecx
0x84493C: pop     edi
0x84493D: pop     esi
0x84493E: pop     ebp
0x84493F: pop     ebx
0x844940: add     esp, 0Ch
0x844943: retn    10h
