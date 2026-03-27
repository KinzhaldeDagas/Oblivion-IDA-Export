0x4BAA80: push    0FFFFFFFFh
0x4BAA82: push    offset SEH_4BAA80
0x4BAA87: mov     eax, large fs:0
0x4BAA8D: push    eax
0x4BAA8E: sub     esp, 224h
0x4BAA94: mov     eax, ds:0B30AACh
0x4BAA99: xor     eax, esp
0x4BAA9B: mov     [esp+230h+var_10], eax
0x4BAAA2: push    ebx
0x4BAAA3: push    ebp
0x4BAAA4: push    esi
0x4BAAA5: push    edi
0x4BAAA6: mov     eax, ds:0B30AACh
0x4BAAAB: xor     eax, esp
0x4BAAAD: push    eax
0x4BAAAE: lea     eax, [esp+244h+var_C]
0x4BAAB5: mov     large fs:0, eax
0x4BAABB: mov     ebp, [esp+244h+arg_18]
0x4BAAC2: test    ebp, ebp
0x4BAAC4: mov     eax, [esp+244h+arg_8]
0x4BAACB: mov     ebx, [esp+244h+Src]
0x4BAAD2: mov     esi, ecx
0x4BAAD4: mov     [esp+244h+var_22C], eax
0x4BAAD8: jz      loc_4BAC69
0x4BAADE: test    ebx, ebx
0x4BAAE0: jz      loc_4BAC69
0x4BAAE6: test    eax, eax
0x4BAAE8: jz      loc_4BAC69
0x4BAAEE: cmp     [esp+244h+arg_C], 0
0x4BAAF6: jz      loc_4BAC69
0x4BAAFC: cmp     byte ptr ds:0B125E8h, 0
0x4BAB03: jz      loc_4BAC69
0x4BAB09: call    sub_4B9CB0
0x4BAB0E: test    al, al
0x4BAB10: jz      loc_4BAC69
0x4BAB16: mov     eax, [esi+0Ch]
0x4BAB19: push    eax
0x4BAB1A: xor     edi, edi
0x4BAB1C: call    sub_7B2A00
0x4BAB21: add     esp, 4
0x4BAB24: test    al, al
0x4BAB26: jnz     loc_4BAC11
0x4BAB2C: lea     eax, [esp+244h+Str1]
0x4BAB33: push    eax
0x4BAB34: mov     ecx, esi
0x4BAB36: call    sub_4B9C40
0x4BAB3B: lea     ecx, [esp+244h+var_218]
0x4BAB3F: push    ecx; int
0x4BAB40: lea     edx, [esp+248h+Str1]
0x4BAB47: push    edx; Str1
0x4BAB48: call    sub_47D8F0
0x4BAB4D: mov     ecx, ds:0B35300h
0x4BAB53: mov     eax, [ecx]
0x4BAB55: mov     eax, [eax+4]
0x4BAB58: add     esp, 8
0x4BAB5B: push    edi
0x4BAB5C: lea     edx, [esp+248h+var_218]
0x4BAB60: push    edx
0x4BAB61: call    eax
0x4BAB63: push    eax
0x4BAB64: lea     ecx, [esp+248h+var_230]
0x4BAB68: call    sub_405070
0x4BAB6D: cmp     [esp+244h+var_230], edi
0x4BAB71: mov     [esp+244h+var_4], edi
0x4BAB78: jnz     short loc_4BABEE
0x4BAB7A: push    1Ch; Size
0x4BAB7C: call    FormHeapAlloc
0x4BAB81: add     esp, 4
0x4BAB84: mov     [esp+244h+var_21C], eax
0x4BAB88: test    eax, eax
0x4BAB8A: mov     byte ptr [esp+244h+var_4], 1
0x4BAB92: jz      short loc_4BABBD
0x4BAB94: mov     ecx, [esp+244h+var_22C]
0x4BAB98: mov     edx, [esp+244h+arg_C]
0x4BAB9F: push    ecx; void *
0x4BABA0: mov     ecx, [esp+248h+arg_14]
0x4BABA7: push    ebx; Src
0x4BABA8: push    edx; int
0x4BABA9: mov     edx, [esp+250h+arg_10]
0x4BABB0: push    ebp; int
0x4BABB1: push    ecx; int
0x4BABB2: push    edx; int
0x4BABB3: push    esi; int
0x4BABB4: mov     ecx, eax
0x4BABB6: call    sub_4BA2D0
0x4BABBB: jmp     short loc_4BABBF
0x4BABBD: xor     eax, eax
0x4BABBF: mov     ecx, ds:0B33A1Ch; this
0x4BABC5: push    eax
0x4BABC6: lea     eax, [esp+248h+var_218]
0x4BABCA: push    eax
0x4BABCB: mov     byte ptr [esp+24Ch+var_4], 0
0x4BABD3: call    ??0QueuedTreeBillboard@@QAE@XZ; QueuedTreeBillboard::QueuedTreeBillboard(void)
0x4BABD8: lea     ecx, [esp+244h+var_230]; this
0x4BABDC: mov     [esp+244h+var_4], 0FFFFFFFFh
0x4BABE7: call    sub_7016A0
0x4BABEC: jmp     short loc_4BAC69
0x4BABEE: push    1
0x4BABF0: mov     ecx, esi
0x4BABF2: call    sub_4BA780
0x4BABF7: lea     ecx, [esp+244h+var_230]; this
0x4BABFB: mov     edi, eax
0x4BABFD: mov     [esp+244h+var_4], 0FFFFFFFFh
0x4BAC08: call    sub_7016A0
0x4BAC0D: test    edi, edi
0x4BAC0F: jz      short loc_4BAC69
0x4BAC11: lea     ecx, [esp+244h+var_228]
0x4BAC15: call    sub_7B20B0
0x4BAC1A: mov     edx, [esp+244h+arg_C]
0x4BAC21: mov     ecx, [esi+0Ch]
0x4BAC24: mov     eax, [esp+244h+var_22C]
0x4BAC28: push    edx
0x4BAC29: mov     edx, [esp+248h+arg_14]
0x4BAC30: push    eax
0x4BAC31: mov     eax, [esp+24Ch+arg_10]
0x4BAC38: push    ebx
0x4BAC39: mov     [esp+250h+var_220], ecx
0x4BAC3D: lea     ecx, [esp+250h+var_228]
0x4BAC41: push    ecx
0x4BAC42: push    ebp
0x4BAC43: push    edx
0x4BAC44: push    eax
0x4BAC45: mov     [esp+260h+var_224], edi
0x4BAC49: mov     [esp+260h+var_228], 0
0x4BAC51: call    sub_7B4010
0x4BAC56: mov     ecx, [esp+260h+var_224]
0x4BAC5A: add     esp, 1Ch
0x4BAC5D: test    ecx, ecx
0x4BAC5F: jz      short loc_4BAC69
0x4BAC61: mov     edx, [ecx]
0x4BAC63: mov     eax, [edx]
0x4BAC65: push    1
0x4BAC67: call    eax
0x4BAC69: mov     ecx, [esp+244h+var_C]
0x4BAC70: mov     large fs:0, ecx
0x4BAC77: pop     ecx
0x4BAC78: pop     edi
0x4BAC79: pop     esi
0x4BAC7A: pop     ebp
0x4BAC7B: pop     ebx
0x4BAC7C: mov     ecx, [esp+230h+var_10]
0x4BAC83: xor     ecx, esp
0x4BAC85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BAC8A: add     esp, 230h
0x4BAC90: retn    20h ; ' '
