0x92AB00: push    ebp
0x92AB01: mov     ebp, esp
0x92AB03: and     esp, 0FFFFFFF0h
0x92AB06: sub     esp, 224h
0x92AB0C: mov     eax, ds:0B30AACh
0x92AB11: push    ebx
0x92AB12: push    esi
0x92AB13: push    edi
0x92AB14: mov     edi, [ebp+arg_4]
0x92AB17: test    edi, edi
0x92AB19: mov     ebx, ecx
0x92AB1B: mov     [esp+230h+var_4], eax
0x92AB22: mov     [esp+230h+var_214], ebx
0x92AB26: jz      short loc_92AB37
0x92AB28: mov     eax, [ebx+18h]
0x92AB2B: push    eax
0x92AB2C: mov     ecx, edi
0x92AB2E: call    sub_950C30
0x92AB33: mov     esi, eax
0x92AB35: jmp     short loc_92AB39
0x92AB37: xor     esi, esi
0x92AB39: mov     ecx, [ebx+14h]
0x92AB3C: mov     eax, [ebp+arg_0]
0x92AB3F: mov     [esi+18h], ecx
0x92AB42: mov     ecx, [ebx+10h]
0x92AB45: cmp     eax, [ecx+18h]
0x92AB48: jnb     loc_92ACA4
0x92AB4E: mov     edx, [ecx+14h]
0x92AB51: mov     eax, [edx+eax*4]
0x92AB54: mov     ecx, [ecx+8]
0x92AB57: mov     edx, [ecx+eax*4]
0x92AB5A: lea     edi, [ecx+eax*4]
0x92AB5D: lea     eax, [edi+4]
0x92AB60: mov     [esi+1Ch], eax
0x92AB63: mov     eax, [ebp+arg_4]
0x92AB66: add     eax, 33h ; '3'
0x92AB69: and     eax, 0FFFFFFF0h
0x92AB6C: mov     [esp+230h+var_220], eax
0x92AB70: mov     [esi+10h], eax
0x92AB73: xor     eax, eax
0x92AB75: mov     ecx, edx
0x92AB77: cmp     ecx, eax
0x92AB79: mov     [esi+20h], edx
0x92AB7C: mov     [esi+14h], eax
0x92AB7F: mov     [esp+230h+var_218], eax
0x92AB83: jle     loc_92ACF5
0x92AB89: mov     [esp+230h+var_224], 2
0x92AB91: jmp     short loc_92AB97
0x92AB93: mov     ebx, [esp+230h+var_214]
0x92AB97: mov     ecx, [esi+1Ch]
0x92AB9A: mov     eax, [ecx+eax*4]
0x92AB9D: mov     ecx, [ebx+14h]
0x92ABA0: mov     edx, [ecx]
0x92ABA2: lea     ebx, [esp+230h+var_210]
0x92ABA6: push    ebx
0x92ABA7: push    eax
0x92ABA8: call    dword ptr [edx+28h]
0x92ABAB: mov     ebx, [esp+230h+var_224]
0x92ABAF: mov     [esp+230h+var_21C], eax
0x92ABB3: xor     edx, edx
0x92ABB5: mov     ecx, 1Fh
0x92ABBA: lea     eax, [ebx-2]
0x92ABBD: div     ecx
0x92ABBF: mov     ecx, [edi]
0x92ABC1: add     ecx, eax
0x92ABC3: mov     [esp+230h+var_224], ecx
0x92ABC7: mov     ecx, edx
0x92ABC9: mov     eax, 1
0x92ABCE: shl     eax, cl
0x92ABD0: mov     ecx, [esp+230h+var_224]
0x92ABD4: test    [edi+ecx*4+4], eax
0x92ABD8: jz      short loc_92ABF3
0x92ABDA: mov     eax, [esp+230h+var_220]
0x92ABDE: mov     ecx, [esp+230h+var_21C]
0x92ABE2: movaps  xmm0, xmmword ptr [ecx+10h]
0x92ABE6: movaps  xmmword ptr [eax], xmm0
0x92ABE9: add     eax, 10h
0x92ABEC: mov     [esp+230h+var_220], eax
0x92ABF0: inc     dword ptr [esi+14h]
0x92ABF3: xor     edx, edx
0x92ABF5: mov     ecx, 1Fh
0x92ABFA: lea     eax, [ebx-1]
0x92ABFD: div     ecx
0x92ABFF: mov     ecx, [edi]
0x92AC01: add     ecx, eax
0x92AC03: mov     [esp+230h+var_224], ecx
0x92AC07: mov     ecx, edx
0x92AC09: mov     eax, 1
0x92AC0E: shl     eax, cl
0x92AC10: mov     ecx, [esp+230h+var_224]
0x92AC14: test    [edi+ecx*4+4], eax
0x92AC18: jz      short loc_92AC33
0x92AC1A: mov     eax, [esp+230h+var_220]
0x92AC1E: mov     ecx, [esp+230h+var_21C]
0x92AC22: movaps  xmm0, xmmword ptr [ecx+20h]
0x92AC26: movaps  xmmword ptr [eax], xmm0
0x92AC29: add     eax, 10h
0x92AC2C: mov     [esp+230h+var_220], eax
0x92AC30: inc     dword ptr [esi+14h]
0x92AC33: xor     edx, edx
0x92AC35: mov     ecx, 1Fh
0x92AC3A: mov     eax, ebx
0x92AC3C: div     ecx
0x92AC3E: mov     ecx, [edi]
0x92AC40: add     ecx, eax
0x92AC42: mov     [esp+230h+var_224], ecx
0x92AC46: mov     ecx, edx
0x92AC48: mov     eax, 1
0x92AC4D: shl     eax, cl
0x92AC4F: mov     ecx, [esp+230h+var_224]
0x92AC53: test    [edi+ecx*4+4], eax
0x92AC57: jz      short loc_92AC72
0x92AC59: mov     eax, [esp+230h+var_220]
0x92AC5D: mov     ecx, [esp+230h+var_21C]
0x92AC61: movaps  xmm0, xmmword ptr [ecx+30h]
0x92AC65: movaps  xmmword ptr [eax], xmm0
0x92AC68: add     eax, 10h
0x92AC6B: mov     [esp+230h+var_220], eax
0x92AC6F: inc     dword ptr [esi+14h]
0x92AC72: mov     eax, [esp+230h+var_218]
0x92AC76: mov     ecx, [esi+20h]
0x92AC79: inc     eax
0x92AC7A: add     ebx, 3
0x92AC7D: cmp     eax, ecx
0x92AC7F: mov     [esp+230h+var_218], eax
0x92AC83: mov     [esp+230h+var_224], ebx
0x92AC87: jl      loc_92AB93
0x92AC8D: mov     eax, esi
0x92AC8F: mov     ecx, [esp+230h+var_4]
0x92AC96: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92AC9B: pop     edi
0x92AC9C: pop     esi
0x92AC9D: pop     ebx
0x92AC9E: mov     esp, ebp
0x92ACA0: pop     ebp
0x92ACA1: retn    8
0x92ACA4: mov     dword ptr [esi+20h], 1
0x92ACAB: mov     ecx, [ebx+10h]
0x92ACAE: sub     eax, [ecx+18h]
0x92ACB1: mov     edx, [ecx+20h]
0x92ACB4: lea     eax, [edx+eax*4]
0x92ACB7: add     edi, 33h ; '3'
0x92ACBA: mov     [esi+1Ch], eax
0x92ACBD: and     edi, 0FFFFFFF0h
0x92ACC0: mov     [esi+10h], edi
0x92ACC3: mov     dword ptr [esi+14h], 3
0x92ACCA: mov     ebx, [ebx+14h]
0x92ACCD: mov     edx, [ebx]
0x92ACCF: mov     ecx, eax
0x92ACD1: mov     eax, [ecx]
0x92ACD3: lea     ecx, [esp+230h+var_210]
0x92ACD7: push    ecx
0x92ACD8: push    eax
0x92ACD9: mov     ecx, ebx
0x92ACDB: call    dword ptr [edx+28h]
0x92ACDE: movaps  xmm0, xmmword ptr [eax+10h]
0x92ACE2: movaps  xmmword ptr [edi], xmm0
0x92ACE5: movaps  xmm0, xmmword ptr [eax+20h]
0x92ACE9: movaps  xmmword ptr [edi+10h], xmm0
0x92ACED: movaps  xmm0, xmmword ptr [eax+30h]
0x92ACF1: movaps  xmmword ptr [edi+20h], xmm0
0x92ACF5: mov     ecx, [esp+230h+var_4]
0x92ACFC: mov     eax, esi
0x92ACFE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x92AD03: pop     edi
0x92AD04: pop     esi
0x92AD05: pop     ebx
0x92AD06: mov     esp, ebp
0x92AD08: pop     ebp
0x92AD09: retn    8
