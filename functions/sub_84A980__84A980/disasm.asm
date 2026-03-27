0x84A980: push    0FFFFFFFFh
0x84A982: push    offset SEH_879360
0x84A987: mov     eax, large fs:0
0x84A98D: push    eax
0x84A98E: push    ecx
0x84A98F: push    ebx
0x84A990: push    ebp
0x84A991: push    esi
0x84A992: push    edi
0x84A993: mov     eax, ds:0B30AACh
0x84A998: xor     eax, esp
0x84A99A: push    eax
0x84A99B: lea     eax, [esp+24h+var_C]
0x84A99F: mov     large fs:0, eax
0x84A9A5: mov     esi, ecx
0x84A9A7: mov     [esp+24h+var_10], esi
0x84A9AB: mov     edi, [esp+24h+arg_8]
0x84A9AF: mov     eax, [edi+10h]
0x84A9B2: mov     ebx, ds:0B4567Ch
0x84A9B8: push    eax
0x84A9B9: call    sub_848DA0
0x84A9BE: mov     edi, [edi+0Ch]
0x84A9C1: push    edi
0x84A9C2: mov     ecx, esi
0x84A9C4: call    sub_848E50
0x84A9C9: mov     eax, [ebx+24h]
0x84A9CC: mov     esi, [esp+24h+arg_C]
0x84A9D0: mov     edi, [eax]
0x84A9D2: mov     edx, [esi]
0x84A9D4: mov     eax, [edx+88h]
0x84A9DA: push    0
0x84A9DC: mov     ecx, esi
0x84A9DE: mov     [esp+28h+arg_8], edi
0x84A9E2: call    eax
0x84A9E4: mov     edi, [edi+4]
0x84A9E7: mov     ebp, eax
0x84A9E9: cmp     edi, ebp
0x84A9EB: jz      short loc_84AA24
0x84A9ED: test    edi, edi
0x84A9EF: jz      short loc_84AA0D
0x84A9F1: lea     ecx, [edi+4]
0x84A9F4: push    ecx; lpAddend
0x84A9F5: call    dword ptr ds:0A2807Ch
0x84A9FB: test    eax, eax
0x84A9FD: jnz     short loc_84AA0D
0x84A9FF: test    edi, edi
0x84AA01: jz      short loc_84AA0D
0x84AA03: mov     edx, [edi]
0x84AA05: mov     eax, [edx]
0x84AA07: push    1
0x84AA09: mov     ecx, edi
0x84AA0B: call    eax
0x84AA0D: test    ebp, ebp
0x84AA0F: mov     edi, [esp+24h+arg_8]
0x84AA13: mov     [edi+4], ebp
0x84AA16: jz      short loc_84AA28
0x84AA18: add     ebp, 4
0x84AA1B: push    ebp; lpAddend
0x84AA1C: call    dword ptr ds:0A28078h
0x84AA22: jmp     short loc_84AA28
0x84AA24: mov     edi, [esp+24h+arg_8]
0x84AA28: test    edi, edi
0x84AA2A: jz      short loc_84AA46
0x84AA2C: cmp     byte ptr ds:0B42CDDh, 0
0x84AA33: jz      short loc_84AA46
0x84AA35: mov     edx, [esi]
0x84AA37: mov     eax, [edx+78h]
0x84AA3A: mov     ecx, esi
0x84AA3C: call    eax
0x84AA3E: push    eax
0x84AA3F: mov     ecx, edi
0x84AA41: call    sub_7715E0
0x84AA46: mov     ecx, [ebx+24h]
0x84AA49: mov     edi, [ecx+4]
0x84AA4C: mov     edx, [esi]
0x84AA4E: mov     eax, [edx+8Ch]
0x84AA54: push    0
0x84AA56: mov     ecx, esi
0x84AA58: mov     [esp+28h+arg_8], edi
0x84AA5C: call    eax
0x84AA5E: test    eax, eax
0x84AA60: jz      short loc_84AA74
0x84AA62: mov     edx, [esi]
0x84AA64: mov     eax, [edx+8Ch]
0x84AA6A: push    0
0x84AA6C: mov     ecx, esi
0x84AA6E: call    eax
0x84AA70: mov     ebp, eax
0x84AA72: jmp     short loc_84AA89
0x84AA74: test    dword ptr [esi+1Ch], 80h
0x84AA7B: mov     ebp, ds:0B430F0h
0x84AA81: ja      short loc_84AA89
0x84AA83: mov     ebp, ds:0B430DCh
0x84AA89: mov     edi, [edi+4]
0x84AA8C: cmp     edi, ebp
0x84AA8E: jz      short loc_84AAC7
0x84AA90: test    edi, edi
0x84AA92: jz      short loc_84AAB0
0x84AA94: lea     ecx, [edi+4]
0x84AA97: push    ecx; lpAddend
0x84AA98: call    dword ptr ds:0A2807Ch
0x84AA9E: test    eax, eax
0x84AAA0: jnz     short loc_84AAB0
0x84AAA2: test    edi, edi
0x84AAA4: jz      short loc_84AAB0
0x84AAA6: mov     edx, [edi]
0x84AAA8: mov     eax, [edx]
0x84AAAA: push    1
0x84AAAC: mov     ecx, edi
0x84AAAE: call    eax
0x84AAB0: test    ebp, ebp
0x84AAB2: mov     edi, [esp+24h+arg_8]
0x84AAB6: mov     [edi+4], ebp
0x84AAB9: jz      short loc_84AACB
0x84AABB: add     ebp, 4
0x84AABE: push    ebp; lpAddend
0x84AABF: call    dword ptr ds:0A28078h
0x84AAC5: jmp     short loc_84AACB
0x84AAC7: mov     edi, [esp+24h+arg_8]
0x84AACB: test    edi, edi
0x84AACD: jz      short loc_84AAE9
0x84AACF: cmp     byte ptr ds:0B42CDDh, 0
0x84AAD6: jz      short loc_84AAE9
0x84AAD8: mov     edx, [esi]
0x84AADA: mov     eax, [edx+78h]
0x84AADD: mov     ecx, esi
0x84AADF: call    eax
0x84AAE1: push    eax
0x84AAE2: mov     ecx, edi
0x84AAE4: call    sub_7715E0
0x84AAE9: mov     ecx, [ebx+24h]
0x84AAEC: mov     edi, [ecx+8]
0x84AAEF: mov     edx, [esi]
0x84AAF1: mov     eax, [edx+90h]
0x84AAF7: push    0
0x84AAF9: mov     ecx, esi
0x84AAFB: mov     [esp+28h+arg_8], edi
0x84AAFF: call    eax
0x84AB01: mov     edi, [edi+4]
0x84AB04: mov     ebp, eax
0x84AB06: cmp     edi, ebp
0x84AB08: jz      short loc_84AB41
0x84AB0A: test    edi, edi
0x84AB0C: jz      short loc_84AB2A
0x84AB0E: lea     ecx, [edi+4]
0x84AB11: push    ecx; lpAddend
0x84AB12: call    dword ptr ds:0A2807Ch
0x84AB18: test    eax, eax
0x84AB1A: jnz     short loc_84AB2A
0x84AB1C: test    edi, edi
0x84AB1E: jz      short loc_84AB2A
0x84AB20: mov     edx, [edi]
0x84AB22: mov     eax, [edx]
0x84AB24: push    1
0x84AB26: mov     ecx, edi
0x84AB28: call    eax
0x84AB2A: test    ebp, ebp
0x84AB2C: mov     edi, [esp+24h+arg_8]
0x84AB30: mov     [edi+4], ebp
0x84AB33: jz      short loc_84AB45
0x84AB35: add     ebp, 4
0x84AB38: push    ebp; lpAddend
0x84AB39: call    dword ptr ds:0A28078h
0x84AB3F: jmp     short loc_84AB45
0x84AB41: mov     edi, [esp+24h+arg_8]
0x84AB45: test    edi, edi
0x84AB47: jz      short loc_84AB63
0x84AB49: cmp     byte ptr ds:0B42CDDh, 0
0x84AB50: jz      short loc_84AB63
0x84AB52: mov     edx, [esi]
0x84AB54: mov     eax, [edx+78h]
0x84AB57: mov     ecx, esi
0x84AB59: call    eax
0x84AB5B: push    eax
0x84AB5C: mov     ecx, edi
0x84AB5E: call    sub_7715E0
0x84AB63: mov     edi, 1
0x84AB68: add     [ebx+60h], edi
0x84AB6B: mov     [esp+24h+arg_8], ebx
0x84AB6F: mov     esi, [esp+24h+var_10]
0x84AB73: mov     edx, [esi+38h]
0x84AB76: lea     ecx, [esp+24h+arg_8]
0x84AB7A: push    ecx
0x84AB7B: push    edx
0x84AB7C: lea     ecx, [esi+40h]
0x84AB7F: mov     [esp+2Ch+var_4], 0
0x84AB87: call    sub_76CE40
0x84AB8C: or      eax, 0FFFFFFFFh
0x84AB8F: add     [ebx+60h], eax
0x84AB92: mov     [esp+24h+var_4], eax
0x84AB96: jnz     short loc_84AB9F
0x84AB98: mov     ecx, ebx
0x84AB9A: call    sub_7604D0
0x84AB9F: add     [esi+38h], edi
0x84ABA2: mov     ecx, dword ptr [esp+24h+var_C]
0x84ABA6: mov     large fs:0, ecx
0x84ABAD: pop     ecx
0x84ABAE: pop     edi
0x84ABAF: pop     esi
0x84ABB0: pop     ebp
0x84ABB1: pop     ebx
0x84ABB2: add     esp, 10h
0x84ABB5: retn    10h
