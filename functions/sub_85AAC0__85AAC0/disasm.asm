0x85AAC0: push    0FFFFFFFFh
0x85AAC2: push    offset SEH_85AAC0
0x85AAC7: mov     eax, large fs:0
0x85AACD: push    eax
0x85AACE: push    esi
0x85AACF: push    edi
0x85AAD0: mov     eax, ds:0B30AACh
0x85AAD5: xor     eax, esp
0x85AAD7: push    eax
0x85AAD8: lea     eax, [esp+18h+var_C]
0x85AADC: mov     large fs:0, eax
0x85AAE2: mov     edi, ecx
0x85AAE4: mov     esi, ds:0B42EB0h
0x85AAEA: push    10h; Size
0x85AAEC: call    FormHeapAlloc
0x85AAF1: add     esp, 4
0x85AAF4: cmp     [esp+18h+arg_4], 0
0x85AAF9: jnz     short loc_85AB50
0x85AAFB: cmp     byte ptr [esp+18h+arg_8], 0
0x85AB00: mov     [esp+18h+arg_8], eax
0x85AB04: jnz     short loc_85AB2D
0x85AB06: test    eax, eax
0x85AB08: mov     [esp+18h+var_4], 0
0x85AB10: jz      loc_85ABA1
0x85AB16: mov     ecx, [esp+18h+arg_0]
0x85AB1A: push    esi
0x85AB1B: push    1
0x85AB1D: push    1
0x85AB1F: push    6
0x85AB21: push    ecx
0x85AB22: push    eax
0x85AB23: call    sub_7E2370
0x85AB28: add     esp, 18h
0x85AB2B: jmp     short loc_85ABA3
0x85AB2D: test    eax, eax
0x85AB2F: mov     [esp+18h+var_4], 1
0x85AB37: jz      short loc_85ABA1
0x85AB39: mov     ecx, [esp+18h+arg_0]
0x85AB3D: push    esi
0x85AB3E: push    1
0x85AB40: push    1
0x85AB42: push    7
0x85AB44: push    ecx
0x85AB45: push    eax
0x85AB46: call    sub_7E2370
0x85AB4B: add     esp, 18h
0x85AB4E: jmp     short loc_85ABA3
0x85AB50: cmp     byte ptr [esp+18h+arg_8], 0
0x85AB55: mov     [esp+18h+arg_8], eax
0x85AB59: jnz     short loc_85AB7E
0x85AB5B: test    eax, eax
0x85AB5D: mov     [esp+18h+var_4], 2
0x85AB65: jz      short loc_85ABA1
0x85AB67: mov     ecx, [esp+18h+arg_0]
0x85AB6B: push    esi
0x85AB6C: push    1
0x85AB6E: push    1
0x85AB70: push    8
0x85AB72: push    ecx
0x85AB73: push    eax
0x85AB74: call    sub_7E2370
0x85AB79: add     esp, 18h
0x85AB7C: jmp     short loc_85ABA3
0x85AB7E: test    eax, eax
0x85AB80: mov     [esp+18h+var_4], 3
0x85AB88: jz      short loc_85ABA1
0x85AB8A: mov     ecx, [esp+18h+arg_0]
0x85AB8E: push    esi
0x85AB8F: push    1
0x85AB91: push    1
0x85AB93: push    9
0x85AB95: push    ecx
0x85AB96: push    eax
0x85AB97: call    sub_7E2370
0x85AB9C: add     esp, 18h
0x85AB9F: jmp     short loc_85ABA3
0x85ABA1: xor     eax, eax
0x85ABA3: lea     edx, [esp+18h+arg_8]
0x85ABA7: push    edx
0x85ABA8: lea     ecx, [edi+38h]
0x85ABAB: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x85ABB3: mov     [esp+1Ch+arg_8], eax
0x85ABB7: call    sub_5B1E20
0x85ABBC: mov     ecx, [esp+18h+var_C]
0x85ABC0: mov     large fs:0, ecx
0x85ABC7: pop     ecx
0x85ABC8: pop     edi
0x85ABC9: pop     esi
0x85ABCA: add     esp, 0Ch
0x85ABCD: retn    0Ch
