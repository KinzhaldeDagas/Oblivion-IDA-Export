0x9320F0: sub     esp, 14h
0x9320F3: push    ebx
0x9320F4: mov     ebx, [esp+18h+arg_8]
0x9320F8: mov     ecx, [ebx+4]
0x9320FB: push    ebp
0x9320FC: xor     eax, eax
0x9320FE: cmp     ecx, eax
0x932100: push    esi
0x932101: mov     esi, [esp+20h+arg_C]
0x932105: push    edi
0x932106: mov     [esp+24h+var_10], eax
0x93210A: jle     loc_932244
0x932110: mov     [esp+24h+var_14], eax
0x932114: jmp     short loc_932120
0x932116: xor     eax, eax
0x932118: jmp     short loc_932120
0x93211A: align 10h
0x932120: mov     ebp, [esp+24h+var_14]
0x932124: mov     [esi+4], eax
0x932127: mov     eax, [esi+8]
0x93212A: mov     edi, [ebx]
0x93212C: add     edi, ebp
0x93212E: and     eax, 3FFFFFFFh
0x932133: cmp     eax, 1
0x932136: mov     [esp+24h+var_C], edi
0x93213A: jge     short loc_932154
0x93213C: add     eax, eax
0x93213E: cmp     eax, 1
0x932141: jg      short loc_932148
0x932143: mov     eax, 1
0x932148: push    10h
0x93214A: push    eax
0x93214B: push    esi
0x93214C: call    sub_8A6E40
0x932151: add     esp, 0Ch
0x932154: mov     eax, [esi]
0x932156: mov     dword ptr [esi+4], 1
0x93215D: mov     ecx, [edi]
0x93215F: mov     [eax], ecx
0x932161: mov     edx, [edi+4]
0x932164: mov     [eax+4], edx
0x932167: mov     ebp, [edi+8]
0x93216A: test    ebp, ebp
0x93216C: jz      loc_932223
0x932172: jmp     short loc_932178
0x932174: mov     edi, [esp+24h+var_C]
0x932178: mov     eax, [ebp+0]
0x93217B: cmp     eax, [edi]
0x93217D: jnz     short loc_9321D9
0x93217F: mov     ecx, [ebp+4]
0x932182: cmp     ecx, [edi+4]
0x932185: jnz     short loc_9321D9
0x932187: mov     edx, [ebp+0Ch]
0x93218A: cmp     edx, [edi+0Ch]
0x93218D: jnz     short loc_9321D9
0x93218F: mov     edi, [esp+24h+arg_4]
0x932193: mov     ebx, [esp+24h+arg_0]
0x932197: push    esi
0x932198: push    ecx
0x932199: mov     eax, esp
0x93219B: mov     byte ptr [eax], 1
0x93219E: mov     eax, [edi+4]
0x9321A1: push    eax
0x9321A2: lea     eax, [esp+30h+var_8]
0x9321A6: push    ebx
0x9321A7: push    eax
0x9321A8: call    sub_9316C0
0x9321AD: add     esp, 14h
0x9321B0: push    esi
0x9321B1: push    ecx
0x9321B2: mov     eax, esp
0x9321B4: mov     byte ptr [eax], 0
0x9321B7: mov     eax, [ebx+4]
0x9321BA: push    eax
0x9321BB: lea     ecx, [esp+30h+var_4]
0x9321BF: push    edi
0x9321C0: push    ecx
0x9321C1: call    sub_9316C0
0x9321C6: mov     al, [esp+38h+var_8]
0x9321CA: add     esp, 14h
0x9321CD: test    al, al
0x9321CF: jz      short loc_9321D9
0x9321D1: mov     al, [esp+24h+var_4]
0x9321D5: test    al, al
0x9321D7: jnz     short loc_932247
0x9321D9: mov     edi, [esi+4]
0x9321DC: mov     eax, [esi+8]
0x9321DF: lea     ebx, [edi+1]
0x9321E2: and     eax, 3FFFFFFFh
0x9321E7: cmp     eax, ebx
0x9321E9: jge     short loc_9321FF
0x9321EB: add     eax, eax
0x9321ED: cmp     ebx, eax
0x9321EF: jl      short loc_9321F3
0x9321F1: mov     eax, ebx
0x9321F3: push    10h
0x9321F5: push    eax
0x9321F6: push    esi
0x9321F7: call    sub_8A6E40
0x9321FC: add     esp, 0Ch
0x9321FF: mov     ecx, [esi]
0x932201: mov     [esi+4], ebx
0x932204: mov     edx, [ebp+0]
0x932207: shl     edi, 4
0x93220A: add     edi, ecx
0x93220C: mov     [edi], edx
0x93220E: mov     eax, [ebp+4]
0x932211: mov     [edi+4], eax
0x932214: mov     ebp, [ebp+8]
0x932217: test    ebp, ebp
0x932219: jnz     loc_932174
0x93221F: mov     ebx, [esp+24h+arg_8]
0x932223: mov     eax, [esp+24h+var_10]
0x932227: mov     edx, [esp+24h+var_14]
0x93222B: mov     ecx, [ebx+4]
0x93222E: inc     eax
0x93222F: add     edx, 14h
0x932232: cmp     eax, ecx
0x932234: mov     [esp+24h+var_10], eax
0x932238: mov     [esp+24h+var_14], edx
0x93223C: jl      loc_932116
0x932242: xor     eax, eax
0x932244: mov     [esi+4], eax
0x932247: pop     edi
0x932248: pop     esi
0x932249: pop     ebp
0x93224A: pop     ebx
0x93224B: add     esp, 14h
0x93224E: retn
