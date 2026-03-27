0x91BAC0: push    ebp
0x91BAC1: mov     ebp, esp
0x91BAC3: and     esp, 0FFFFFFF0h
0x91BAC6: sub     esp, 54h
0x91BAC9: fld     [ebp+arg_8]
0x91BACC: mov     edx, [ebp+arg_4]
0x91BACF: fcomp   dword ptr ds:0A2FAA8h
0x91BAD5: push    ebx
0x91BAD6: push    esi
0x91BAD7: push    edi
0x91BAD8: fnstsw  ax
0x91BADA: test    ah, 5
0x91BADD: jp      short loc_91BAE5
0x91BADF: mov     eax, [edx+10h]
0x91BAE2: mov     [ebp+arg_8], eax
0x91BAE5: mov     eax, [edx+3Ch]
0x91BAE8: xor     ecx, ecx
0x91BAEA: test    eax, eax
0x91BAEC: mov     [esp+60h+var_44], ecx
0x91BAF0: jle     loc_91BC56
0x91BAF6: mov     eax, [edx+38h]
0x91BAF9: mov     eax, [eax+ecx*4]
0x91BAFC: mov     esi, [eax+38h]
0x91BAFF: add     eax, 34h ; '4'
0x91BB02: test    esi, esi
0x91BB04: mov     [esp+60h+var_48], eax
0x91BB08: mov     [esp+60h+var_54], 0
0x91BB10: jle     loc_91BC46
0x91BB16: jmp     short loc_91BB20
0x91BB18: mov     eax, [esp+60h+var_48]
0x91BB1C: lea     esp, [esp+0]
0x91BB20: mov     ecx, [eax]
0x91BB22: mov     edx, [esp+60h+var_54]
0x91BB26: mov     edi, [ecx+edx*4]
0x91BB29: mov     ecx, [edi+48h]
0x91BB2C: xor     eax, eax
0x91BB2E: test    ecx, ecx
0x91BB30: jle     short loc_91BB54
0x91BB32: mov     ebx, [edi+44h]
0x91BB35: mov     edx, ebx
0x91BB37: jmp     short loc_91BB40
0x91BB39: align 10h
0x91BB40: cmp     dword ptr [edx], 1134h
0x91BB46: jz      loc_91BBD1
0x91BB4C: inc     eax
0x91BB4D: add     edx, 10h
0x91BB50: cmp     eax, ecx
0x91BB52: jl      short loc_91BB40
0x91BB54: lea     esi, [edi+14h]
0x91BB57: mov     ecx, [edi+50h]
0x91BB5A: fld     [ebp+arg_8]
0x91BB5D: fsub    dword ptr [ecx+5Ch]
0x91BB60: fmul    dword ptr [ecx+6Ch]
0x91BB63: fld     dword ptr ds:0A2F948h
0x91BB69: fsubr   st, st(1)
0x91BB6B: fabs
0x91BB6D: fcomp   dword ptr ds:0A3C778h
0x91BB73: fnstsw  ax
0x91BB75: test    ah, 5
0x91BB78: jnp     loc_91BC0F
0x91BB7E: fcomp   dword ptr ds:0A31C80h
0x91BB84: mov     [esp+60h+var_50], 1
0x91BB8C: fnstsw  ax
0x91BB8E: test    ah, 41h
0x91BB91: jz      short loc_91BB9B
0x91BB93: mov     [esp+60h+var_50], 0
0x91BB9B: fild    [esp+60h+var_50]
0x91BB9F: fabs
0x91BBA1: fld     dword ptr ds:0A2FAA8h
0x91BBA7: fucompp
0x91BBA9: fnstsw  ax
0x91BBAB: test    ah, 44h
0x91BBAE: jp      short loc_91BC11
0x91BBB0: mov     eax, [ebp+arg_8]
0x91BBB3: lea     edx, [esp+60h+var_40]
0x91BBB7: push    edx
0x91BBB8: push    eax
0x91BBB9: call    sub_89DB70
0x91BBBE: mov     eax, ds:0BA8438h
0x91BBC3: mov     ecx, [ebp+arg_0]
0x91BBC6: mov     edx, [ecx]
0x91BBC8: push    eax
0x91BBC9: push    esi
0x91BBCA: lea     eax, [esp+68h+var_40]
0x91BBCE: push    eax
0x91BBCF: jmp     short loc_91BC24
0x91BBD1: xor     eax, eax
0x91BBD3: test    ecx, ecx
0x91BBD5: jle     short loc_91BBF0
0x91BBD7: mov     edx, ebx
0x91BBD9: lea     esp, [esp+0]
0x91BBE0: cmp     dword ptr [edx], 1134h
0x91BBE6: jz      short loc_91BBFB
0x91BBE8: inc     eax
0x91BBE9: add     edx, 10h
0x91BBEC: cmp     eax, ecx
0x91BBEE: jl      short loc_91BBE0
0x91BBF0: xor     esi, esi
0x91BBF2: mov     [esp+60h+var_4C], esi
0x91BBF6: jmp     loc_91BB57
0x91BBFB: shl     eax, 4
0x91BBFE: mov     esi, [eax+ebx+8]
0x91BC02: mov     eax, [eax+ebx+0Ch]
0x91BC06: mov     [esp+60h+var_4C], eax
0x91BC0A: jmp     loc_91BB57
0x91BC0F: fstp    st
0x91BC11: mov     edi, ds:0BA8438h
0x91BC17: mov     eax, [ebp+arg_0]
0x91BC1A: mov     edx, [eax]
0x91BC1C: push    edi
0x91BC1D: add     ecx, 10h
0x91BC20: push    esi
0x91BC21: push    ecx
0x91BC22: mov     ecx, eax
0x91BC24: call    dword ptr [edx+0Ch]
0x91BC27: mov     eax, [esp+60h+var_54]
0x91BC2B: mov     ecx, [esp+60h+var_48]
0x91BC2F: mov     edx, [ecx+4]
0x91BC32: inc     eax
0x91BC33: cmp     eax, edx
0x91BC35: mov     [esp+60h+var_54], eax
0x91BC39: jl      loc_91BB18
0x91BC3F: mov     edx, [ebp+arg_4]
0x91BC42: mov     ecx, [esp+60h+var_44]
0x91BC46: mov     eax, [edx+3Ch]
0x91BC49: inc     ecx
0x91BC4A: cmp     ecx, eax
0x91BC4C: mov     [esp+60h+var_44], ecx
0x91BC50: jl      loc_91BAF6
0x91BC56: pop     edi
0x91BC57: pop     esi
0x91BC58: pop     ebx
0x91BC59: mov     esp, ebp
0x91BC5B: pop     ebp
0x91BC5C: retn
