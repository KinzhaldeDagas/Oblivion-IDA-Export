0x84BD80: push    0FFFFFFFFh
0x84BD82: push    offset SEH_879360
0x84BD87: mov     eax, large fs:0
0x84BD8D: push    eax
0x84BD8E: push    ecx
0x84BD8F: push    ebx
0x84BD90: push    ebp
0x84BD91: push    esi
0x84BD92: push    edi
0x84BD93: mov     eax, ds:0B30AACh
0x84BD98: xor     eax, esp
0x84BD9A: push    eax
0x84BD9B: lea     eax, [esp+24h+var_C]
0x84BD9F: mov     large fs:0, eax
0x84BDA5: mov     esi, ecx
0x84BDA7: mov     [esp+24h+var_10], esi
0x84BDAB: mov     edi, [esp+24h+arg_8]
0x84BDAF: mov     eax, [edi+10h]
0x84BDB2: mov     ebx, ds:0B4568Ch
0x84BDB8: push    eax
0x84BDB9: call    sub_848DA0
0x84BDBE: mov     edi, [edi+0Ch]
0x84BDC1: push    edi
0x84BDC2: mov     ecx, esi
0x84BDC4: call    sub_848E50
0x84BDC9: mov     eax, [ebx+24h]
0x84BDCC: mov     esi, [esp+24h+arg_C]
0x84BDD0: mov     edi, [eax]
0x84BDD2: mov     edx, [esi]
0x84BDD4: mov     eax, [edx+88h]
0x84BDDA: push    0
0x84BDDC: mov     ecx, esi
0x84BDDE: mov     [esp+28h+arg_8], edi
0x84BDE2: call    eax
0x84BDE4: mov     edi, [edi+4]
0x84BDE7: mov     ebp, eax
0x84BDE9: cmp     edi, ebp
0x84BDEB: jz      short loc_84BE24
0x84BDED: test    edi, edi
0x84BDEF: jz      short loc_84BE0D
0x84BDF1: lea     ecx, [edi+4]
0x84BDF4: push    ecx; lpAddend
0x84BDF5: call    dword ptr ds:0A2807Ch
0x84BDFB: test    eax, eax
0x84BDFD: jnz     short loc_84BE0D
0x84BDFF: test    edi, edi
0x84BE01: jz      short loc_84BE0D
0x84BE03: mov     edx, [edi]
0x84BE05: mov     eax, [edx]
0x84BE07: push    1
0x84BE09: mov     ecx, edi
0x84BE0B: call    eax
0x84BE0D: test    ebp, ebp
0x84BE0F: mov     edi, [esp+24h+arg_8]
0x84BE13: mov     [edi+4], ebp
0x84BE16: jz      short loc_84BE28
0x84BE18: add     ebp, 4
0x84BE1B: push    ebp; lpAddend
0x84BE1C: call    dword ptr ds:0A28078h
0x84BE22: jmp     short loc_84BE28
0x84BE24: mov     edi, [esp+24h+arg_8]
0x84BE28: test    edi, edi
0x84BE2A: jz      short loc_84BE46
0x84BE2C: cmp     byte ptr ds:0B42CDDh, 0
0x84BE33: jz      short loc_84BE46
0x84BE35: mov     edx, [esi]
0x84BE37: mov     eax, [edx+78h]
0x84BE3A: mov     ecx, esi
0x84BE3C: call    eax
0x84BE3E: push    eax
0x84BE3F: mov     ecx, edi
0x84BE41: call    sub_7715E0
0x84BE46: mov     ecx, [ebx+24h]
0x84BE49: mov     edi, [ecx+4]
0x84BE4C: mov     edx, [esi]
0x84BE4E: mov     eax, [edx+8Ch]
0x84BE54: push    0
0x84BE56: mov     ecx, esi
0x84BE58: mov     [esp+28h+arg_8], edi
0x84BE5C: call    eax
0x84BE5E: test    eax, eax
0x84BE60: jz      short loc_84BE74
0x84BE62: mov     edx, [esi]
0x84BE64: mov     eax, [edx+8Ch]
0x84BE6A: push    0
0x84BE6C: mov     ecx, esi
0x84BE6E: call    eax
0x84BE70: mov     ebp, eax
0x84BE72: jmp     short loc_84BE89
0x84BE74: test    dword ptr [esi+1Ch], 80h
0x84BE7B: mov     ebp, ds:0B430F0h
0x84BE81: ja      short loc_84BE89
0x84BE83: mov     ebp, ds:0B430DCh
0x84BE89: mov     edi, [edi+4]
0x84BE8C: cmp     edi, ebp
0x84BE8E: jz      short loc_84BEC7
0x84BE90: test    edi, edi
0x84BE92: jz      short loc_84BEB0
0x84BE94: lea     ecx, [edi+4]
0x84BE97: push    ecx; lpAddend
0x84BE98: call    dword ptr ds:0A2807Ch
0x84BE9E: test    eax, eax
0x84BEA0: jnz     short loc_84BEB0
0x84BEA2: test    edi, edi
0x84BEA4: jz      short loc_84BEB0
0x84BEA6: mov     edx, [edi]
0x84BEA8: mov     eax, [edx]
0x84BEAA: push    1
0x84BEAC: mov     ecx, edi
0x84BEAE: call    eax
0x84BEB0: test    ebp, ebp
0x84BEB2: mov     edi, [esp+24h+arg_8]
0x84BEB6: mov     [edi+4], ebp
0x84BEB9: jz      short loc_84BECB
0x84BEBB: add     ebp, 4
0x84BEBE: push    ebp; lpAddend
0x84BEBF: call    dword ptr ds:0A28078h
0x84BEC5: jmp     short loc_84BECB
0x84BEC7: mov     edi, [esp+24h+arg_8]
0x84BECB: test    edi, edi
0x84BECD: jz      short loc_84BEE9
0x84BECF: cmp     byte ptr ds:0B42CDDh, 0
0x84BED6: jz      short loc_84BEE9
0x84BED8: mov     edx, [esi]
0x84BEDA: mov     eax, [edx+78h]
0x84BEDD: mov     ecx, esi
0x84BEDF: call    eax
0x84BEE1: push    eax
0x84BEE2: mov     ecx, edi
0x84BEE4: call    sub_7715E0
0x84BEE9: mov     ecx, [ebx+24h]
0x84BEEC: mov     edi, [ecx+8]
0x84BEEF: mov     edx, [esi]
0x84BEF1: mov     eax, [edx+90h]
0x84BEF7: push    0
0x84BEF9: mov     ecx, esi
0x84BEFB: mov     [esp+28h+arg_8], edi
0x84BEFF: call    eax
0x84BF01: mov     edi, [edi+4]
0x84BF04: mov     ebp, eax
0x84BF06: cmp     edi, ebp
0x84BF08: jz      short loc_84BF41
0x84BF0A: test    edi, edi
0x84BF0C: jz      short loc_84BF2A
0x84BF0E: lea     ecx, [edi+4]
0x84BF11: push    ecx; lpAddend
0x84BF12: call    dword ptr ds:0A2807Ch
0x84BF18: test    eax, eax
0x84BF1A: jnz     short loc_84BF2A
0x84BF1C: test    edi, edi
0x84BF1E: jz      short loc_84BF2A
0x84BF20: mov     edx, [edi]
0x84BF22: mov     eax, [edx]
0x84BF24: push    1
0x84BF26: mov     ecx, edi
0x84BF28: call    eax
0x84BF2A: test    ebp, ebp
0x84BF2C: mov     edi, [esp+24h+arg_8]
0x84BF30: mov     [edi+4], ebp
0x84BF33: jz      short loc_84BF45
0x84BF35: add     ebp, 4
0x84BF38: push    ebp; lpAddend
0x84BF39: call    dword ptr ds:0A28078h
0x84BF3F: jmp     short loc_84BF45
0x84BF41: mov     edi, [esp+24h+arg_8]
0x84BF45: test    edi, edi
0x84BF47: jz      short loc_84BF63
0x84BF49: cmp     byte ptr ds:0B42CDDh, 0
0x84BF50: jz      short loc_84BF63
0x84BF52: mov     edx, [esi]
0x84BF54: mov     eax, [edx+78h]
0x84BF57: mov     ecx, esi
0x84BF59: call    eax
0x84BF5B: push    eax
0x84BF5C: mov     ecx, edi
0x84BF5E: call    sub_7715E0
0x84BF63: mov     edi, 1
0x84BF68: add     [ebx+60h], edi
0x84BF6B: mov     [esp+24h+arg_8], ebx
0x84BF6F: mov     esi, [esp+24h+var_10]
0x84BF73: mov     edx, [esi+38h]
0x84BF76: lea     ecx, [esp+24h+arg_8]
0x84BF7A: push    ecx
0x84BF7B: push    edx
0x84BF7C: lea     ecx, [esi+40h]
0x84BF7F: mov     [esp+2Ch+var_4], 0
0x84BF87: call    sub_76CE40
0x84BF8C: or      eax, 0FFFFFFFFh
0x84BF8F: add     [ebx+60h], eax
0x84BF92: mov     [esp+24h+var_4], eax
0x84BF96: jnz     short loc_84BF9F
0x84BF98: mov     ecx, ebx
0x84BF9A: call    sub_7604D0
0x84BF9F: add     [esi+38h], edi
0x84BFA2: mov     ecx, dword ptr [esp+24h+var_C]
0x84BFA6: mov     large fs:0, ecx
0x84BFAD: pop     ecx
0x84BFAE: pop     edi
0x84BFAF: pop     esi
0x84BFB0: pop     ebp
0x84BFB1: pop     ebx
0x84BFB2: add     esp, 10h
0x84BFB5: retn    10h
