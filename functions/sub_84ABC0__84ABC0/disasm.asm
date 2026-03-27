0x84ABC0: push    0FFFFFFFFh
0x84ABC2: push    offset SEH_84D2B0
0x84ABC7: mov     eax, large fs:0
0x84ABCD: push    eax
0x84ABCE: sub     esp, 8
0x84ABD1: push    ebx
0x84ABD2: push    ebp
0x84ABD3: push    esi
0x84ABD4: push    edi
0x84ABD5: mov     eax, ds:0B30AACh
0x84ABDA: xor     eax, esp
0x84ABDC: push    eax
0x84ABDD: lea     eax, [esp+28h+var_C]
0x84ABE1: mov     large fs:0, eax
0x84ABE7: mov     [esp+28h+var_10], ecx
0x84ABEB: mov     eax, [esp+28h+arg_8]
0x84ABEF: mov     eax, [eax+10h]
0x84ABF2: mov     esi, ds:0B45614h
0x84ABF8: push    eax
0x84ABF9: mov     [esp+2Ch+var_14], esi
0x84ABFD: call    sub_848C40
0x84AC02: mov     ecx, [esi+24h]
0x84AC05: mov     esi, [esp+28h+arg_C]
0x84AC09: mov     edx, [esi]
0x84AC0B: mov     ebp, [ecx]
0x84AC0D: mov     eax, [edx+88h]
0x84AC13: push    0
0x84AC15: mov     ecx, esi
0x84AC17: call    eax
0x84AC19: mov     edi, [ebp+4]
0x84AC1C: mov     ebx, eax
0x84AC1E: cmp     edi, ebx
0x84AC20: jz      short loc_84AC53
0x84AC22: test    edi, edi
0x84AC24: jz      short loc_84AC42
0x84AC26: lea     ecx, [edi+4]
0x84AC29: push    ecx; lpAddend
0x84AC2A: call    dword ptr ds:0A2807Ch
0x84AC30: test    eax, eax
0x84AC32: jnz     short loc_84AC42
0x84AC34: test    edi, edi
0x84AC36: jz      short loc_84AC42
0x84AC38: mov     edx, [edi]
0x84AC3A: mov     eax, [edx]
0x84AC3C: push    1
0x84AC3E: mov     ecx, edi
0x84AC40: call    eax
0x84AC42: test    ebx, ebx
0x84AC44: mov     [ebp+4], ebx
0x84AC47: jz      short loc_84AC53
0x84AC49: add     ebx, 4
0x84AC4C: push    ebx; lpAddend
0x84AC4D: call    dword ptr ds:0A28078h
0x84AC53: test    ebp, ebp
0x84AC55: jz      short loc_84AC71
0x84AC57: cmp     byte ptr ds:0B42CDDh, 0
0x84AC5E: jz      short loc_84AC71
0x84AC60: mov     edx, [esi]
0x84AC62: mov     eax, [edx+78h]
0x84AC65: mov     ecx, esi
0x84AC67: call    eax
0x84AC69: push    eax
0x84AC6A: mov     ecx, ebp
0x84AC6C: call    sub_7715E0
0x84AC71: mov     ecx, [esp+28h+var_14]
0x84AC75: mov     edx, [ecx+24h]
0x84AC78: mov     eax, [esi]
0x84AC7A: mov     ebp, [edx+4]
0x84AC7D: mov     edx, [eax+8Ch]
0x84AC83: push    0
0x84AC85: mov     ecx, esi
0x84AC87: call    edx
0x84AC89: test    eax, eax
0x84AC8B: jz      short loc_84AC9F
0x84AC8D: mov     eax, [esi]
0x84AC8F: mov     edx, [eax+8Ch]
0x84AC95: push    0
0x84AC97: mov     ecx, esi
0x84AC99: call    edx
0x84AC9B: mov     ebx, eax
0x84AC9D: jmp     short loc_84ACB4
0x84AC9F: test    dword ptr [esi+1Ch], 80h
0x84ACA6: mov     ebx, ds:0B430F0h
0x84ACAC: ja      short loc_84ACB4
0x84ACAE: mov     ebx, ds:0B430DCh
0x84ACB4: mov     edi, [ebp+4]
0x84ACB7: cmp     edi, ebx
0x84ACB9: jz      short loc_84ACEC
0x84ACBB: test    edi, edi
0x84ACBD: jz      short loc_84ACDB
0x84ACBF: lea     eax, [edi+4]
0x84ACC2: push    eax; lpAddend
0x84ACC3: call    dword ptr ds:0A2807Ch
0x84ACC9: test    eax, eax
0x84ACCB: jnz     short loc_84ACDB
0x84ACCD: test    edi, edi
0x84ACCF: jz      short loc_84ACDB
0x84ACD1: mov     edx, [edi]
0x84ACD3: mov     eax, [edx]
0x84ACD5: push    1
0x84ACD7: mov     ecx, edi
0x84ACD9: call    eax
0x84ACDB: test    ebx, ebx
0x84ACDD: mov     [ebp+4], ebx
0x84ACE0: jz      short loc_84ACEC
0x84ACE2: add     ebx, 4
0x84ACE5: push    ebx; lpAddend
0x84ACE6: call    dword ptr ds:0A28078h
0x84ACEC: test    ebp, ebp
0x84ACEE: jz      short loc_84AD0A
0x84ACF0: cmp     byte ptr ds:0B42CDDh, 0
0x84ACF7: jz      short loc_84AD0A
0x84ACF9: mov     edx, [esi]
0x84ACFB: mov     eax, [edx+78h]
0x84ACFE: mov     ecx, esi
0x84AD00: call    eax
0x84AD02: push    eax
0x84AD03: mov     ecx, ebp
0x84AD05: call    sub_7715E0
0x84AD0A: mov     ecx, [esp+28h+var_14]
0x84AD0E: mov     edx, [ecx+24h]
0x84AD11: mov     eax, [esi]
0x84AD13: mov     ebx, [edx+8]
0x84AD16: mov     edx, [eax+88h]
0x84AD1C: push    1
0x84AD1E: mov     ecx, esi
0x84AD20: call    edx
0x84AD22: mov     edi, [ebx+4]
0x84AD25: mov     ebp, eax
0x84AD27: cmp     edi, ebp
0x84AD29: jz      short loc_84AD5C
0x84AD2B: test    edi, edi
0x84AD2D: jz      short loc_84AD4B
0x84AD2F: lea     eax, [edi+4]
0x84AD32: push    eax; lpAddend
0x84AD33: call    dword ptr ds:0A2807Ch
0x84AD39: test    eax, eax
0x84AD3B: jnz     short loc_84AD4B
0x84AD3D: test    edi, edi
0x84AD3F: jz      short loc_84AD4B
0x84AD41: mov     edx, [edi]
0x84AD43: mov     eax, [edx]
0x84AD45: push    1
0x84AD47: mov     ecx, edi
0x84AD49: call    eax
0x84AD4B: test    ebp, ebp
0x84AD4D: mov     [ebx+4], ebp
0x84AD50: jz      short loc_84AD5C
0x84AD52: add     ebp, 4
0x84AD55: push    ebp; lpAddend
0x84AD56: call    dword ptr ds:0A28078h
0x84AD5C: test    ebx, ebx
0x84AD5E: jz      short loc_84AD7A
0x84AD60: cmp     byte ptr ds:0B42CDDh, 0
0x84AD67: jz      short loc_84AD7A
0x84AD69: mov     edx, [esi]
0x84AD6B: mov     eax, [edx+78h]
0x84AD6E: mov     ecx, esi
0x84AD70: call    eax
0x84AD72: push    eax
0x84AD73: mov     ecx, ebx
0x84AD75: call    sub_7715E0
0x84AD7A: mov     ebx, [esp+28h+var_14]
0x84AD7E: mov     ecx, [ebx+24h]
0x84AD81: mov     edi, [ecx+0Ch]
0x84AD84: mov     edx, [esi]
0x84AD86: mov     eax, [edx+8Ch]
0x84AD8C: push    1
0x84AD8E: mov     ecx, esi
0x84AD90: mov     [esp+2Ch+arg_8], edi
0x84AD94: call    eax
0x84AD96: test    eax, eax
0x84AD98: jz      short loc_84ADAC
0x84AD9A: mov     edx, [esi]
0x84AD9C: mov     eax, [edx+8Ch]
0x84ADA2: push    1
0x84ADA4: mov     ecx, esi
0x84ADA6: call    eax
0x84ADA8: mov     ebp, eax
0x84ADAA: jmp     short loc_84ADC1
0x84ADAC: test    dword ptr [esi+1Ch], 80h
0x84ADB3: mov     ebp, ds:0B430F0h
0x84ADB9: ja      short loc_84ADC1
0x84ADBB: mov     ebp, ds:0B430DCh
0x84ADC1: mov     edi, [edi+4]
0x84ADC4: cmp     edi, ebp
0x84ADC6: jz      short loc_84ADFF
0x84ADC8: test    edi, edi
0x84ADCA: jz      short loc_84ADE8
0x84ADCC: lea     ecx, [edi+4]
0x84ADCF: push    ecx; lpAddend
0x84ADD0: call    dword ptr ds:0A2807Ch
0x84ADD6: test    eax, eax
0x84ADD8: jnz     short loc_84ADE8
0x84ADDA: test    edi, edi
0x84ADDC: jz      short loc_84ADE8
0x84ADDE: mov     edx, [edi]
0x84ADE0: mov     eax, [edx]
0x84ADE2: push    1
0x84ADE4: mov     ecx, edi
0x84ADE6: call    eax
0x84ADE8: test    ebp, ebp
0x84ADEA: mov     edi, [esp+28h+arg_8]
0x84ADEE: mov     [edi+4], ebp
0x84ADF1: jz      short loc_84AE03
0x84ADF3: add     ebp, 4
0x84ADF6: push    ebp; lpAddend
0x84ADF7: call    dword ptr ds:0A28078h
0x84ADFD: jmp     short loc_84AE03
0x84ADFF: mov     edi, [esp+28h+arg_8]
0x84AE03: test    edi, edi
0x84AE05: jz      short loc_84AE21
0x84AE07: cmp     byte ptr ds:0B42CDDh, 0
0x84AE0E: jz      short loc_84AE21
0x84AE10: mov     edx, [esi]
0x84AE12: mov     eax, [edx+78h]
0x84AE15: mov     ecx, esi
0x84AE17: call    eax
0x84AE19: push    eax
0x84AE1A: mov     ecx, edi
0x84AE1C: call    sub_7715E0
0x84AE21: mov     edi, 1
0x84AE26: add     [ebx+60h], edi
0x84AE29: mov     [esp+28h+arg_8], ebx
0x84AE2D: mov     esi, [esp+28h+var_10]
0x84AE31: mov     edx, [esi+38h]
0x84AE34: lea     ecx, [esp+28h+arg_8]
0x84AE38: push    ecx
0x84AE39: push    edx
0x84AE3A: lea     ecx, [esi+40h]
0x84AE3D: mov     [esp+30h+var_4], 0
0x84AE45: call    sub_76CE40
0x84AE4A: or      eax, 0FFFFFFFFh
0x84AE4D: add     [ebx+60h], eax
0x84AE50: mov     [esp+28h+var_4], eax
0x84AE54: jnz     short loc_84AE5D
0x84AE56: mov     ecx, ebx
0x84AE58: call    sub_7604D0
0x84AE5D: add     [esi+38h], edi
0x84AE60: mov     ecx, [esp+28h+var_C]
0x84AE64: mov     large fs:0, ecx
0x84AE6B: pop     ecx
0x84AE6C: pop     edi
0x84AE6D: pop     esi
0x84AE6E: pop     ebp
0x84AE6F: pop     ebx
0x84AE70: add     esp, 14h
0x84AE73: retn    10h
