0x8CED20: push    ebp
0x8CED21: mov     ebp, esp
0x8CED23: and     esp, 0FFFFFFF0h
0x8CED26: sub     esp, 64h
0x8CED29: mov     eax, ds:0B30AACh
0x8CED2E: xor     eax, esp
0x8CED30: mov     [esp+64h+var_4], eax
0x8CED34: push    ebx
0x8CED35: push    esi
0x8CED36: push    edi
0x8CED37: mov     edi, [ebp+arg_0]
0x8CED3A: mov     eax, [edi+24h]
0x8CED3D: mov     esi, ecx
0x8CED3F: mov     ecx, [eax+0Ch]
0x8CED42: test    ecx, ecx
0x8CED44: mov     [esp+70h+var_58], esi
0x8CED48: jz      short loc_8CED59
0x8CED4A: lea     ebx, [ebx+0]
0x8CED50: mov     eax, ecx
0x8CED52: mov     ecx, [eax+0Ch]
0x8CED55: test    ecx, ecx
0x8CED57: jnz     short loc_8CED50
0x8CED59: mov     ebx, [eax+10h]
0x8CED5C: mov     ecx, [esi+1A8h]
0x8CED62: add     esi, 1A4h
0x8CED68: add     ebx, eax
0x8CED6A: xor     eax, eax
0x8CED6C: test    ecx, ecx
0x8CED6E: mov     [esp+70h+var_5C], ebx
0x8CED72: jle     short loc_8CED8F
0x8CED74: mov     edx, [esi]
0x8CED76: cmp     [edx], ebx
0x8CED78: jz      short loc_8CED86
0x8CED7A: add     eax, 1
0x8CED7D: add     edx, 4
0x8CED80: cmp     eax, ecx
0x8CED82: jl      short loc_8CED76
0x8CED84: jmp     short loc_8CED8F
0x8CED86: cmp     eax, 0FFFFFFFFh
0x8CED89: jnz     loc_8CEEA9
0x8CED8F: mov     ecx, ebx
0x8CED91: call    sub_8BC720
0x8CED96: mov     eax, [esi+8]
0x8CED99: and     eax, 3FFFFFFFh
0x8CED9E: cmp     [esi+4], eax
0x8CEDA1: jnz     short loc_8CEDAE
0x8CEDA3: push    4
0x8CEDA5: push    esi
0x8CEDA6: call    sub_8A6EE0
0x8CEDAB: add     esp, 8
0x8CEDAE: mov     ecx, [esi+4]
0x8CEDB1: mov     edx, [esi]
0x8CEDB3: mov     [edx+ecx*4], ebx
0x8CEDB6: add     dword ptr [esi+4], 1
0x8CEDBA: mov     ecx, [edi+20h]
0x8CEDBD: movaps  xmm0, xmmword ptr [edi]
0x8CEDC0: mov     eax, ecx
0x8CEDC2: mov     eax, [eax+0Ch]
0x8CEDC5: test    eax, eax
0x8CEDC7: movaps  [esp+70h+var_40], xmm0
0x8CEDCC: movaps  xmm0, xmmword ptr [edi+10h]
0x8CEDD0: movaps  [esp+70h+var_30], xmm0
0x8CEDD5: mov     [esp+70h+var_54], ecx
0x8CEDD9: jz      short loc_8CEDEB
0x8CEDDB: jmp     short loc_8CEDE0
0x8CEDDD: align 10h
0x8CEDE0: mov     [esp+70h+var_54], eax
0x8CEDE4: mov     eax, [eax+0Ch]
0x8CEDE7: test    eax, eax
0x8CEDE9: jnz     short loc_8CEDE0
0x8CEDEB: mov     eax, [ecx+4]
0x8CEDEE: mov     ecx, [edi+24h]
0x8CEDF1: mov     ebx, ecx
0x8CEDF3: mov     [esp+70h+var_1C], eax
0x8CEDF7: mov     eax, [ebx+0Ch]
0x8CEDFA: test    eax, eax
0x8CEDFC: jz      short loc_8CEE09
0x8CEDFE: mov     edi, edi
0x8CEE00: mov     ebx, eax
0x8CEE02: mov     eax, [ebx+0Ch]
0x8CEE05: test    eax, eax
0x8CEE07: jnz     short loc_8CEE00
0x8CEE09: mov     esi, [esp+70h+var_58]
0x8CEE0D: mov     edx, [esi+1C4h]
0x8CEE13: mov     ecx, [ecx+4]
0x8CEE16: add     esi, 1BCh
0x8CEE1C: and     edx, 3FFFFFFFh
0x8CEE22: cmp     [esi+4], edx
0x8CEE25: mov     [esp+70h+var_14], ecx
0x8CEE29: jnz     short loc_8CEE36
0x8CEE2B: push    30h ; '0'
0x8CEE2D: push    esi
0x8CEE2E: call    sub_8A6EE0
0x8CEE33: add     esp, 8
0x8CEE36: mov     ecx, [esi+4]
0x8CEE39: movaps  xmm0, [esp+70h+var_40]
0x8CEE3E: mov     edx, [esp+70h+var_1C]
0x8CEE42: lea     eax, [ecx+ecx*2]
0x8CEE45: add     ecx, 1
0x8CEE48: mov     [esi+4], ecx
0x8CEE4B: mov     ecx, [esp+70h+var_54]
0x8CEE4F: shl     eax, 4
0x8CEE52: add     eax, [esi]
0x8CEE54: mov     esi, [esp+70h+var_58]
0x8CEE58: mov     [eax+20h], ecx
0x8CEE5B: mov     ecx, [esp+70h+var_14]
0x8CEE5F: movaps  xmmword ptr [eax], xmm0
0x8CEE62: movaps  xmm0, [esp+70h+var_30]
0x8CEE67: mov     [eax+24h], edx
0x8CEE6A: add     esi, 1B0h
0x8CEE70: movaps  xmmword ptr [eax+10h], xmm0
0x8CEE74: mov     [eax+28h], ebx
0x8CEE77: mov     [eax+2Ch], ecx
0x8CEE7A: mov     edx, [esi+8]
0x8CEE7D: and     edx, 3FFFFFFFh
0x8CEE83: cmp     [esi+4], edx
0x8CEE86: jnz     short loc_8CEE93
0x8CEE88: push    4
0x8CEE8A: push    esi
0x8CEE8B: call    sub_8A6EE0
0x8CEE90: add     esp, 8
0x8CEE93: mov     eax, [esi+4]
0x8CEE96: mov     ecx, [esi]
0x8CEE98: mov     ebx, [esp+70h+var_5C]
0x8CEE9C: mov     dword ptr [ecx+eax*4], 0
0x8CEEA3: add     dword ptr [esi+4], 1
0x8CEEA7: jmp     short loc_8CEEC2
0x8CEEA9: mov     edx, [esp+70h+var_58]
0x8CEEAD: mov     ecx, [edx+1B0h]
0x8CEEB3: cmp     dword ptr [ecx+eax*4], 1
0x8CEEB7: lea     eax, [ecx+eax*4]
0x8CEEBA: jnz     short loc_8CEEC2
0x8CEEBC: mov     dword ptr [eax], 2
0x8CEEC2: cmp     byte ptr [ebx+2Ch], 1
0x8CEEC6: setz    al
0x8CEEC9: test    al, al
0x8CEECB: jnz     short loc_8CEEE1
0x8CEECD: mov     edx, [ebx+30h]
0x8CEED0: and     edx, 3Fh
0x8CEED3: cmp     dl, 14h
0x8CEED6: setz    al
0x8CEED9: test    al, al
0x8CEEDB: jz      loc_8CF0D7
0x8CEEE1: mov     ebx, [esp+70h+var_58]
0x8CEEE5: mov     eax, [ebx+18h]
0x8CEEE8: add     ebx, 10h
0x8CEEEB: and     eax, 3FFFFFFFh
0x8CEEF0: cmp     [ebx+4], eax
0x8CEEF3: jnz     short loc_8CEF00
0x8CEEF5: push    30h ; '0'
0x8CEEF7: push    ebx
0x8CEEF8: call    sub_8A6EE0
0x8CEEFD: add     esp, 8
0x8CEF00: mov     eax, [ebx+4]
0x8CEF03: lea     esi, [eax+eax*2]
0x8CEF06: shl     esi, 4
0x8CEF09: add     esi, [ebx]
0x8CEF0B: add     eax, 1
0x8CEF0E: mov     [ebx+4], eax
0x8CEF11: movaps  xmm0, xmmword ptr [edi]
0x8CEF14: movaps  xmmword ptr [esi], xmm0
0x8CEF17: movaps  xmm0, xmmword ptr [edi+10h]
0x8CEF1B: movaps  xmmword ptr [esi+10h], xmm0
0x8CEF1F: mov     eax, [edi+20h]
0x8CEF22: mov     ecx, [eax+0Ch]
0x8CEF25: test    ecx, ecx
0x8CEF27: jz      short loc_8CEF39
0x8CEF29: lea     esp, [esp+0]
0x8CEF30: mov     eax, ecx
0x8CEF32: mov     ecx, [eax+0Ch]
0x8CEF35: test    ecx, ecx
0x8CEF37: jnz     short loc_8CEF30
0x8CEF39: mov     [esi+20h], eax
0x8CEF3C: mov     eax, [edi+24h]
0x8CEF3F: mov     ecx, [eax+0Ch]
0x8CEF42: test    ecx, ecx
0x8CEF44: jz      short loc_8CEF4F
0x8CEF46: mov     eax, ecx
0x8CEF48: mov     ecx, [eax+0Ch]
0x8CEF4B: test    ecx, ecx
0x8CEF4D: jnz     short loc_8CEF46
0x8CEF4F: fld     qword ptr ds:0A99DE8h
0x8CEF55: mov     [esi+28h], eax
0x8CEF58: mov     dword ptr [esi+24h], 0
0x8CEF5F: mov     ecx, [edi+24h]
0x8CEF62: mov     edx, [ecx+4]
0x8CEF65: mov     [esi+2Ch], edx
0x8CEF68: call    __CIcos
0x8CEF6D: fstp    [esp+70h+var_5C]
0x8CEF71: mov     eax, [edi+24h]
0x8CEF74: fld     [esp+70h+var_5C]
0x8CEF78: mov     ecx, [eax]
0x8CEF7A: fstp    [esp+70h+var_5C]
0x8CEF7E: mov     edx, [ecx]
0x8CEF80: mov     eax, [edx+8]
0x8CEF83: call    eax
0x8CEF85: cmp     eax, 6
0x8CEF88: setz    bl
0x8CEF8B: test    bl, bl
0x8CEF8D: jz      loc_8CF0BE
0x8CEF93: movss   xmm4, dword ptr ds:0A46C30h
0x8CEF9B: mov     dword ptr [esi+24h], 2
0x8CEFA2: mov     ecx, [edi+24h]
0x8CEFA5: mov     eax, [ecx]
0x8CEFA7: movaps  xmm1, xmmword ptr [eax+10h]
0x8CEFAB: movaps  xmm0, xmmword ptr [eax+20h]
0x8CEFAF: movaps  xmm2, xmmword ptr [eax+20h]
0x8CEFB3: subps   xmm0, xmm1
0x8CEFB6: movaps  xmm1, xmmword ptr [eax+30h]
0x8CEFBA: subps   xmm1, xmm2
0x8CEFBD: movaps  xmm3, xmm0
0x8CEFC0: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8CEFC4: shufps  xmm0, xmm0, 0C9h ; 'É'
0x8CEFC8: movaps  xmm2, xmm1
0x8CEFCB: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8CEFCF: mulps   xmm2, xmm3
0x8CEFD2: shufps  xmm1, xmm1, 0D2h ; 'Ò'
0x8CEFD6: mulps   xmm1, xmm0
0x8CEFD9: subps   xmm1, xmm2
0x8CEFDC: movaps  xmm0, xmm1
0x8CEFDF: mulps   xmm0, xmm1
0x8CEFE2: movaps  xmm2, xmm0
0x8CEFE5: shufps  xmm2, xmm0, 55h ; 'U'
0x8CEFE9: addss   xmm2, xmm0
0x8CEFED: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CEFF1: addss   xmm0, xmm2
0x8CEFF5: movaps  xmm2, xmm0
0x8CEFF8: rsqrtss xmm2, xmm2
0x8CEFFC: mulss   xmm0, xmm2
0x8CF000: mulss   xmm0, xmm2
0x8CF004: xorps   xmm3, xmm3
0x8CF007: movss   xmm3, xmm4
0x8CF00B: movss   xmm4, dword ptr ds:0A3D65Ch
0x8CF013: subss   xmm3, xmm0
0x8CF017: xorps   xmm0, xmm0
0x8CF01A: movss   xmm0, xmm4
0x8CF01E: mulss   xmm0, xmm2
0x8CF022: mulss   xmm0, xmm3
0x8CF026: movaps  xmm2, xmm0
0x8CF029: shufps  xmm2, xmm0, 0
0x8CF02D: lea     edx, [esp+70h+var_50]
0x8CF031: mulps   xmm2, xmm1
0x8CF034: movaps  [esp+70h+var_50], xmm2
0x8CF039: mov     eax, [ecx+8]
0x8CF03C: push    edx
0x8CF03D: push    eax
0x8CF03E: mov     ecx, edx
0x8CF040: call    sub_88FE00
0x8CF045: fldz
0x8CF047: movaps  xmm1, xmmword ptr [esi+10h]
0x8CF04B: movaps  xmm2, [esp+70h+var_50]
0x8CF050: movaps  xmm0, xmm1
0x8CF053: mulps   xmm0, xmm2
0x8CF056: movaps  xmm3, xmm0
0x8CF059: shufps  xmm3, xmm0, 55h ; 'U'
0x8CF05D: movaps  xmm4, xmm0
0x8CF060: addss   xmm3, xmm0
0x8CF064: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8CF068: addss   xmm4, xmm3
0x8CF06C: movss   dword ptr [esp+70h+var_50], xmm4
0x8CF072: fcomp   dword ptr [esp+70h+var_50]
0x8CF076: fnstsw  ax
0x8CF078: test    ah, 41h
0x8CF07B: jnz     short loc_8CF087
0x8CF07D: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8CF084: xorps   xmm2, xmm0
0x8CF087: mulps   xmm1, xmm2
0x8CF08A: movaps  xmm0, xmm1
0x8CF08D: shufps  xmm0, xmm1, 55h ; 'U'
0x8CF091: movaps  xmm2, xmm1
0x8CF094: addss   xmm0, xmm1
0x8CF098: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x8CF09C: addss   xmm2, xmm0
0x8CF0A0: movss   dword ptr [esp+70h+var_50], xmm2
0x8CF0A6: fld     dword ptr [esp+70h+var_50]
0x8CF0AA: fld     [esp+70h+var_5C]
0x8CF0AE: fcompp
0x8CF0B0: fnstsw  ax
0x8CF0B2: test    ah, 5
0x8CF0B5: jp      short loc_8CF0BE
0x8CF0B7: mov     dword ptr [esi+24h], 1
0x8CF0BE: mov     ecx, [edi+20h]
0x8CF0C1: mov     ecx, [ecx]
0x8CF0C3: mov     edx, [ecx]
0x8CF0C5: mov     eax, [edx+8]
0x8CF0C8: call    eax
0x8CF0CA: test    bl, bl
0x8CF0CC: jz      short loc_8CF0D7
0x8CF0CE: mov     ecx, [esp+70h+var_58]
0x8CF0D2: call    sub_8CE770
0x8CF0D7: mov     ecx, [esp+70h+var_4]
0x8CF0DB: pop     edi
0x8CF0DC: pop     esi
0x8CF0DD: pop     ebx
0x8CF0DE: xor     ecx, esp
0x8CF0E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CF0E5: mov     esp, ebp
0x8CF0E7: pop     ebp
0x8CF0E8: retn    4
