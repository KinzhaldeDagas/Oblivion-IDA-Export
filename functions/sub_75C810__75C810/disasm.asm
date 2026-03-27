0x75C810: sub     esp, 15Ch
0x75C816: push    ebx
0x75C817: mov     ebx, [esp+160h+arg_4]
0x75C81E: cmp     word ptr [ebx+48h], 0
0x75C823: push    ebp
0x75C824: mov     ebp, ecx
0x75C826: jz      loc_75CE24
0x75C82C: mov     ecx, [ebp+18h]
0x75C82F: test    ecx, ecx
0x75C831: jz      loc_75CE24
0x75C837: fldz
0x75C839: fcom    dword ptr [ebp+20h]
0x75C83C: fnstsw  ax
0x75C83E: test    ah, 44h
0x75C841: jp      short loc_75C887
0x75C843: fcomp   dword ptr [ebp+5Ch]
0x75C846: fnstsw  ax
0x75C848: test    ah, 44h
0x75C84B: jp      short loc_75C889
0x75C84D: cmp     byte ptr [ebp+62h], 0
0x75C851: jnz     short loc_75C889
0x75C853: cmp     byte ptr [ebp+24h], 0
0x75C857: fld     [esp+164h+arg_0]
0x75C85E: push    ebx; int
0x75C85F: push    ecx
0x75C860: fstp    [esp+16Ch+var_16C]; float
0x75C863: mov     ecx, ebp
0x75C865: jz      short loc_75C877
0x75C867: call    sub_75C2F0
0x75C86C: pop     ebp
0x75C86D: pop     ebx
0x75C86E: add     esp, 15Ch
0x75C874: retn    8
0x75C877: call    sub_75C590
0x75C87C: pop     ebp
0x75C87D: pop     ebx
0x75C87E: add     esp, 15Ch
0x75C884: retn    8
0x75C887: fstp    st
0x75C889: push    esi
0x75C88A: push    edi
0x75C88B: lea     esi, [ecx+64h]
0x75C88E: mov     ecx, 0Dh
0x75C893: lea     edi, [esp+16Ch+var_9C]
0x75C89A: rep movsd
0x75C89C: mov     esi, [ebp+10h]
0x75C89F: add     esi, 64h ; 'd'
0x75C8A2: mov     ecx, 0Dh
0x75C8A7: lea     edi, [esp+16Ch+var_68]
0x75C8AE: lea     eax, [esp+16Ch+var_34]
0x75C8B5: rep movsd
0x75C8B7: push    eax
0x75C8B8: lea     ecx, [esp+170h+var_68]
0x75C8BF: call    sub_718A80
0x75C8C4: lea     ecx, [esp+16Ch+var_9C]
0x75C8CB: push    ecx
0x75C8CC: lea     edx, [esp+170h+var_D0]
0x75C8D3: push    edx
0x75C8D4: lea     ecx, [esp+174h+var_34]
0x75C8DB: call    sub_53D7A0
0x75C8E0: cmp     byte ptr [ebp+60h], 0
0x75C8E4: mov     edi, [esp+16Ch+var_AC]
0x75C8EB: mov     eax, [esp+16Ch+var_A8]
0x75C8F2: mov     ecx, [esp+16Ch+var_A4]
0x75C8F9: mov     [esp+16Ch+var_120], edi
0x75C8FD: mov     [esp+16Ch+var_11C], eax
0x75C901: mov     [esp+16Ch+var_118], ecx
0x75C905: jz      short loc_75C926
0x75C907: lea     edx, [ebp+4Ch]
0x75C90A: push    edx
0x75C90B: lea     eax, [esp+170h+var_114]
0x75C90F: push    eax
0x75C910: lea     ecx, [esp+174h+var_D0]
0x75C917: call    sub_7101F0
0x75C91C: mov     ecx, [eax]
0x75C91E: mov     edx, [eax+4]
0x75C921: mov     eax, [eax+8]
0x75C924: jmp     short loc_75C92F
0x75C926: mov     ecx, [ebp+4Ch]
0x75C929: mov     edx, [ebp+50h]
0x75C92C: mov     eax, [ebp+54h]
0x75C92F: mov     [esp+16Ch+var_158], ecx
0x75C933: mov     ecx, ds:0B3F9A8h
0x75C939: mov     [esp+16Ch+var_150], eax
0x75C93D: mov     eax, ds:0B3F9B0h
0x75C942: mov     [esp+16Ch+var_154], edx
0x75C946: mov     edx, ds:0B3F9ACh
0x75C94C: mov     dword ptr [esp+16Ch+var_14C], ecx
0x75C950: lea     esi, [ebp+30h]
0x75C953: push    offset dword_B28B54
0x75C958: mov     ecx, esi
0x75C95A: mov     dword ptr [esp+170h+var_14C+4], edx
0x75C95E: mov     [esp+170h+var_144], eax
0x75C962: call    sub_8AA390
0x75C967: fld     [esp+16Ch+arg_0]
0x75C96E: test    al, al
0x75C970: jz      loc_75CA1F
0x75C976: fld     dword ptr [ebp+3Ch]
0x75C979: fcomp   qword ptr ds:0A3A5B0h
0x75C97F: fnstsw  ax
0x75C981: test    ah, 44h
0x75C984: jnp     loc_75CA1F
0x75C98A: fld     dword ptr [ebp+3Ch]
0x75C98D: fld     st(1)
0x75C98F: fucompp
0x75C991: fnstsw  ax
0x75C993: test    ah, 44h
0x75C996: jnp     loc_75CA1F
0x75C99C: fld     [esp+16Ch+var_120]
0x75C9A0: push    ecx
0x75C9A1: fsub    dword ptr [esi]
0x75C9A3: lea     ecx, [esp+170h+var_FC]
0x75C9A7: fstp    dword ptr [esp+170h+var_134]
0x75C9AB: fld     [esp+170h+var_11C]
0x75C9AF: fsub    dword ptr [esi+4]
0x75C9B2: fstp    dword ptr [esp+170h+var_134+4]
0x75C9B6: fld     [esp+170h+var_118]
0x75C9BA: fsub    dword ptr [esi+8]
0x75C9BD: fstp    [esp+170h+var_12C]
0x75C9C1: fld     dword ptr [ebp+5Ch]
0x75C9C4: fstp    [esp+170h+var_15C]
0x75C9C8: fld     dword ptr [esp+170h+var_134]
0x75C9CC: fld     [esp+170h+var_15C]
0x75C9D0: fld     st
0x75C9D2: fmulp   st(2), st
0x75C9D4: fxch    st(1)
0x75C9D6: fstp    [esp+170h+var_114]
0x75C9DA: fld     dword ptr [esp+170h+var_134+4]
0x75C9DE: fmul    st, st(1)
0x75C9E0: fstp    [esp+170h+var_110]
0x75C9E4: fmul    [esp+170h+var_12C]
0x75C9E8: fstp    [esp+170h+var_10C]
0x75C9EC: fsub    dword ptr [ebp+3Ch]
0x75C9EF: fstp    [esp+170h+var_15C]
0x75C9F3: fld     [esp+170h+var_15C]
0x75C9F7: fstp    [esp+170h+var_170]; float
0x75C9FA: push    ecx; int
0x75C9FB: lea     ecx, [esp+174h+var_114]
0x75C9FF: call    sub_4BF9B0
0x75CA04: fld     [esp+16Ch+arg_0]
0x75CA0B: mov     edx, [eax]
0x75CA0D: mov     ecx, [eax+4]
0x75CA10: mov     dword ptr [esp+16Ch+var_14C], edx
0x75CA14: mov     edx, [eax+8]
0x75CA17: mov     dword ptr [esp+16Ch+var_14C+4], ecx
0x75CA1B: mov     [esp+16Ch+var_144], edx
0x75CA1F: fstp    dword ptr [ebp+3Ch]
0x75CA22: mov     eax, [esp+16Ch+var_11C]
0x75CA26: fld     dword ptr [ebp+1Ch]
0x75CA29: mov     ecx, [esp+16Ch+var_118]
0x75CA2D: fstp    [esp+16Ch+var_15C]
0x75CA31: mov     [esi], edi
0x75CA33: fld     [esp+16Ch+var_158]
0x75CA37: mov     [esi+4], eax
0x75CA3A: fld     [esp+16Ch+var_15C]
0x75CA3E: mov     [esi+8], ecx
0x75CA41: fld     st
0x75CA43: fmulp   st(2), st
0x75CA45: fxch    st(1)
0x75CA47: fstp    dword ptr [esp+16Ch+var_134]
0x75CA4B: fld     [esp+16Ch+var_154]
0x75CA4F: fmul    st, st(1)
0x75CA51: fstp    dword ptr [esp+16Ch+var_134+4]
0x75CA55: fmul    [esp+16Ch+var_150]
0x75CA59: fstp    [esp+16Ch+var_12C]
0x75CA5D: fld     dword ptr [esp+16Ch+var_134]
0x75CA61: fadd    dword ptr [esp+16Ch+var_14C]
0x75CA65: fstp    dword ptr [esp+16Ch+var_14C]
0x75CA69: fld     dword ptr [esp+16Ch+var_14C+4]
0x75CA6D: fadd    dword ptr [esp+16Ch+var_134+4]
0x75CA71: fstp    dword ptr [esp+16Ch+var_14C+4]
0x75CA75: fld     [esp+16Ch+var_144]
0x75CA79: fadd    [esp+16Ch+var_12C]
0x75CA7D: fstp    [esp+16Ch+var_144]
0x75CA81: fld     dword ptr [esp+16Ch+var_14C+4]
0x75CA85: fld     dword ptr [esp+16Ch+var_14C]
0x75CA89: fld     [esp+16Ch+var_144]
0x75CA8D: fld     st(2)
0x75CA8F: fmulp   st(3), st
0x75CA91: fld     st(1)
0x75CA93: fmulp   st(2), st
0x75CA95: fxch    st(2)
0x75CA97: faddp   st(1), st
0x75CA99: fld     st(1)
0x75CA9B: fmulp   st(2), st
0x75CA9D: faddp   st(1), st
0x75CA9F: fstp    [esp+16Ch+var_15C]
0x75CAA3: fld     [esp+16Ch+var_15C]
0x75CAA7: fcomp   dword ptr ds:0A2FAA8h
0x75CAAD: fnstsw  ax
0x75CAAF: test    ah, 44h
0x75CAB2: jnp     loc_75CE22
0x75CAB8: mov     ecx, [esp+16Ch+var_144]
0x75CABC: mov     edx, dword ptr [esp+16Ch+var_14C]
0x75CAC0: mov     eax, dword ptr [esp+16Ch+var_14C+4]
0x75CAC4: mov     [esp+16Ch+var_12C], ecx
0x75CAC8: lea     ecx, [esp+16Ch+var_134]
0x75CACC: mov     dword ptr [esp+16Ch+var_134], edx
0x75CAD0: mov     dword ptr [esp+16Ch+var_134+4], eax
0x75CAD4: call    sub_43F350
0x75CAD9: fstp    [esp+16Ch+var_D4]
0x75CAE0: cmp     byte ptr [ebp+62h], 0
0x75CAE4: jz      short loc_75CB08
0x75CAE6: fld     dword ptr [ebp+64h]
0x75CAE9: fmul    dword ptr ds:0B3F99Ch
0x75CAEF: fstp    [esp+16Ch+var_15C]
0x75CAF3: fld     [esp+16Ch+var_15C]
0x75CAF7: call    __CIcos
0x75CAFC: fstp    [esp+16Ch+var_15C]
0x75CB00: fld     [esp+16Ch+var_15C]
0x75CB04: fstp    [esp+16Ch+var_F0]
0x75CB08: xor     edi, edi
0x75CB0A: cmp     [ebx+48h], di
0x75CB0E: jbe     loc_75CE22
0x75CB14: jmp     short loc_75CB20
0x75CB16: align 10h
0x75CB20: mov     eax, [ebx+5Ch]
0x75CB23: fld     [esp+16Ch+arg_0]
0x75CB2A: movzx   ecx, di
0x75CB2D: lea     edx, ds:0[ecx*8]
0x75CB34: sub     edx, ecx
0x75CB36: lea     esi, [eax+edx*4]
0x75CB39: fsub    dword ptr [esi+14h]
0x75CB3C: fstp    [esp+16Ch+var_124]
0x75CB40: fldz
0x75CB42: fcomp   [esp+16Ch+var_124]
0x75CB46: fnstsw  ax
0x75CB48: test    ah, 44h
0x75CB4B: jnp     loc_75CE15
0x75CB51: mov     eax, [ebx+1Ch]
0x75CB54: lea     ecx, [ecx+ecx*2]
0x75CB57: mov     edx, [eax+ecx*4]
0x75CB5A: lea     eax, [eax+ecx*4]
0x75CB5D: mov     ecx, [eax+4]
0x75CB60: mov     [esp+16Ch+var_EC], edx
0x75CB67: fld     [esp+16Ch+var_EC]
0x75CB6E: fsub    [esp+16Ch+var_120]
0x75CB72: mov     edx, [eax+8]
0x75CB75: mov     [esp+16Ch+var_E8], ecx
0x75CB7C: mov     [esp+16Ch+var_E4], edx
0x75CB83: fstp    dword ptr [esp+16Ch+var_108]
0x75CB87: mov     bl, [ebp+24h]
0x75CB8A: test    bl, bl
0x75CB8C: fld     [esp+16Ch+var_E8]
0x75CB93: fsub    [esp+16Ch+var_11C]
0x75CB97: fstp    dword ptr [esp+16Ch+var_108+4]
0x75CB9B: fld     [esp+16Ch+var_E4]
0x75CBA2: fsub    [esp+16Ch+var_118]
0x75CBA6: fstp    [esp+16Ch+var_100]
0x75CBAA: fld     dword ptr [esp+16Ch+var_108+4]
0x75CBAE: fld     dword ptr [esp+16Ch+var_108]
0x75CBB2: fld     [esp+16Ch+var_100]
0x75CBB6: fld     st(1)
0x75CBB8: fmulp   st(2), st
0x75CBBA: fld     st(2)
0x75CBBC: fmulp   st(3), st
0x75CBBE: fxch    st(1)
0x75CBC0: faddp   st(2), st
0x75CBC2: fmul    st, st
0x75CBC4: faddp   st(1), st
0x75CBC6: fstp    [esp+16Ch+var_128]
0x75CBCA: jz      short loc_75CBE0
0x75CBCC: fld     [esp+16Ch+var_128]
0x75CBD0: fld     dword ptr [ebp+2Ch]
0x75CBD3: fcompp
0x75CBD5: fnstsw  ax
0x75CBD7: test    ah, 1
0x75CBDA: jnz     loc_75CE0E
0x75CBE0: cmp     byte ptr [ebp+62h], 0
0x75CBE4: mov     eax, dword ptr [esp+16Ch+var_14C]
0x75CBE8: mov     ecx, dword ptr [esp+16Ch+var_14C+4]
0x75CBEC: mov     edx, [esp+16Ch+var_144]
0x75CBF0: mov     dword ptr [esp+16Ch+var_140], eax
0x75CBF4: mov     dword ptr [esp+16Ch+var_140+4], ecx
0x75CBF8: mov     [esp+16Ch+var_138], edx
0x75CBFC: jz      loc_75CC87
0x75CC02: mov     ecx, dword ptr [esp+16Ch+var_108+4]
0x75CC06: mov     eax, dword ptr [esp+16Ch+var_108]
0x75CC0A: mov     edx, [esp+16Ch+var_100]
0x75CC0E: mov     dword ptr [esp+16Ch+var_140+4], ecx
0x75CC12: lea     ecx, [esp+16Ch+var_140]
0x75CC16: mov     dword ptr [esp+16Ch+var_140], eax
0x75CC1A: mov     [esp+16Ch+var_138], edx
0x75CC1E: call    sub_43F350
0x75CC23: fstp    st
0x75CC25: fld     dword ptr [esp+16Ch+var_134+4]
0x75CC29: fld     dword ptr [esp+16Ch+var_140+4]
0x75CC2D: fld     st
0x75CC2F: fmulp   st(2), st
0x75CC31: fld     dword ptr [esp+16Ch+var_140]
0x75CC35: fld     st
0x75CC37: fmul    dword ptr [esp+16Ch+var_134]
0x75CC3B: faddp   st(3), st
0x75CC3D: fld     [esp+16Ch+var_12C]
0x75CC41: fld     [esp+16Ch+var_138]
0x75CC45: fld     st
0x75CC47: fmulp   st(2), st
0x75CC49: fxch    st(4)
0x75CC4B: faddp   st(1), st
0x75CC4D: fstp    [esp+16Ch+var_15C]
0x75CC51: fld     [esp+16Ch+var_15C]
0x75CC55: fld     [esp+16Ch+var_F0]
0x75CC59: fcompp
0x75CC5B: fnstsw  ax
0x75CC5D: test    ah, 41h
0x75CC60: jz      loc_75CE02
0x75CC66: fld     [esp+16Ch+var_D4]
0x75CC6D: fld     st
0x75CC6F: fmulp   st(2), st
0x75CC71: fxch    st(1)
0x75CC73: fstp    dword ptr [esp+16Ch+var_140]
0x75CC77: fld     st
0x75CC79: fmulp   st(2), st
0x75CC7B: fxch    st(1)
0x75CC7D: fstp    dword ptr [esp+16Ch+var_140+4]
0x75CC81: fmulp   st(1), st
0x75CC83: fstp    [esp+16Ch+var_138]
0x75CC87: mov     eax, [esi]
0x75CC89: mov     ecx, [esi+4]
0x75CC8C: mov     edx, [esi+8]
0x75CC8F: mov     [esp+16Ch+var_158], eax
0x75CC93: fld     [esp+16Ch+var_158]
0x75CC97: fld     dword ptr [esp+16Ch+var_140]
0x75CC9B: mov     [esp+16Ch+var_154], ecx
0x75CC9F: fld     st
0x75CCA1: mov     [esp+16Ch+var_150], edx
0x75CCA5: fsubp   st(2), st
0x75CCA7: fxch    st(1)
0x75CCA9: fstp    [esp+16Ch+var_E0]
0x75CCB0: fld     [esp+16Ch+var_154]
0x75CCB4: fld     dword ptr [esp+16Ch+var_140+4]
0x75CCB8: fld     st
0x75CCBA: fsubp   st(2), st
0x75CCBC: fxch    st(1)
0x75CCBE: fstp    [esp+16Ch+var_DC]
0x75CCC5: fld     [esp+16Ch+var_150]
0x75CCC9: fld     [esp+16Ch+var_138]
0x75CCCD: fld     st
0x75CCCF: fsubp   st(2), st
0x75CCD1: fxch    st(1)
0x75CCD3: fstp    [esp+16Ch+var_D8]
0x75CCDA: fld     [esp+16Ch+var_DC]
0x75CCE1: fmul    st, st(2)
0x75CCE3: fld     [esp+16Ch+var_E0]
0x75CCEA: fmul    st, st(4)
0x75CCEC: faddp   st(1), st
0x75CCEE: fld     [esp+16Ch+var_D8]
0x75CCF5: fmul    st, st(2)
0x75CCF7: faddp   st(1), st
0x75CCF9: fstp    [esp+16Ch+var_15C]
0x75CCFD: fld     [esp+16Ch+var_15C]
0x75CD01: fldz
0x75CD03: fcom    st(1)
0x75CD05: fnstsw  ax
0x75CD07: fstp    st(1)
0x75CD09: test    ah, 41h
0x75CD0C: jnz     loc_75CE06
0x75CD12: test    bl, bl
0x75CD14: fld     [esp+16Ch+var_124]
0x75CD18: fstp    [esp+16Ch+var_15C]
0x75CD1C: jz      loc_75CDFB
0x75CD22: fcomp   dword ptr [ebp+20h]
0x75CD25: fnstsw  ax
0x75CD27: test    ah, 44h
0x75CD2A: jnp     short loc_75CD78
0x75CD2C: fstp    st(2)
0x75CD2E: fstp    st
0x75CD30: fstp    st
0x75CD32: fld     [esp+16Ch+var_128]
0x75CD36: call    __CIsqrt
0x75CD3B: fstp    [esp+16Ch+var_15C]
0x75CD3F: fld     [esp+16Ch+var_15C]
0x75CD43: fdiv    dword ptr [ebp+28h]
0x75CD46: fld1
0x75CD48: fsubrp  st(1), st
0x75CD4A: fstp    [esp+16Ch+var_15C]
0x75CD4E: fld     [esp+16Ch+var_15C]
0x75CD52: fld     dword ptr [ebp+20h]
0x75CD55: call    __CIpow
0x75CD5A: fstp    [esp+16Ch+var_15C]
0x75CD5E: fld     [esp+16Ch+var_15C]
0x75CD62: fmul    [esp+16Ch+var_124]
0x75CD66: fstp    [esp+16Ch+var_15C]
0x75CD6A: fld     dword ptr [esp+16Ch+var_140]
0x75CD6E: fld     [esp+16Ch+var_138]
0x75CD72: fld     dword ptr [esp+16Ch+var_140+4]
0x75CD76: fxch    st(1)
0x75CD78: fld     dword ptr [ebp+58h]
0x75CD7B: fstp    [esp+16Ch+var_128]
0x75CD7F: fld     [esp+16Ch+var_128]
0x75CD83: fld     st
0x75CD85: fmulp   st(4), st
0x75CD87: fxch    st(3)
0x75CD89: fstp    [esp+16Ch+var_FC]
0x75CD8D: fld     st(2)
0x75CD8F: fmulp   st(2), st
0x75CD91: fxch    st(1)
0x75CD93: fstp    [esp+16Ch+var_F8]
0x75CD97: fmulp   st(1), st
0x75CD99: fstp    [esp+16Ch+var_F4]
0x75CD9D: fld     [esp+16Ch+var_FC]
0x75CDA1: fld     [esp+16Ch+var_15C]
0x75CDA5: fld     st
0x75CDA7: fmulp   st(2), st
0x75CDA9: fxch    st(1)
0x75CDAB: fstp    [esp+16Ch+var_114]
0x75CDAF: fld     [esp+16Ch+var_F8]
0x75CDB3: fmul    st, st(1)
0x75CDB5: fstp    [esp+16Ch+var_110]
0x75CDB9: fmul    [esp+16Ch+var_F4]
0x75CDBD: fstp    [esp+16Ch+var_10C]
0x75CDC1: fld     [esp+16Ch+var_114]
0x75CDC5: fadd    [esp+16Ch+var_158]
0x75CDC9: fstp    [esp+16Ch+var_158]
0x75CDCD: mov     eax, [esp+16Ch+var_158]
0x75CDD1: fld     [esp+16Ch+var_110]
0x75CDD5: mov     [esi], eax
0x75CDD7: fadd    [esp+16Ch+var_154]
0x75CDDB: fstp    [esp+16Ch+var_154]
0x75CDDF: mov     ecx, [esp+16Ch+var_154]
0x75CDE3: fld     [esp+16Ch+var_10C]
0x75CDE7: mov     [esi+4], ecx
0x75CDEA: fadd    [esp+16Ch+var_150]
0x75CDEE: fstp    [esp+16Ch+var_150]
0x75CDF2: mov     edx, [esp+16Ch+var_150]
0x75CDF6: mov     [esi+8], edx
0x75CDF9: jmp     short loc_75CE0E
0x75CDFB: fstp    st
0x75CDFD: jmp     loc_75CD78
0x75CE02: fstp    st
0x75CE04: jmp     short loc_75CE0A
0x75CE06: fstp    st
0x75CE08: fstp    st(2)
0x75CE0A: fstp    st
0x75CE0C: fstp    st
0x75CE0E: mov     ebx, [esp+16Ch+arg_4]
0x75CE15: add     edi, 1
0x75CE18: cmp     di, [ebx+48h]
0x75CE1C: jb      loc_75CB20
0x75CE22: pop     edi
0x75CE23: pop     esi
0x75CE24: pop     ebp
0x75CE25: pop     ebx
0x75CE26: add     esp, 15Ch
0x75CE2C: retn    8
