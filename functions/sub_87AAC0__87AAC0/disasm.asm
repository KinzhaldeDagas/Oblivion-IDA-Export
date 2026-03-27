0x87AAC0: push    0FFFFFFFFh
0x87AAC2: push    offset SEH_880560
0x87AAC7: mov     eax, large fs:0
0x87AACD: push    eax
0x87AACE: push    ebx
0x87AACF: push    ebp
0x87AAD0: push    esi
0x87AAD1: push    edi
0x87AAD2: mov     eax, ds:0B30AACh
0x87AAD7: xor     eax, esp
0x87AAD9: push    eax
0x87AADA: lea     eax, [esp+20h+var_C]
0x87AADE: mov     large fs:0, eax
0x87AAE4: mov     edi, ecx
0x87AAE6: mov     eax, [esp+20h+arg_8]
0x87AAEA: mov     eax, [eax+10h]
0x87AAED: mov     edx, [edi]
0x87AAEF: mov     edx, [edx+0BCh]
0x87AAF5: mov     esi, ds:0B4770Ch
0x87AAFB: push    eax
0x87AAFC: mov     eax, [esp+24h+arg_0]
0x87AB00: push    0
0x87AB02: push    eax
0x87AB03: call    edx
0x87AB05: mov     eax, [esi+24h]
0x87AB08: mov     ecx, [esp+20h+arg_C]
0x87AB0C: mov     ebx, [eax]
0x87AB0E: push    0
0x87AB10: push    ecx
0x87AB11: mov     ecx, edi
0x87AB13: mov     [esp+28h+arg_8], ebx
0x87AB17: call    sub_848FD0
0x87AB1C: mov     ebx, [ebx+4]
0x87AB1F: mov     ebp, eax
0x87AB21: cmp     ebx, ebp
0x87AB23: jz      short loc_87AB5A
0x87AB25: test    ebx, ebx
0x87AB27: jz      short loc_87AB45
0x87AB29: lea     edx, [ebx+4]
0x87AB2C: push    edx; lpAddend
0x87AB2D: call    dword ptr ds:0A2807Ch
0x87AB33: test    eax, eax
0x87AB35: jnz     short loc_87AB45
0x87AB37: test    ebx, ebx
0x87AB39: jz      short loc_87AB45
0x87AB3B: mov     eax, [ebx]
0x87AB3D: mov     edx, [eax]
0x87AB3F: push    1
0x87AB41: mov     ecx, ebx
0x87AB43: call    edx
0x87AB45: test    ebp, ebp
0x87AB47: mov     eax, [esp+20h+arg_8]
0x87AB4B: mov     [eax+4], ebp
0x87AB4E: jz      short loc_87AB5A
0x87AB50: add     ebp, 4
0x87AB53: push    ebp; lpAddend
0x87AB54: call    dword ptr ds:0A28078h
0x87AB5A: mov     ecx, [esi+24h]
0x87AB5D: mov     ebx, [ecx+4]
0x87AB60: mov     ecx, [esp+20h+arg_C]
0x87AB64: mov     edx, [ecx]
0x87AB66: mov     eax, [edx+88h]
0x87AB6C: push    0
0x87AB6E: mov     [esp+24h+arg_8], ebx
0x87AB72: call    eax
0x87AB74: mov     ebx, [ebx+4]
0x87AB77: mov     ebp, eax
0x87AB79: cmp     ebx, ebp
0x87AB7B: jz      short loc_87ABB2
0x87AB7D: test    ebx, ebx
0x87AB7F: jz      short loc_87AB9D
0x87AB81: lea     ecx, [ebx+4]
0x87AB84: push    ecx; lpAddend
0x87AB85: call    dword ptr ds:0A2807Ch
0x87AB8B: test    eax, eax
0x87AB8D: jnz     short loc_87AB9D
0x87AB8F: test    ebx, ebx
0x87AB91: jz      short loc_87AB9D
0x87AB93: mov     edx, [ebx]
0x87AB95: mov     eax, [edx]
0x87AB97: push    1
0x87AB99: mov     ecx, ebx
0x87AB9B: call    eax
0x87AB9D: test    ebp, ebp
0x87AB9F: mov     ecx, [esp+20h+arg_8]
0x87ABA3: mov     [ecx+4], ebp
0x87ABA6: jz      short loc_87ABB2
0x87ABA8: add     ebp, 4
0x87ABAB: push    ebp; lpAddend
0x87ABAC: call    dword ptr ds:0A28078h
0x87ABB2: mov     edx, [esi+24h]
0x87ABB5: mov     ebp, [edx+0Ch]
0x87ABB8: mov     eax, ds:0B43110h
0x87ABBD: mov     ebx, [ebp+4]
0x87ABC0: cmp     ebx, eax
0x87ABC2: mov     ecx, eax
0x87ABC4: mov     [esp+20h+arg_C], ecx
0x87ABC8: jz      short loc_87ABFF
0x87ABCA: test    ebx, ebx
0x87ABCC: jz      short loc_87ABEE
0x87ABCE: lea     eax, [ebx+4]
0x87ABD1: push    eax; lpAddend
0x87ABD2: call    dword ptr ds:0A2807Ch
0x87ABD8: test    eax, eax
0x87ABDA: jnz     short loc_87ABEA
0x87ABDC: test    ebx, ebx
0x87ABDE: jz      short loc_87ABEA
0x87ABE0: mov     edx, [ebx]
0x87ABE2: mov     eax, [edx]
0x87ABE4: push    1
0x87ABE6: mov     ecx, ebx
0x87ABE8: call    eax
0x87ABEA: mov     ecx, [esp+20h+arg_C]
0x87ABEE: test    ecx, ecx
0x87ABF0: mov     [ebp+4], ecx
0x87ABF3: jz      short loc_87ABFF
0x87ABF5: add     ecx, 4
0x87ABF8: push    ecx; lpAddend
0x87ABF9: call    dword ptr ds:0A28078h
0x87ABFF: mov     ebx, 1
0x87AC04: add     [esi+60h], ebx
0x87AC07: mov     [esp+20h+arg_C], esi
0x87AC0B: mov     edx, [edi+38h]
0x87AC0E: lea     ecx, [esp+20h+arg_C]
0x87AC12: push    ecx
0x87AC13: push    edx
0x87AC14: lea     ecx, [edi+40h]
0x87AC17: mov     [esp+28h+var_4], 0
0x87AC1F: call    sub_76CE40
0x87AC24: or      eax, 0FFFFFFFFh
0x87AC27: add     [esi+60h], eax
0x87AC2A: mov     [esp+20h+var_4], eax
0x87AC2E: jnz     short loc_87AC37
0x87AC30: mov     ecx, esi
0x87AC32: call    sub_7604D0
0x87AC37: add     [edi+38h], ebx
0x87AC3A: mov     ecx, [esp+20h+var_C]
0x87AC3E: mov     large fs:0, ecx
0x87AC45: pop     ecx
0x87AC46: pop     edi
0x87AC47: pop     esi
0x87AC48: pop     ebp
0x87AC49: pop     ebx
0x87AC4A: add     esp, 0Ch
0x87AC4D: retn    10h
