0x8CAFF0: push    ebp
0x8CAFF1: push    esi
0x8CAFF2: mov     esi, ecx
0x8CAFF4: mov     ecx, [esi+60h]
0x8CAFF7: xor     ebp, ebp
0x8CAFF9: test    ecx, ecx
0x8CAFFB: jle     short loc_8CB066
0x8CAFFD: mov     eax, [esi+5Ch]
0x8CB000: push    ebx
0x8CB001: mov     ebx, [esp+0Ch+arg_0]
0x8CB005: cmp     [eax], ebx
0x8CB007: jz      short loc_8CB017
0x8CB009: inc     ebp
0x8CB00A: add     eax, 4
0x8CB00D: cmp     ebp, ecx
0x8CB00F: jl      short loc_8CB005
0x8CB011: pop     ebx
0x8CB012: pop     esi
0x8CB013: pop     ebp
0x8CB014: retn    4
0x8CB017: test    ebp, ebp
0x8CB019: jl      short loc_8CB065
0x8CB01B: test    esi, esi
0x8CB01D: jz      short loc_8CB024
0x8CB01F: lea     eax, [esi+48h]
0x8CB022: jmp     short loc_8CB026
0x8CB024: xor     eax, eax
0x8CB026: push    edi
0x8CB027: push    eax
0x8CB028: mov     ecx, ebx
0x8CB02A: call    sub_898B20
0x8CB02F: mov     eax, [esi+6Ch]
0x8CB032: xor     edi, edi
0x8CB034: test    eax, eax
0x8CB036: jle     short loc_8CB04C
0x8CB038: mov     eax, [esi+68h]
0x8CB03B: mov     ecx, [eax+edi*4]
0x8CB03E: mov     edx, [ecx]
0x8CB040: push    ebx
0x8CB041: call    dword ptr [edx+4]
0x8CB044: mov     eax, [esi+6Ch]
0x8CB047: inc     edi
0x8CB048: cmp     edi, eax
0x8CB04A: jl      short loc_8CB038
0x8CB04C: mov     ecx, [esi+60h]
0x8CB04F: mov     eax, [esi+5Ch]
0x8CB052: dec     ecx
0x8CB053: mov     [esi+60h], ecx
0x8CB056: mov     ecx, [eax+ecx*4]
0x8CB059: mov     [eax+ebp*4], ecx
0x8CB05C: push    ebx
0x8CB05D: mov     ecx, esi
0x8CB05F: call    sub_8CAE40
0x8CB064: pop     edi
0x8CB065: pop     ebx
0x8CB066: pop     esi
0x8CB067: pop     ebp
0x8CB068: retn    4
