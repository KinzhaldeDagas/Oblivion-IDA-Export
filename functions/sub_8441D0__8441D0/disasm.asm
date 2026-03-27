0x8441D0: push    0FFFFFFFFh
0x8441D2: push    offset SEH_880560
0x8441D7: mov     eax, large fs:0
0x8441DD: push    eax
0x8441DE: push    ebx
0x8441DF: push    ebp
0x8441E0: push    esi
0x8441E1: push    edi
0x8441E2: mov     eax, ds:0B30AACh
0x8441E7: xor     eax, esp
0x8441E9: push    eax
0x8441EA: lea     eax, [esp+20h+var_C]
0x8441EE: mov     large fs:0, eax
0x8441F4: mov     esi, ecx
0x8441F6: mov     eax, [esp+20h+arg_8]
0x8441FA: mov     eax, [eax+10h]
0x8441FD: mov     edx, [esi]
0x8441FF: mov     edx, [edx+0BCh]
0x844205: mov     edi, ds:0B45A10h
0x84420B: push    eax
0x84420C: mov     eax, [esp+24h+arg_0]
0x844210: push    0
0x844212: push    eax
0x844213: call    edx
0x844215: mov     ecx, [esp+20h+arg_C]
0x844219: mov     eax, [edi+24h]
0x84421C: mov     ebp, [eax]
0x84421E: push    0
0x844220: push    ecx
0x844221: mov     ecx, esi
0x844223: call    sub_848FD0
0x844228: mov     ebx, [ebp+4]
0x84422B: cmp     ebx, eax
0x84422D: mov     [esp+20h+arg_8], eax
0x844231: jz      short loc_844268
0x844233: test    ebx, ebx
0x844235: jz      short loc_844257
0x844237: lea     edx, [ebx+4]
0x84423A: push    edx; lpAddend
0x84423B: call    dword ptr ds:0A2807Ch
0x844241: test    eax, eax
0x844243: jnz     short loc_844253
0x844245: test    ebx, ebx
0x844247: jz      short loc_844253
0x844249: mov     eax, [ebx]
0x84424B: mov     edx, [eax]
0x84424D: push    1
0x84424F: mov     ecx, ebx
0x844251: call    edx
0x844253: mov     eax, [esp+20h+arg_8]
0x844257: test    eax, eax
0x844259: mov     [ebp+4], eax
0x84425C: jz      short loc_844268
0x84425E: add     eax, 4
0x844261: push    eax; lpAddend
0x844262: call    dword ptr ds:0A28078h
0x844268: mov     eax, [esp+20h+arg_C]
0x84426C: push    eax
0x84426D: push    ebp
0x84426E: mov     ecx, esi
0x844270: call    sub_848FA0
0x844275: mov     ecx, [edi+24h]
0x844278: mov     ebx, [ecx+10h]
0x84427B: mov     eax, ds:0B43108h
0x844280: mov     ebp, [ebx+4]
0x844283: add     ebx, 4
0x844286: cmp     ebp, eax
0x844288: mov     [esp+20h+arg_C], eax
0x84428C: jz      short loc_8442C3
0x84428E: test    ebp, ebp
0x844290: jz      short loc_8442B3
0x844292: lea     edx, [ebp+4]
0x844295: push    edx; lpAddend
0x844296: call    dword ptr ds:0A2807Ch
0x84429C: test    eax, eax
0x84429E: jnz     short loc_8442AF
0x8442A0: test    ebp, ebp
0x8442A2: jz      short loc_8442AF
0x8442A4: mov     eax, [ebp+0]
0x8442A7: mov     edx, [eax]
0x8442A9: push    1
0x8442AB: mov     ecx, ebp
0x8442AD: call    edx
0x8442AF: mov     eax, [esp+20h+arg_C]
0x8442B3: test    eax, eax
0x8442B5: mov     [ebx], eax
0x8442B7: jz      short loc_8442C3
0x8442B9: add     eax, 4
0x8442BC: push    eax; lpAddend
0x8442BD: call    dword ptr ds:0A28078h
0x8442C3: mov     eax, [edi+24h]
0x8442C6: mov     ebp, [eax+14h]
0x8442C9: mov     eax, ds:0B4310Ch
0x8442CE: mov     ebx, [ebp+4]
0x8442D1: cmp     ebx, eax
0x8442D3: mov     ecx, eax
0x8442D5: mov     [esp+20h+arg_C], ecx
0x8442D9: jz      short loc_844310
0x8442DB: test    ebx, ebx
0x8442DD: jz      short loc_8442FF
0x8442DF: lea     ecx, [ebx+4]
0x8442E2: push    ecx; lpAddend
0x8442E3: call    dword ptr ds:0A2807Ch
0x8442E9: test    eax, eax
0x8442EB: jnz     short loc_8442FB
0x8442ED: test    ebx, ebx
0x8442EF: jz      short loc_8442FB
0x8442F1: mov     edx, [ebx]
0x8442F3: mov     eax, [edx]
0x8442F5: push    1
0x8442F7: mov     ecx, ebx
0x8442F9: call    eax
0x8442FB: mov     ecx, [esp+20h+arg_C]
0x8442FF: test    ecx, ecx
0x844301: mov     [ebp+4], ecx
0x844304: jz      short loc_844310
0x844306: add     ecx, 4
0x844309: push    ecx; lpAddend
0x84430A: call    dword ptr ds:0A28078h
0x844310: mov     ebx, 1
0x844315: add     [edi+60h], ebx
0x844318: mov     [esp+20h+arg_C], edi
0x84431C: mov     edx, [esi+38h]
0x84431F: lea     ecx, [esp+20h+arg_C]
0x844323: push    ecx
0x844324: push    edx
0x844325: lea     ecx, [esi+40h]
0x844328: mov     [esp+28h+var_4], 0
0x844330: call    sub_76CE40
0x844335: or      eax, 0FFFFFFFFh
0x844338: add     [edi+60h], eax
0x84433B: mov     [esp+20h+var_4], eax
0x84433F: jnz     short loc_844348
0x844341: mov     ecx, edi
0x844343: call    sub_7604D0
0x844348: add     [esi+38h], ebx
0x84434B: mov     ecx, dword ptr [esp+20h+var_C]
0x84434F: mov     large fs:0, ecx
0x844356: pop     ecx
0x844357: pop     edi
0x844358: pop     esi
0x844359: pop     ebp
0x84435A: pop     ebx
0x84435B: add     esp, 0Ch
0x84435E: retn    10h
