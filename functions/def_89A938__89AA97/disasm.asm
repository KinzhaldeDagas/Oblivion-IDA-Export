0x89AA97: mov     eax, 4; jumptable 0089A938 default case
0x89AA9C: mov     [esi+0B4h], eax
0x89AAA2: mov     [edi+95h], eax
0x89AAA8: mov     ecx, ds:0BA7D98h; jumptable 0089A938 case 4
0x89AAAE: mov     eax, [ecx]
0x89AAB0: push    12h
0x89AAB2: push    28h ; '('
0x89AAB4: call    dword ptr [eax+10h]
0x89AAB7: push    ebx
0x89AAB8: mov     ecx, eax
0x89AABA: mov     word ptr [eax+4], 28h ; '('
0x89AAC0: call    sub_8D3330
0x89AAC5: mov     [esi+8], eax
0x89AAC8: movaps  xmm0, xmmword ptr [esi+20h]
0x89AACC: mulps   xmm0, xmm0
0x89AACF: movaps  xmm1, xmm0
0x89AAD2: shufps  xmm1, xmm0, 55h ; 'U'
0x89AAD6: addss   xmm1, xmm0
0x89AADA: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x89AADE: addss   xmm0, xmm1
0x89AAE2: movaps  xmmword ptr [esp+arg_14+8], xmm0
0x89AAE7: sqrtss  xmm0, xmm0
0x89AAEB: movss   dword ptr [esp+arg_14+8], xmm0
0x89AAF1: movaps  xmm0, xmmword ptr [esp+arg_14+8]
0x89AAF6: lea     ecx, [esp+arg_10]
0x89AAFA: movss   dword ptr [ecx], xmm0
0x89AAFE: fld     [esp+arg_10]
0x89AB02: fld     dword ptr ds:0A2FAA8h
0x89AB08: fld     [esp+arg_10]
0x89AB0C: fucompp
0x89AB0E: fnstsw  ax
0x89AB10: test    ah, 44h
0x89AB13: jp      short loc_89AB1D
0x89AB15: fstp    st
0x89AB17: fld     dword ptr ds:0A96D08h
0x89AB1D: mov     edx, [esi+74h]
0x89AB20: fstp    dword ptr [esp+arg_14+8]
0x89AB24: mov     eax, [edx+8]
0x89AB27: mov     edx, [edi+58h]
0x89AB2A: mov     ecx, [edi+5Ch]
0x89AB2D: mov     dword ptr [esp+arg_14+14h], edx
0x89AB31: cmp     byte ptr [edi+95h], 4
0x89AB38: mov     dword ptr [esp+arg_14+0Ch], eax
0x89AB3C: setnl   al
0x89AB3F: mov     byte ptr [esp+arg_34], al
0x89AB43: mov     al, [edi+68h]
0x89AB46: cmp     al, 2
0x89AB48: mov     dword ptr [esp+arg_14+10h], ecx
0x89AB4C: setz    cl
0x89AB4F: cmp     al, 1
0x89AB51: lea     eax, [esp+arg_14+8]
0x89AB55: mov     byte ptr [esp+arg_34+1], cl
0x89AB59: mov     ecx, [esi+7Ch]
0x89AB5C: setnl   dl
0x89AB5F: push    eax
0x89AB60: mov     byte ptr [esp+4+arg_34+2], dl
0x89AB64: mov     word ptr [esp+4+arg_2C], 1
0x89AB6B: mov     word ptr [esp+4+arg_2C+2], 2
0x89AB72: mov     word ptr [esp+4+arg_30], 3
0x89AB79: mov     word ptr [esp+4+arg_30+2], 4
0x89AB80: call    sub_8DA870
0x89AB85: mov     eax, [esi+7Ch]
0x89AB88: mov     ecx, [esi+74h]
0x89AB8B: add     eax, 1A50h
0x89AB90: mov     [ecx+28h], eax
0x89AB93: mov     ecx, ds:0BA7D98h
0x89AB99: mov     edx, [ecx]
0x89AB9B: push    2Fh ; '/'
0x89AB9D: push    6Ch ; 'l'
0x89AB9F: call    dword ptr [edx+10h]
0x89ABA2: push    esi
0x89ABA3: mov     ecx, eax
0x89ABA5: mov     word ptr [eax+4], 6Ch ; 'l'
0x89ABAB: call    sub_8DE400
0x89ABB0: mov     [esi+30h], eax
0x89ABB3: mov     word ptr [eax+20h], 0FFFFh
0x89ABB9: mov     eax, [esi+30h]
0x89ABBC: add     eax, 28h ; '('
0x89ABBF: mov     [eax], bl
0x89ABC1: mov     eax, [esi+30h]
0x89ABC4: add     eax, 29h ; ')'
0x89ABC7: mov     [eax], bl
0x89ABC9: cmp     [esi+0A4h], bl
0x89ABCF: jnz     short loc_89AC22
0x89ABD1: mov     ecx, ds:0BA7D98h
0x89ABD7: mov     eax, [ecx]
0x89ABD9: push    2Fh ; '/'
0x89ABDB: push    6Ch ; 'l'
0x89ABDD: call    dword ptr [eax+10h]
0x89ABE0: push    esi
0x89ABE1: mov     ecx, eax
0x89ABE3: mov     word ptr [eax+4], 6Ch ; 'l'
0x89ABE9: call    sub_8DE400
0x89ABEE: mov     edx, [esi+40h]
0x89ABF1: lea     ecx, [esi+38h]
0x89ABF4: and     edx, 3FFFFFFFh
0x89ABFA: cmp     [ecx+4], edx
0x89ABFD: mov     dword ptr [esp+arg_14], eax
0x89AC01: jnz     short loc_89AC12
0x89AC03: push    4
0x89AC05: push    ecx
0x89AC06: call    sub_8A6EE0
0x89AC0B: mov     eax, dword ptr [esp+8+arg_14]
0x89AC0F: add     esp, 8
0x89AC12: mov     ecx, [esi+3Ch]
0x89AC15: mov     edx, [esi+38h]
0x89AC18: mov     [edx+ecx*4], eax
0x89AC1B: inc     dword ptr [esi+3Ch]
0x89AC1E: mov     [eax+20h], bx
0x89AC22: lea     ecx, [esp+arg_3C]
0x89AC26: call    sub_8DF420
0x89AC2B: mov     ecx, ds:0BA7FB0h
0x89AC31: push    ecx
0x89AC32: mov     eax, esp
0x89AC34: mov     [esp+4+arg_EC], 7
0x89AC3C: mov     [esp+4+arg_CC], 0
0x89AC47: mov     [eax], bl
0x89AC49: mov     eax, [ecx]
0x89AC4B: push    7CDCD39Fh
0x89AC50: call    dword ptr [eax+0Ch]
0x89AC53: mov     ecx, ds:0BA7D98h
0x89AC59: mov     edx, [ecx]
0x89AC5B: push    2Ah ; '*'
0x89AC5D: push    0C4h ; 'Ä'
0x89AC62: call    dword ptr [edx+10h]
0x89AC65: lea     ecx, [esp+4+arg_38]
0x89AC69: push    ecx
0x89AC6A: mov     ecx, eax
0x89AC6C: mov     word ptr [eax+4], 0C4h ; 'Ä'
0x89AC72: call    sub_8A9F50
0x89AC77: mov     [esi+34h], eax
0x89AC7A: mov     ecx, ds:0BA7FB0h
0x89AC80: push    ecx
0x89AC81: mov     eax, esp
0x89AC83: mov     byte ptr [eax], 1
0x89AC86: mov     edx, [ecx]
0x89AC88: push    7CDCD39Fh
0x89AC8D: call    dword ptr [edx+0Ch]
0x89AC90: mov     eax, [esi+34h]
0x89AC93: push    1
0x89AC95: push    eax
0x89AC96: mov     ecx, esi
0x89AC98: call    sub_8994E0
0x89AC9D: mov     ecx, [esi+34h]
0x89ACA0: call    sub_8BC730
0x89ACA5: mov     edx, [esi+74h]
0x89ACA8: mov     [esi+168h], ebx
0x89ACAE: lea     ecx, [esi+160h]
0x89ACB4: mov     [edx+24h], ecx
0x89ACB7: cmp     byte ptr [edi+28h], 3
0x89ACBB: jz      short loc_89ACE7
0x89ACBD: mov     ecx, ds:0BA7D98h
0x89ACC3: mov     eax, [ecx]
0x89ACC5: push    0Ch
0x89ACC7: push    30h ; '0'
0x89ACC9: call    dword ptr [eax+10h]
0x89ACCC: mov     word ptr [eax+4], 30h ; '0'
0x89ACD2: movsx   ecx, byte ptr [edi+28h]
0x89ACD6: push    ecx
0x89ACD7: push    esi
0x89ACD8: mov     ecx, eax
0x89ACDA: call    sub_8DF080
0x89ACDF: mov     [esi+154h], eax
0x89ACE5: jmp     short loc_89ACED
0x89ACE7: mov     [esi+154h], ebx
0x89ACED: mov     ecx, ds:0BA7D98h
0x89ACF3: mov     edx, [ecx]
0x89ACF5: push    12h
0x89ACF7: push    10h
0x89ACF9: call    dword ptr [edx+10h]
0x89ACFC: mov     ecx, eax
0x89ACFE: mov     word ptr [eax+4], 10h
0x89AD04: call    sub_8DEC10
0x89AD09: mov     [esi+5Ch], eax
0x89AD0C: mov     edx, [eax]
0x89AD0E: push    esi
0x89AD0F: mov     ecx, eax
0x89AD11: call    dword ptr [edx+8]
0x89AD14: cmp     byte ptr [edi+95h], 9
0x89AD1B: jz      short loc_89AD28
0x89AD1D: lea     ecx, [esi+9Ch]
0x89AD23: call    sub_8DEBE0
0x89AD28: mov     ecx, [esp+10h+arg_2F8]
0x89AD2F: mov     eax, esi
0x89AD31: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89AD36: pop     edi
0x89AD37: pop     esi
0x89AD38: pop     ebx
0x89AD39: mov     esp, ebp
0x89AD3B: pop     ebp
0x89AD3C: retn    8
